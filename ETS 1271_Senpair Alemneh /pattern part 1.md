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
  * to print 5 number 5 times
      * initalize counter i to 1
      * set i<=5 and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j<=5 and increment j by 1 for the column
        * print j
      * print a new line
  * to print alpahbets upto x in 4 rows 
      * initalize counter i to A
      * set i<=x and increment i by 1 for the row
      * print i
      * if (i+2)%6=0 (since from a upto x alphabets are 24, every time i is on the 6th element prints new line and i+2 is for f that has value of 70 in ASCII code indivisible by 6 so add 2 to module it by 6) 
      * print another new line
  * to print natural numbers upto 5, 5 times in half pyramid to the left.
      * initalize counter i to 1
      * set i<=5 and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j<=5-(5-i) and increment j by 1 for the column ( why? first iteration = 5-4=1, second iteration = 5-3=2...)
        * print j
      * print a new line
  * to print natural numbers upto 5, 5 times in half pyramid to the right.
      * initalize counter i to 1
      * set i<=5 and increment i by 1 for the row
      * for each row
        * initalize another counter j to 5-i
        * set j>0 and decrement j by 1 for the column 
        * print space
        * initalize another counter k to i
        * set k>=1 and decrement k by 1 for the column 
        * print k
      * print a new line
  * to print alphabets upto e, 5 times in half pyramid.
      * initalize counter i to 1
      * set i<=5 and increment i by 1 for the row
      * for each row
        * initalize another character counter j to 'A'
        * set j>'A'+i and increment j by 1 for the column ( why? first iteration i=1, j= A, print 'A', second iteration i=2, j='A'+i, j prints ,A B) 
        * print j
      * print new line
  * to print alphabets upto e, 5 times.
      * initalize counter i to 1
      * set i<=5 and increment i by 1 for the row
      * print a,b,c,d,e
  * to print hollow rectangle.
      * initalize counter i to 1
      * set i<=6 and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j<=7 and increment j by 1 for the column
        * if j<=1 or j=7 or i=1 or i=6, print the sign *
        * else print space
      * print new line
  * to print inverted half pyramid.
      * initalize counter i to 0
      * set i<5 and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j <= 5-i and increment j by 1 for the column
        * print the sign * with a space (why? the space affects the pattern)
      * print new line
  * to print hollow inverted half pyramid
      * initalize counter i to 6
      * set i>=1 and decrement i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j<=i and increment j by 1 for the column
        * if j=1 or j=i or i=1 or i=6, print the sign * with space (why? the space affects the pattern)
        * else print 2 space (why? the space affects the pattern)
      * print new line
  * to print full pyramid
      * initalize counter i to 1
      * set i<=6 and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j <= 6-i and increment j by 1 for the column
        * print 2 spaces (why? the space affects the pattern)
        * initalize another counter k to 1
        * set k <= i and increment k by 1 for the column
        * print 2 spaces then the sign * and then another space (why? the space affects the pattern)
      * print new line
  * to print inverted full pyramid
      * initalize counter i to 1
      * set i<=6 and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j <= 6-(6-i) and increment j by 1 for the column
        * print 2 spaces (why? the space affects the pattern)
        * initalize another counter k to 1
        * set k <= 6-i and increment k by 1 for the column
        * print 2 spaces then the sign * and then another space (why? the space affects the pattern)
      * print new line
  *  to print hollow pyramid
     * initalize counter i to 1
      * set i<=6 and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j <= 6-i and increment j by 1 for the column
        * print 2 spaces (why? the space affects the pattern)
        * initalize another counter k to 1
        * set k <=6-(6-i) and increment k by 1 for the column
        * if i=6 or k=1 or k=6-(6-i), print 2 spaces then the sign * and then another space (why? the space affects the pattern)
        * else print 4 spaces 
      * print new line
* end 
    
       
