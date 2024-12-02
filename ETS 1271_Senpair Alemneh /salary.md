# PSEUDOCODE

  * start 

  * declare and accept the inputs (declare and accept gross salary, over time hour, bonus rate, pension, tax, bonus, net income and employee name)

  * calculate bonus as bonus = over_time_hour * bonus_rate
 
  * calculate income salary as income_salary = bonus + gross_salary

  * calculate pension as pension = gross_salary * 0.05

  * calculate tax as  tax = income_salary * 0.15

  * net_income = income_salary - ( tax+ pension);

  * print all the results

  * end

## FLOW CHART

   ```mermaid
          graph TD
       A(start)-->B[declare and accept the inputs]
       B-->C[calculate bonus as bonus = over_time_hour * bonus_rate]
       C-->D[calculate bonus as bonus = over_time_hour * bonus_rate]
       D-->E[calculate income salary as income_salary = bonus + gross_salary]
       E-->F[calculate pension as pension = gross_salary * 0.05]
       F-->G[calculate tax as  tax = income_salary * 0.15]
       G-->H[calculate net income as  net_income = income_salary - tax+ pension]
       H-->I[print all the results]
       I-->J(end)
