
Algorithm to Calculate Employee Net Income

1. Start

   
2. Input Employee Details

   • Prompt the user to enter the employee's name.

   • Read the employee's name.

   • Prompt the user to enter the employee's base salary in birr.

   • Read the base salary.

   • Prompt the user to enter the employee's bonus rate (between 0 and 1).

   • Read the bonus rate.

   • Prompt the user to enter the employee's overtime hours.

   • Read the overtime hours.

3. Check Overtime Hours

   • If overtime hours are greater than 40:

     • Prompt the user to enter the overtime bonus rate.

     • Read the overtime bonus rate.

4. Calculate Hourly Rate

   • Set std_work_hrs_permonth to 176.

   • Calculate hourly_rate as base_salary / std_work_hrs_permonth.

5. Calculate Bonus

   • Calculate bonus as over_time_hour * hourly_rate * bonus_rate.

6. Calculate Gross Salary

   • Calculate gross_salary as base_salary + bonus.

7. Determine Tax Rate

   • If gross_salary <= 200, set tax_rate to 0.

   • Else if gross_salary > 200 and <= 600, set tax_rate to 0.1.

   • Else if gross_salary > 600 and <= 1200, set tax_rate to 0.15.

   • Else if gross_salary > 1200 and <= 2000, set tax_rate to 0.2.

   • Else if gross_salary > 2000 and <= 3500, set tax_rate to 0.25.

   • Else, set tax_rate to 0.3.

8. Calculate Pension

   • Calculate pension as gross_salary * 0.07.

9. Calculate Tax

   • Calculate tax as gross_salary * tax_rate.

10. Calculate Net Income

    • Calculate net_income as gross_salary - (tax + pension).

11. Output Results

    • Print the employee's name.

    • Print the employee's base salary.

    • Print the employee's net income.

    • Print the employee's bonus payment.

12. End
