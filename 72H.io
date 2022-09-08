    s := File standardInput readLine 
    l := s size
    a := 0
    b := l-1

    if(s at(0) == 45,
        a = a + 1
        for(i,1,l-1,
            if(s at(i) != 48, break)
            a = a + 1
        )
        for(j,l-1,1,-1,
            if(s at(j) != 48, break)
            b = b - 1
        )
        if(b < a , "0" println,
            "-" print
            for(k,b,a,-1, s at(k) asCharacter print)
                " " println
            )
    )

    if(s at(0) != 45,
        for(i,0,l-1,
            if(s at(i) != 48, break)
            a = a + 1
        )
        for(j,l-1,0,-1,
            if(s at(j) != 48, break)
            b = b - 1
        )
        if(b < a, "0" println,
            for(k,b,a,-1, s at(k) asCharacter print)
                " " println
        )
    )