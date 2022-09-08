    f1 := 0
    f2 := 1
    f :=0
    
    n := File standardInput readLine asNumber
    
    for ( i, 1, n,
        f = f1+f2
        f1 = f2
        f2 = f
    ) 

    f println
    
