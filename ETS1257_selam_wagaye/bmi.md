
<div align = "center">
  <h1> BMI calcuator </h1>
<body>
  <div align ="left">
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
