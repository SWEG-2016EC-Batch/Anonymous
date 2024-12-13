# Pseudo Code for Grade Calculation Program

</html>
<pre>
BEGIN
    <!-- Declare variables for the marks -->
    DECLARE quizMark, testMark, projectMark, finalMark, assignmentMark, totalMark
    <!-- Input and validation for testMark -->
    LABEL1:
    PRINT "Enter the test mark from 15%: "
    INPUT testMark
    IF testMark > 15 OR testMark < 0 THEN
        PRINT "Please enter a mark that is not above 15 or below 0"
        GOTO LABEL1
    END IF
    <!-- Input and validation for quizMark -->
    LABEL2:
    PRINT "Enter the quiz mark from 5%: "
    INPUT quizMark
    IF quizMark > 5 OR quizMark < 0 THEN
        PRINT "Please enter a mark that is not above 5 or below 0"
        GOTO LABEL2
    END IF
 <!-- Input and validation for projectMark -->
    LABEL3:
    PRINT "Enter the project mark from 20%: "
    INPUT projectMark
    IF projectMark > 20 OR projectMark < 0 THEN
        PRINT "Please enter a mark that is not above 20 or below 0"
        GOTO LABEL3
    END IF
  <!-- Input and validation for assignmentMark -->
    LABEL4:
    PRINT "Enter the assignment mark from 10%: "
    INPUT assignmentMark
    IF assignmentMark > 10 OR assignmentMark < 0 THEN
        PRINT "Please enter a mark that is not above 10 or below 0"
        GOTO LABEL4
    END IF
    <!-- Input and validation for finalMark -->
    LABEL5:
    PRINT "Enter the final exam mark from 50%: "
    INPUT finalMark
    IF finalMark > 50 OR finalMark < 0 THEN
        PRINT "Please enter a mark that is not above 50 or below 0"
        GOTO LABEL5
    END IF
    <!-- Calculate total mark -->
    totalMark = testMark + quizMark + projectMark + assignmentMark + finalMark
    <!-- Output the total mark -->
    PRINT "Total Marks from 100%: " + totalMark
   <!-- Determine the letter grade based on the total mark -->
    IF totalMark >= 90 THEN
        PRINT "Letter Grade: A+"
    ELSE IF totalMark >= 80 THEN
        PRINT "Letter Grade: A"
    ELSE IF totalMark >= 75 THEN
        PRINT "Letter Grade: B+"
    ELSE IF totalMark >= 60 THEN
        PRINT "Letter Grade: B"
    ELSE IF totalMark >= 55 THEN
        PRINT "Letter Grade: C+"
    ELSE IF totalMark >= 45 THEN
        PRINT "Letter Grade: C"
    ELSE IF totalMark >= 30 THEN
        PRINT "Letter Grade: D"
    ELSE
        PRINT "Letter Grade: F"
    END IF
END
</pre>

