    x := File standardInput readLine asNumber
    even := 0
    odd := 0
   
    for ( i, 1, x,
        if (x % i == 0, 
            if ( i % 2 == 0, 
                even = even + 1, odd = odd +1 
                )
            )
        )

    if ( even == odd, "yes" println, "no" println)
    