set line [gets stdin]
scan $line "%d %d %d" a b c
if {$a >= $b } {
    if {$a >= $c} {
        if {$b >= $c} { puts { 1 2 3 }
        } else { puts { 1 3 2 } }
    } else { puts { 2 3 1 } } //3 1 2
} else {
    if {$b >= $c} { 
        if {$a >= $c} { puts { 2 1 3 }
        } else { puts { 3 1 2 } } //2 3 1
    } else { puts { 3 2 1 } }
}
        