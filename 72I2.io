    s := File standardInput readLine 
    n := s asNumber
    L := s size
    count := 0
    
    for ( i, 0, L-1,
       m := s at(i)
       m = m - 48
       if ( n % m == 0, count = count + 1 )
    )
    
    if ( count == L, "happier" println,
        if ( count == 0, "upset" println, 
            "happy" println
        )
    )
    