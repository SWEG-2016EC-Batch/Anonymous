## PSUDOCODE 

* start
* declare all the necessary functions.(break the problem in to 9 sections or functions, code them separately, and join them back)
  * void five_num_five_times()
  * void alphabets_upto_x()
  * void num_half_pyramid_left()
  * void num_half_pyramid_right()
  * void aphabets_half_pyramid()
  * void five_aphabets_five_times()
  * void hollow_rectangle()
  * void inverted_half_pyramid()
  * void hollow_inverted_half_pyramid()
  * void full_pyramid()
  * void inverted_full_pyramid()
  * void hollow_pyramid()
* display the menu of numbers and let the user choose number to perform the wanted calculation
* if the user ientered invalid input, allow the user to enter again
   * if the user choose 1 go to void five_num_five_times()
   * if the user choose 2 go to void alphabets_upto_x()
   * if the user choose 3 go to void num_half_pyramid_left()
   * if the user choose 4 go to void num_half_pyramid_right()
   * if the user choose 5 go to void aphabets_half_pyramid()
   * if the user choose 6 go to void five_aphabets_five_times()
   * if the user choose 7 go to void hollow_rectangle()
   * if the user choose 8 go to void inverted_half_pyramid()
   * if the user choose 9 go to void hollow_inverted_half_pyramid()
   * if the user choose 10 go to void full_pyramid()
   * if the user choose 11 go to void inverted_full_pyramid()
   * if the user choose 12 go to void hollow_pyramid()
* calculation part
  * to print 5 number n times
      * read the row and column
      * initalize counter i to 1
      * set i<=row and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j<=column and increment j by 1 for the column
        * print j
      * print a new line
  * to print alpahbets upto x in 4 rows
      * read the column
      * initalize counter i to A
      * set i<=column and increment i by 1 for the row
      * print i
      * if column = 14, then (i-8) % column= 0  then print new line 
      * if column = 19, then (i-7) % column= 0 then print new line 
      * if column = 10 or 12 or 15 or 20 , then (i-4) % column= 0 then print new line
      * if column = 7 or 9 or 21, then (i-1) % column= 0 then print new line
      * if column < 3 or 4 or 8 or 16 , then (i) % column= 0 then print new line
      * if column = 5 or 13 , then (i+1) % column= 0 then print new line
      * if column = 3 or 6 or 11 or 22, then (i+2) % column= 0 then print new line
      * if column = 23 , then (i+5) % column= 0 then print new line
      * if column = 24, then (i-16) % column= 0 then print new line
      * if column = 17, then (i+4) % column= 0 then print new line
      * if column = 18, then (i+8) % column= 0 then print new line
      * if column = 25 , then (i+11) % column= 0 then print new line
  * to print natural numbers upto 5, 5 times in half pyramid to the left.
      * read row and column
      * initalize counter i to 1
      * set i<=row and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j<=column-(column-i) and increment j by 1 for the column ( why? first iteration = 5-4=1, second iteration = 5-3=2...)
        * print j
      * print a new line
  * to print natural numbers upto 5, 5 times in half pyramid to the right.
      * read row  
      * initalize counter i to 1
      * set i<= row  and increment i by 1 for the row
      * for each row
        * initalize another counter j to row-i
        * set j>0 and decrement j by 1 for the column 
        * print space
        * initalize another counter k to i
        * set k>=1 and decrement k by 1 for the column 
        * print k
      * print a new line
  * to print alphabets upto e, 5 times in half pyramid.
      * read row  
      * initalize counter i to 1
      * set i<=row and increment i by 1 for the row
      * for each row
        * initalize another character counter j to 'A'
        * set j>'A'+i and increment j by 1 for the column ( why? first iteration i=1, j= A, print 'A', second iteration i=2, j='A'+i, j prints ,A B) 
        * print j
      * print new line
  * to print alphabets upto e, 5 times.
      * read row 
      * initalize counter i to 1
      * set i<= row and increment i by 1 for the row
      * print a,b,c,d,e
  * to print hollow rectangle.
      * read row, column 
      * initalize counter i to 1
      * set i<=row and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j<=column and increment j by 1 for the column
        * if j<=1 or j=column or i=1 or i=row, print the sign *
        * else print space
      * print new line
  * to print inverted half pyramid.
      * read row, column
      * initalize counter i to 0
      * set i<row and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j <= column-i and increment j by 1 for the column
        * print the sign * with a space (why? the space affects the pattern)
      * print new line
  * to print hollow inverted half pyramid
      * read row 
      * initalize counter i to row
      * set i>=1 and decrement i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j<=i and increment j by 1 for the column
        * if j=1 or j=i or i=1 or i=row , print the sign * with space (why? the space affects the pattern)
        * else print 2 space (why? the space affects the pattern)
      * print new line
  * to print full pyramid
      * read row 
      * initalize counter i to 1
      * set i<=row and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j <= row-i and increment j by 1 for the column
        * print 2 spaces (why? the space affects the pattern)
        * initalize another counter k to 1
        * set k <= row-(row-i) and increment k by 1 for the column
        * print 2 spaces then the sign * and then another space (why? the space affects the pattern)
      * print new line
  * to print inverted full pyramid
      * read row 
      * initalize counter i to 1
      * set i<=row and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j <= row-(row-i) and increment j by 1 for the column
        * print 2 spaces (why? the space affects the pattern)
        * initalize another counter k to 1
        * set k <= row-i and increment k by 1 for the column
        * print 2 spaces then the sign * and then another space (why? the space affects the pattern)
      * print new line
  *  to print hollow pyramid
     * read row
     * initalize counter i to 1
      * set i<=row and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j <= row-i and increment j by 1 for the column
        * print 2 spaces (why? the space affects the pattern)
        * initalize another counter k to 1
        * set k <=row-(row-i) and increment k by 1 for the column
        * if i=row or k=1 or k=row-(row-i), print 2 spaces then the sign * and then another space (why? the space affects the pattern)
        * else print 4 spaces 
      * print new line
* end 
