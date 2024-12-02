<a name="readme-top"></a>
<div align="center">
  <h1><b> Power calculator </b></h1>
<html>
<body>
    <h1>Pseudocode for Salary Calculation</h1>
    <pre><code>
BEGIN

    DECLARE employeename AS STRING
    DECLARE weeklyhours AS DOUBLE
    DECLARE bonusrate AS DOUBLE
    DECLARE basesalary AS DOUBLE
    DECLARE bonuspayment AS DOUBLE
    DECLARE grosssalary AS DOUBLE
    DECLARE pension AS DOUBLE
    DECLARE tax AS DOUBLE
    DECLARE netsalary AS DOUBLE

    PRINT "Enter the Employee Full Name: "
    READ employeename
  
    PRINT "Enter the weekly working hours: "
    READ weeklyhours
  
    PRINT "Enter the bonus rate per hour: "
    READ bonusrate
  
    PRINT "Enter the base salary in birr: "
    READ basesalary

    // Calculate bonus payment
    bonuspayment = weeklyhours * bonusrate
  
    // Calculate gross salary
    grosssalary = basesalary + bonuspayment
  
    // Calculate pension deduction
    pension = grosssalary * 0.05
  
    // Calculate tax deduction
    tax = grosssalary * 0.15
  
    // Calculate net salary
    netsalary = grosssalary - (pension + tax)

    // Output results
    PRINT "---- Salary Details for " + employeename + " with weekly working hour " + weeklyhours + ", bonus rate per hour " + bonusrate + " and base salary in birr of " + basesalary + " is: ----"
    PRINT "Bonus Payment: " + bonuspayment + " birr"
    PRINT "Gross Salary: " + grosssalary + " birr"
    PRINT "Net Salary: " + netsalary + " birr"

END
    </code></pre>
</body>
</html>
