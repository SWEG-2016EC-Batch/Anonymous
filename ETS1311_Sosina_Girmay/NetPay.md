## Pseudo code  
step 1: start  
step 2: read inputs  
- basic salary
- worked hours 
- bonus rate  

step 3: if the work hour is greater than 40, ask the user to enter an overtime bonus rate then calculate the extra work hours as extra work hours = worked hours - 40.  
step 4: calculate the bonus if the worked hour is grater than 40 as bonus = extra work  hours * bonus rate.  
step 5: calculate pension as pension = basic salary * 0.7  
step 6: calculate gross salary as gross salary = basic salary + bonus.  
step 7: calculate tax  

    7.1 if gross salary is less than 200Br then tax = 0
    7.2 if gross salary is between 200Br and 600Br, then tax = gross salary * 0.10
    7.3 if gross salary is between 600Br and 1200Br, then tax = gross salary * 0.15
    7.3 if gross salary is between 1200Br and 2000Br, then tax = gross salary * 0.20
    7.4 if gross salary is between 2000Br and 3500Br, then tax = gross salary * 0.25
    7.5 if gross salary is greater than or equal to 3500Br, then tax = gross salary * 0.30  
step 8: calculate net salary as Net salary = gross salary - pension - tax  
step 9: print Net salary  
step 10: end.  