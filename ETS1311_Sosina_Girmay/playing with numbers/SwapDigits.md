## pseudo code  
step 1: start  

step 2: read input  
- number  
- size

step 3: check if the input is valid. If it is, then goto step 4. If it is not valid, then goto step 2   

step 4: calculate the last digit as last digit = number % 10  

step 5: calculate the first digit as first digit = number / 10^(size - 1)  

step 6: find the middle numbers as number = number % 10^(size - 1)  

step 7: to remove the last digit divide the number by 10  

step 8: determine the new number as = last digit * 10^(size-1) + number * 10 + first digit  

step 9: print the swapped number  

step 10: end 
