## pseudo code  
step 1: start  

step 2: read input  
- number  
  
step 3:  check if the input is valid. If it is not, then goto step 2. If it is valid, then goto step 4   

step 4: calculate the last digit as last digit = number % 10  

step 5: update the value of number as number = number / 10  

step 6: calculate the first digit of the number  

    6.1 first digit = number % 10  
    6.2 number = number / 10  
    6.3 repeate these steps until number becomes 0  
step 7: print both the first and last digits and their sum as well  

step 8: end