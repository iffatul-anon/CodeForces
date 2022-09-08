set line [gets stdin]
scan $line "%d%d%d" a b c
if {$a >= $b && $a >= $c} {
    if {$b >= $c} { puts "1 2 3" 
    } else { puts "1 3 2" }
} elseif {$b >= $a && $b >= $c} {
    if {$a >= $c} { puts "2 1 3" 
    } else { puts "3 1 2" }
} elseif {$c >= $a && $c >= $b} {
    if {$a >= $b} { puts "2 3 1" 
    } else { puts "3 2 1" }
}