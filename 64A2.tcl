    set a [gets stdin]
    set f 1
    scan $a "%d" n 
    while {$n != 0} {
        set f [expr $f*$n]
        set n [expr $n-1]
    }
    puts $f
