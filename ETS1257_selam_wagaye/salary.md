<html> 
  <div align ="center">
<h1> Salary calculator</h1>

</html>
<body>
  <div align ="left">
    <h2> Problem Analysis</h2>
    
    <h2>Input Collection</h2>
   
    <h2>Calculations</h2>
    <ul>
        <li>It calculates the bonus payment by multiplying the weekly hours worked by the bonus rate.</li>
        <li>It calculates the gross salary, which is the sum of the base salary and the bonus payment.</li>
        <li>It determines the pension deduction, which is 5% of the gross salary.</li>
        <li>It calculates the tax deduction, which is 15% of the gross salary.</li>
        <li>Finally, it computes the net salary by subtracting the pension and tax from the gross salary.</li>
    </ul>

    <h2>Output</h2>
    <p>The program then outputs the employee's name, bonus payment, gross salary, and net salary.</p>
</body>
</html>
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
    </pre>
</body>
</html>
<h2> Flowchart for the power calculator </h2>
<a href="https://github.com/user-attachments/assets/47584262-62bd-41c6-a712-314e10f08505
"_blank">Click here to see the flowchart of the power calculator</a>
