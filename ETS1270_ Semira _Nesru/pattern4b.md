##pseudocode
   
 * print j
      * print a new line
  * to print natural numbers upto 5, 5 times in half pyramid to the right.
      * read row  
      * initalize counter i to 1
      * set i<=5 and increment i by 1 for the row
      * set i<= row  and increment i by 1 for the row
      * for each row
        * initalize another counter j to 5-i
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
      * set i<=5 and increment i by 1 for the row
      * set i<=row and increment i by 1 for the row
      * for each row
        * initalize another character counter j to 'A'
        * set j>'A'+i and increment j by 1 for the column ( why? first iteration i=1, j= A, print 'A', second iteration i=2, j='A'+i, j prints ,A B) 
        * print j
      * print new line
  * to print alphabets upto e, 5 times.
      * read row 
      * initalize counter i to 1
      * set i<=5 and increment i by 1 for the row
      * set i<= row and increment i by 1 for the row
      * print a,b,c,d,e
  * to print hollow rectangle.
      * read row, column 
      * initalize counter i to 1
      * set i<=6 and increment i by 1 for the row
      * set i<=row and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j<=7 and increment j by 1 for the column
        * if j<=1 or j=7 or i=1 or i=6, print the sign *
        * set j<=column and increment j by 1 for the column
        * if j<=1 or j=column or i=1 or i=row, print the sign *
        * else print space
      * print new line
  * to print inverted half pyramid.
      * read row, column
      * initalize counter i to 0
      * set i<5 and increment i by 1 for the row
      * set i<row and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j <= 5-i and increment j by 1 for the column
        * set j <= column-i and increment j by 1 for the column
        * print the sign * with a space (why? the space affects the pattern)
      * print new line
  * to print hollow inverted half pyramid
      * initalize counter i to 6
      * read row 
      * initalize counter i to row
      * set i>=1 and decrement i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j<=i and increment j by 1 for the column
        * if j=1 or j=i or i=1 or i=6, print the sign * with space (why? the space affects the pattern)
        * if j=1 or j=i or i=1 or i=row , print the sign * with space (why? the space affects the pattern)
        * else print 2 space (why? the space affects the pattern)
      * print new line
  * to print full pyramid
      * read row 
      * initalize counter i to 1
      * set i<=6 and increment i by 1 for the row
      * set i<=row and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j <= 6-i and increment j by 1 for the column
        * set j <= row-i and increment j by 1 for the column
        * print 2 spaces (why? the space affects the pattern)
        * initalize another counter k to 1
        * set k <= i and increment k by 1 for the column
        * set k <= row-(row-i) and increment k by 1 for the column
        * print 2 spaces then the sign * and then another space (why? the space affects the pattern)
      * print new line
  * to print inverted full pyramid
      * read row 
      * initalize counter i to 1
      * set i<=6 and increment i by 1 for the row
      * set i<=row and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j <= 6-(6-i) and increment j by 1 for the column
        * set j <= row-(row-i) and increment j by 1 for the column
        * print 2 spaces (why? the space affects the pattern)
        * initalize another counter k to 1
        * set k <= 6-i and increment k by 1 for the column
        * set k <= row-i and increment k by 1 for the column
        * print 2 spaces then the sign * and then another space (why? the space affects the pattern)
      * print new line
  *  to print hollow pyramid
     * read row
     * initalize counter i to 1
      * set i<=6 and increment i by 1 for the row
      * set i<=row and increment i by 1 for the row
      * for each row
        * initalize another counter j to 1
        * set j <= 6-i and increment j by 1 for the column
        * set j <= row-i and increment j by 1 for the column
        * print 2 spaces (why? the space affects the pattern)
        * initalize another counter k to 1
        * set k <=6-(6-i) and increment k by 1 for the column
        * if i=6 or k=1 or k=6-(6-i), print 2 spaces then the sign * and then another space (why? the space affects the pattern)
        * set k <=row-(row-i) and increment k by 1 for the column
        * if i=row or k=1 or k=row-(row-i), print 2 spaces then the sign * and then another space (why? the space affects the pattern)
        * else print 4 spaces 
      * print new line
* end 
