<html>
<body>
    <h1>Problem Analysis for Employee Salary Calculation Program</h1>

    <h2>Input</h2>
    <p>The program requires the following inputs from the user:</p>
    <ul>
        <li><strong>Employee Full Name (<em>string employeename</em>):</strong> 
            A string input representing the name of the employee.</li>
        <li><strong>Weekly Working Hours (<em>double weeklyhours</em>):</strong> 
            A numeric input that represents the total number of hours the employee worked during the week.</li>
        <li><strong>Bonus Rate per Hour (<em>double bonusrate</em>):</strong> 
            A numeric input indicating the bonus earned by the employee for each hour worked.</li>
        <li><strong>Base Salary (<em>double basesalary</em>):</strong> 
            A numeric input that signifies the employee's fixed salary expressed in birr (currency).</li>
    </ul>

    <h2>Operations</h2>
    <p>The program performs the following operations to compute the salary details:</p>
    <h3>1. Bonus Payment Calculation</h3>
    <p>The bonus payment is calculated by multiplying the weekly working hours by the bonus rate per hour.</p>
    <pre><code>bonuspayment = weeklyhours × bonusrate</code></pre>

    <h3>2. Gross Salary Calculation</h3>
    <p>The gross salary is computed as the sum of the base salary and the bonus payment.</p>
    <pre><code>grosssalary = basesalary + bonuspayment</code></pre>

    <h3>3. Pension Deduction Calculation</h3>
    <p>The pension deduction is determined as 5% of the gross salary.</p>
    <pre><code>pension = grosssalary × 0.05</code></pre>

    <h3>4. Tax Deduction Calculation</h3>
    <p>The tax deduction is calculated as 15% of the gross salary.</p>
    <pre><code>tax = grosssalary × 0.15</code></pre>

    <h3>5. Net Salary Calculation</h3>
    <p>The net salary is computed by subtracting the total deductions (pension and tax) from the gross salary.</p>
    <pre><code>netsalary = grosssalary - (pension + tax)</code></pre>

    <h2>Output</h2>
    <p>The program outputs the following details after performing the calculations:</p>

    <h3>1. Header</h3>
    <p>A formatted statement displaying the employee’s name, weekly working hours, bonus rate per hour, and base salary.</p>
    <pre><code>---- Salary Details for [employeename] with weekly working hour [weeklyhours], bonus rate per hour [bonusrate], and base salary in birr of [basesalary] ----</code></pre>

    <h3>2. Bonus Payment</h3>
    <p>Displays the total bonus payment the employee earned, formatted as:</p>
    <pre><code>Bonus Payment: [bonuspayment] birr</code></pre>

    <h3>3. Gross Salary</h3>
    <p>Shows the gross salary amount before deductions, formatted as:</p>
    <pre><code>Gross Salary: [grosssalary] birr</code></pre>

    <h3>4. Net Salary</h3>
    <p>Outputs the final net salary amount after deductions, formatted as:</p>
    <pre><code>Net Salary: [netsalary] birr</code></pre>

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
"_blank">Click here to see the flowchart
            
    
  
 
 
  

