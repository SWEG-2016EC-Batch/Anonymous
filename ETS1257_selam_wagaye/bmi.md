
<div align = "center">
  <h1> BMI calcuator </h1>
<body>
  <div align ="left">
    <h2>Problem Analysis for BMI Calculator</h2>
    
   <h3>Input:</h3>
    <ul>
        <li>An integer <strong>persons_number</strong> indicating how many persons' BMI will be calculated.</li>
        <li>For each person:
            <ul>
                <li>A float <strong>weight</strong> representing the person's weight in kilograms.</li>
                <li>A float <strong>height</strong> representing the person's height in meters.</li>
            </ul>
        </li>
    </ul>

   <h3>Output:</h3>
    <ul>
        <li>The BMI for each person calculated using the formula:
            <pre>
                BMI = weight / (height * height)
            </pre>
        </li>
        <li>A message indicating the calculated BMI for each individual.</li>
    </ul>

  <h3>Operations:</h3>
    <ul>
        <li>Prompt the user to enter the number of persons for BMI calculation.</li>
        <li>Use a loop to iterate through each person.</li>
        <li>For each person:
            <ul>
                <li>Request and read their weight and height.</li>
                <li>Calculate the BMI using the formula.</li>
                <li>Output the calculated BMI to the console.</li>
            </ul>
        </li>
    </ul>
</body>
</html>
    
  <h2>Pseudocode for BMI Calculator</h2>
    <pre>
BEGIN
    DECLARE persons_number AS INTEGER
    OUTPUT "Enter the number of persons to calculate Body Mass Index (BMI)"
    INPUT persons_number
FOR i FROM 1 TO persons_number DO
    DECLARE weight AS FLOAT
    DECLARE height AS FLOAT
    DECLARE BMI AS FLOAT

  OUTPUT "Enter weight of a person in kilograms"
        INPUT weight

  OUTPUT "Enter height of a person in meters"
        INPUT height

   BMI = weight / (height * height)

 OUTPUT "Person BMI is: " + BMI
    END FOR

END
    </pre>
</body>
</html>
<h2> flowchart for BMI calculator</h2>
<a href = 
