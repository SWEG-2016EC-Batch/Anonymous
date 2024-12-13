# Pseudo Code for Net Salary Calculation Program

</html>
<pre>
BEGIN
    <!-- Declare variables -->
    DECLARE employeeName[50], workedHours, bonusRate, baseSalary, bonusPayment, tax, grossSalary, pension, taxRate, netSalary
  <!-- Input employee name -->
    PRINT "Enter the employee name: "
    INPUT employeeName
   <!-- Input worked hours -->
    PRINT "Enter the working time in hours: "
    INPUT workedHours
   <!-- Check if the employee worked overtime -->
    IF workedHours > 40 THEN
        PRINT "Please enter overtime bonus rate: "
        INPUT bonusRate
    ELSE
        PRINT "There is no bonus rate to calculate for you " + employeeName
        bonusRate = 0
    END IF
   <!-- Input base salary -->
    PRINT "Enter the base salary: "
    INPUT baseSalary
  <!-- Calculate bonus payment (worked hours * bonus rate) -->
    bonusPayment = workedHours * bonusRate
  <!-- Calculate gross salary (base salary + bonus payment) -->
    grossSalary = baseSalary + bonusPayment
  <!-- Calculate pension (7% of gross salary) -->
    pension = grossSalary * 0.07
  <!-- Determine tax rate based on gross salary -->
    IF grossSalary >= 3500 THEN
        taxRate = 0.30
    ELSE IF grossSalary >= 2000 THEN
        taxRate = 0.25
    ELSE IF grossSalary >= 1200 THEN
        taxRate = 0.20
    ELSE IF grossSalary >= 600 THEN
        taxRate = 0.15
    ELSE IF grossSalary >= 200 THEN
        taxRate = 0.10
    ELSE
        taxRate = 0
    END IF
  <!-- Calculate tax (gross salary * tax rate) -->
    tax = grossSalary * taxRate
 <!-- Calculate net salary (gross salary - pension - tax) -->
    netSalary = grossSalary - (pension + tax)
  <!-- Output salary details -->
    PRINT "--- Salary Details for " + employeeName + " ---"
    PRINT "Net Salary: $" + netSalary
    PRINT "Gross Salary: $" + grossSalary
    PRINT "Base Salary: $" + baseSalary
    PRINT "Worked Hours: " + workedHours + " hrs"
    PRINT "Bonus Rate: " + bonusRate
    PRINT "Bonus Payment: $" + bonusPayment
    PRINT "Tax: $" + tax
END
</pre>

