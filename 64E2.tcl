set n [gets stdin]
scan $n "%d"
set a 0
for {set i $n} {$i > 1} {set i [expr $i-1]} {
  set flag 0
  for {set j 2} {$j <= [expr $i/2]} {set j [expr $j+1]} {
    if {$i % $j == 0} {
      set flag 1
      break
    }
  }
  if {$flag == 0} {
    set a $i
    break
  }
}
set b 0
set flag 1
while {$flag != 0} {
  set flag 0
  for {set j 2} {$j <= [expr $n/2]} {set j [expr $j+1]} {
    if {$n % $j == 0} {
      set flag 1
      break
    }
  }
  set b $n
  set n [expr $n+1]  
}
puts "$a $b"
