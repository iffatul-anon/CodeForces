   n := File standardInput readLine 
   N := n asNumber
   L := n size
   count := 0
    
   for ( i, 0, L-1,
      m := n at(i)
      m = m - 48
      if ( N % m == 0, count = count + 1 )
   )
    
   if ( L == count, "happier" println )
   if ( L != count and count>0, "happy" println) 
   if ( count == 0, "upset" println ) 
    