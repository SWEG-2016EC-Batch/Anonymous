*Reverse a number 

Algorithm:

1. Initialize a variable reversed_num to 0.

2. While the input number num is greater than 0:

   • Get the last digit by calculating digit = num % 10.

   • Divide num by 10 to remove the last digit.

   • Update reversed_num by multiplying it by 10 and adding digit.

3. Return or print reversed_num.

▎* Count Digits

Algorithm:

1. Initialize a variable count to 0.

2. While the input number num is greater than 0:

   • Divide num by 10.

   • Increment count by 1.

3.Return or print count.

▎* Find Product of Even Digits

Algorithm:

1. Initialize a variable product to 1 and a boolean flag has_even to false.

2. While the input number num is greater than 0:

   • Get the last digit by calculating digit = num % 10.

   • If digit is even:

     • Multiply product by digit.

     • Set has_even to true.

   • Divide num by 10 to remove the last digit.

3. If has_even is true, return or print product. Otherwise, indicate that there are no even digits.

▎* Sum of First and Last Digit

Algorithm:

1. Get the last digit by calculating last_digit = num % 10.

2. To find the first digit:

   • Use a loop to divide num by 10 until it is less than 10.

   • The remaining value of num is the first digit.

3. Calculate sum = first_digit + last_digit.

4. Return or print both digits and their sum.

▎* Swap First and Last Digit

Algorithm:

1. Get the last digit using last_digit = num % 10.

2. To find the first digit:

   • Use a loop to divide num by 10 until it is less than 10.

   • Store this value as first_digit.

3. Remove the first and last digits from the original number:

   • Calculate the new number as new_num = (num / 10).

4. Append the first digit at the end and prepend the last digit at the beginning:

   • Calculate swapped_num = (last_digit * (multiplier)) + new_num * 10 + first_digit, where multiplier is a power of 10 based on the number of digits in the original number.

5. Return or print swapped_num.

▎* Check for Palindrome

Algorithm:

1. Store the original number in a variable.

2. Initialize a variable reversed_num to 0.

3. While the input number is greater than 0:

   • Get the last digit and update reversed_num as in the reversing algorithm.

4. After exiting the loop, compare the original number with reversed_num.

5. If they are equal, it is a palindrome; otherwise, it is not.

▎* Frequency of Each Digit

Algorithm:

1. Initialize an array of size 10 (for digits 0-9) to store counts, all set to zero.

2. While the input number is greater than 0:

   • Get the last digit and increment its corresponding index in the array.

   • Divide the number by 10 to remove the last digit.

3. After processing, print the frequency of each digit from the array.

▎* Check if Strong Number

Algorithm:

1. Initialize a variable sum_of_factorials to 0.

2. For each digit in the number:

   • Calculate its factorial and add it to sum_of_factorials.

3. After processing all digits, compare sum_of_factorials with the original number.

4. If they are equal, it is a strong number; otherwise, it is not.

▎9. Check if Perfect Number

Algorithm:

1. Initialize a variable sum_of_divisors to 0.

2. For each integer from 1 to half of the input number:

   • If it divides evenly into the number, add it to sum_of_divisors.

3. After checking all possible divisors, compare sum_of_divisors with the original number.

4. If they are equal, it is a perfect number; otherwise, it is not.

