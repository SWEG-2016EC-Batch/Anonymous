## Analysis  
  * Input
      - file size
   * Output
      - time taken to send the file
   * Operation  
  > 1. time = file size / 960
  > 2. days = time / 86400 
  > 3. time %= 86400 
  > 4. hours = time / 36oo
  > 5. time %= 3600
  > 6. minutes = time / 60
  > 7. seconds = time % 60  
  ## Pseudo code  
    step 1: start
    step 2: read input
        - file size
    step 3: calculate the time it will take to send the file in second  
        - time = file size / 960  
    step 4: calculate the time in days
        - days = time / 86400
    step 5: update the remainder of time
        - time %= 86400
    step 6: calculate the time in hours
        - hours = time / 3600
    step 7: update the remainder of the time  
        - time %= 3600  
    step 8: calculate the time in minutes  
        - minutes = time / 60  
    step 9: update the remainder time and it will be the seconds  
        - seconds = time % 60  
    step 10: print days, hours, minutes and seconds it will take to send the file  
    step 11: end  

   <div align="center">  
   
   ## flow chart  
   ![flow chart](<Serial transmission.png>)  
   