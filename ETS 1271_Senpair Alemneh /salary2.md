## PSEUDOCODE

* start
* read the input (base salary, bonus rate, over time hour)
* read over time bonus rate if the over time hour is grater than 40
* calculate the tax rate
  if the gross salary < 200, tax rate is 0
  if the gross salary >= 200 and gross salary < 600, tax rate is 0.1
  if the gross salary >= 600 and gross salary < 1200, tax rate is 0.15
  if the gross salary >= 1200 and gross salary < 2000, tax rate is 0.2
  if the gross salary >= 2000 and gross salary < 3500, tax rate is 0.25
  if gross salary is >= 3500, tax rate is 0.3
* calculate the net income as
hourly rate= base salary / standard work hrs permonth
bonus = over time hour * hourly rate * bonus rate
gross salary = bonus + base salary
pension = gross salary * 0.07
tax = gross salary * tax rate
net income = gross salary - ( tax + pension)
* display the result
* end
