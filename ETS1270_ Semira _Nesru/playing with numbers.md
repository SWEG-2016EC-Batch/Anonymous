##pseudocode

* START

* DISPLAY menu with options (1 to 9) for different operations.
  
* REPEAT
  
   a. PROMPT user to choose an option (1 to 9) or quit.
  
   b. VALIDATE input:
  
      - If invalid, PROMPT user to re-enter a valid choice.
   c. PERFORM operation based on user choice:
  
      - CASE 1: Reverse the number.
          - INPUT number.
          - REVERSE digits of the number.
          - DISPLAY reversed number.
      - CASE 2: Count digits in the number.
          - INPUT number.
          - COUNT digits.
          - DISPLAY count.
      - CASE 3: Product of even digits.
          - INPUT number.
          - MULTIPLY all even digits.
          - DISPLAY product.
      - CASE 4: First and last digit sum.
          - INPUT number.
          - FIND first and last digits.
          - DISPLAY sum.
      - CASE 5: Swap first and last digits.
          - INPUT number.
          - FIND and SWAP first and last digits.
          - DISPLAY swapped number.
      - CASE 6: Check palindrome.
          - INPUT number.
          - REVERSE digits and COMPARE with original.
          - DISPLAY result (palindrome or not).
      - CASE 7: Frequency of each digit.
          - INPUT number.
          - CALCULATE frequency of each digit (0–9).
          - DISPLAY frequencies.
      - CASE 8: Check strong number.
          - INPUT number.
          - CALCULATE sum of factorial of digits.
          - COMPARE sum with original number.
          - DISPLAY result (strong or not).
      - CASE 9: Check perfect number.
          - INPUT number.
          - CALCULATE sum of divisors.
          - COMPARE with original number.
          - DISPLAY result (perfect or not).
   d. ASK user if they want to continue.
  
* UNTIL user chooses to quit.
  
* DISPLAY "Goodbye!".

* END
