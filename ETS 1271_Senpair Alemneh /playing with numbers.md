## PSUDOCODE 

* start
* declare all the necessary functions.(break the problem in to 9 sections or functions, code them separately, and join them back)
  * void reverseing()
  * void counting_digits()
  * void even_products()
  * void first_last_number_sum()
  * void swap_first_last_digit()
  * void palindrom()
  * void frequency_of_digit()
  * void strong()
  * void perfect()
* display the menu of numbers and let the user choose number to perform the wanted calculation
* if the user ientered invalid input, allow the user to enter again
   * if the user choose 1 go to void reverseing()
   * if the user choose 2 go to void counting_digits()
   * if the user choose 3 go to void even_products()
   * if the user choose 4 go to void first_last_number_sum()
   * if the user choose 5 go to void swap_first_last_digit()
   * if the user choose 6 go to void palindrom()
   * if the user choose 7 go to void frequency_of_digit()
   * if the user choose 8 go to void strong()
   * if the user choose 9 go to void perfect()
* calculation part
  * for reverseing
    * accept in the number to perform the reverseing
    * while number is >0, separate the digits by digit = number %10
    * set the number one less digit by number /= 10
    * reverse the number by reversed number  = reversed number  * 10 + digit
    * display result
  * for counting digit
    * accept in the number to count the digit
    * diclare a variable called count 
    * whilw number is >0, separate the digits by digit = number %10
    * set the number one less digit by number /= 10
    * increment count
    * display the result
  * for finding the product of even numbers
    * accept in the number to find the product of the even digits
    * declare a variable called product initalized to 1
    * while number is >0, separate the digits by digit = number %10
    * if modulo of digit and 2 is 0, multiply the digit to the product for every iteration
    * set the number one less digit by number /= 10
    * display the result
  * for finding the sum of last and first digits of the number
    * accept in the number to find the sum of last and first digits of the number
    * declare a variable called sum
    * find the last digit by last digit = number % 10, while the number is >0
    * find the first digit by iterating digit = number % 10 and number /= 10 untill number is <=0 thus the last iteration becomes the first number
    * find their sum by sum= nummber last + number first
    * display the result
  * for swapping the first and last digit of a number
    *  accept in the number to swap the first and last digit of a number
    *  declare a variable called a (can be any other variable to help us swap the digits)
    * find the last digit by last digit = number % 10, while the number is > 0
    * find the first digit by iterating digit = number % 10 and number /= 10 untill number is <=0 thus the last iteration becomes the first number
    * swap by making
      * a = first number
      * first number = last number
      * last number = a
    * display the result
  * to check if the number is palindrome
    * accept in the number to check if the number is palindrome
    * declare a variable called original number initalized to the number enterd (so that after the loop the number wont be lost)
    * find the last digit by last digit = number % 10, while the number is > 0
    * set the number one less digit by number /= 10
    * reverse the number by reversed number  = reversed number  * 10 + digit
    * if original number = reversed number, then the number is a palindrome
    * if not then it is not a palindrome number
  * to find the frequency of a digit
    * accept in the number to find the frequency of a digit
    * declare a variable called count initalized to 0 and number copy initalized to the number enterd (so that after the loop the number wont be lost)
    * for i = 0 and i<=9 and i incremented by 1 (all single digit numbers) 
      * find the last digit by last digit = number % 10, while the number is > 0
      * if digit == i , increment count by 1 
    *display result
  * to check wheather a number is strong or not
    * accept in the number to check wheather a number is strong or not
    * declare a variable called sum initalized for 0, factorial initalized for 1 and original number initalized to the number enterd
    * while number > 0, find the last digit by last digit = number % 10
    * set the number one less digit by number /= 10
    * find factorial
      * for i = 0 and i<=digit and i incremented by 1, factorial is multiplied for each iteration
    * if digit is 0 or 1 factorial=0
    * factorial is added on sum for each while iteration
    * check for strong number
      * if sum = original number then number is strong
      * else number is not strong
  * to check wheather a number is perfect or not
    * accept in the number to check wheather a number is perfect or not
    * declare a variable called sum initalized to 0, divisor initalized to 0 and original number initalized to the number enterd
    *  for i = 0 and i<=number and i incremented by 1
      *  if number % i =0; the divisor=1 (to find the divisors of the number)
      *  divisor is then added on sum for every iteration
      *  make divisor 0 (so that on the next iteration it will be new again)  
    * check for perfect number
      * if sum - original number  = original number then number is perfect
      * else number is not perfect
      
  
  
