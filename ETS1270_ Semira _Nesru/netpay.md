##Pseudocode:

* Start
  
* Declare Variables

* basic_salary, gross_salary, net_pay, worked_hrs, bonus_rate, bonus, pension, tax, tax_rate, extra_worked_hrs, bonus_payment (all as float)

* Input basic_salary

* Print "Enter basic salary:"

* Read basic_salary

* Input worked hours

* Print "Enter worked hours:"

* Read worked_hrs

* Calculate Bonus 

* If worked_hrs > 40

* Print "Enter overtime bonus rate/hour:"

* Read bonus_rate

* Calculate bonus = worked_hrs * bonus_rate

* Else
  
* bonus = 0

* Calculate Gross Salary

* gross_salary = basic_salary + bonus

* Calculate Pension

* pension = basic_salary * 0.7

* Determine Tax Rate and Calculate Tax

* If gross_salary >= 3500

* tax = gross_salary * 0.3

* Else If gross_salary >= 2000

* tax = gross_salary * 0.25

* Else If gross_salary >= 1200

* tax = gross_salary * 0.2

* Else If gross_salary >= 600

* tax = gross_salary * 0.15

* Else If gross_salary >= 200

* tax = gross_salary * 0.1

* Else

* tax = 0

*  Calculate Net Pay

* net_pay = gross_salary - pension - tax

* Print Net pay 

* End
