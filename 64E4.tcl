set n [gets stdin]
scan $n "%d"
set a 0
for {set i $n} {$i >= 2} {set i [expr $i-1]} {
  set flag 0
  for {set j 2} {$j * $j <= $i} {incr j} {
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
for {set i $n} {$i <= 20000} {incr i} {
  set flag 0
  for {set j 2} {$j * $j <= $i} {incr j} {
    if {$i % $j == 0} {
      set flag 1
      break
    }
  }
  if {$flag == 0} {
    set b $i
    break
  }
}
puts "$a $b"
