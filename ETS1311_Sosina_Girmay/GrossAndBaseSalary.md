## Analysis  
  * input  
      1. Name
      2. base salary
      3. weekly working hour
      4. bonus rate  
   * output  
      1. Gross salary  
      2. Net salary  
   * Operation 
        > * monthly working hour = weekly working hour * 4
        > * bonus = monthly working hour * bonus rate 
        > * gross salary = base salary + bonus 
        > * pension = base salary * 0.05
        > * tax = gross salary * 0.15
        > * net salary = gross salary + bonus - pension - tax  
## pseudo code  
    step 1: start
    step 2: read input  
      - name, 
      - base salary, 
      - weekly working hour and 
      - bonus rate
    step 3: find monthly working hour  
      - weekly working hour * 4  
    step 4: calculate bonus  
      - bonus = monthly working hour * bonus rate
    step 5: calculate gross salary  
      - gross salary = base salary + bonus  
    step 6: calculate pension  
      - pension = base salary * 0.05  
    step 7: calculate tax
      - tax = gross salary * 0.15
    step 8: calculate net salary 
      - net salary = gross salary + bonus -tax - pension  
    step 9: print 
        * gross salary
        * net salary
    step 10: end  
<div align="center">  

## flow chart  

![alt text](image.png)

  