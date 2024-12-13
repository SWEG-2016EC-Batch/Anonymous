<h1> playing with Number Pseudocode</h1>
<pre><code>BEGIN
    // Declare variables
    DECLARE num, choice, temp, digit, rev, count, prod, first, last, sum, newNum, freq, strong, perfect
    DECLARE isPalindrome AS boolean
    // Accept an integer from the user
    PRINT "Enter a number: "
    INPUT num
    SET temp = num
    SET isPalindrome = true
    // Display the menu
    PRINT "1. Reverse of the number"
    PRINT "2. Number of digits"
    PRINT "3. Product of even digits"
    PRINT "4. First and last digit and their sum"
    PRINT "5. Swap first and last digit"
    PRINT "6. Check if the number is Palindrome"
    PRINT "7. Frequency of each digit"
    PRINT "8. Strong number"
    PRINT "9. Perfect number"
    PRINT "10. Exit" 
    // Read the user's choice
    PRINT "Enter your choice: "
    INPUT choice
    // Process the user's choice using a switch statement
    SWITCH choice
        CASE 1:
            // Reverse of the number
            SET rev = 0
            WHILE temp > 0
                SET digit = temp MOD 10
                SET rev = rev * 10 + digit
                SET temp = temp DIV 10
            END WHILE
            PRINT "Reverse of the number: " + rev
            BREAK
        CASE 2:
            // Count the number of digits
            SET count = 0
            WHILE temp > 0
                INCREMENT count
                SET temp = temp DIV 10
            END WHILE
            PRINT "Number of digits: " + count
            BREAK
        CASE 3:
            // Product of even digits
            SET prod = 1
            WHILE temp > 0
                SET digit = temp MOD 10
                IF digit MOD 2 == 0 THEN
                    SET prod = prod * digit
                END IF
                SET temp = temp DIV 10
            END WHILE
            PRINT "Product of even digits: " + prod
            BREAK
        CASE 4:
            // First and last digit and their sum
            SET first = 0
            SET last = 0
            WHILE temp > 0
                SET digit = temp MOD 10
                IF first == 0 THEN
                    SET first = digit
                END IF
                SET last = digit
                SET temp = temp DIV 10
            END WHILE
            SET sum = first + last
            PRINT "First and last digit: " + first + " and " + last
            PRINT "Sum of the first and last digits: " + sum
            BREAK
        CASE 5:
            // Swap first and last digit
            SET newNum = 0
            WHILE temp > 0
                SET digit = temp MOD 10
                IF digit == first THEN
                    SET digit = last
                ELSE IF digit == last THEN
                    SET digit = first
                END IF
                SET newNum = newNum * 10 + digit
                SET temp = temp DIV 10
            END WHILE
            PRINT "Number after swapping: " + newNum
            BREAK
        CASE 6:
            // Check if the number is Palindrome
            SET temp2 = num
            SET rev = 0
            WHILE temp2 > 0
                SET digit = temp2 MOD 10
                SET rev = rev * 10 + digit
                SET temp2 = temp2 DIV 10
            END WHILE
            IF rev == num THEN
                PRINT "Palindrome: Yes"
            ELSE
                PRINT "Palindrome: No"
            END IF
            BREAK
        CASE 7:
            // Frequency of each digit
            SET freq = 0
            SET temp2 = num
            WHILE temp2 > 0
                SET digit = temp2 MOD 10
                IF digit == first THEN
                    INCREMENT freq
                END IF
                SET temp2 = temp2 DIV 10
            END WHILE
            PRINT "Frequency of first digit: " + freq
            BREAK
        CASE 8:
            // Check if the number is Strong
            SET strong = 0
            SET temp2 = num
            WHILE temp2 > 0
                SET digit = temp2 MOD 10
                SET fact = 1
                FOR i FROM 1 TO digit
                    SET fact = fact * i
                END FOR
                SET strong = strong + fact
                SET temp2 = temp2 DIV 10
            END WHILE
            IF strong == num THEN
                PRINT "Strong number: Yes"
            ELSE
                PRINT "Strong number: No"
            END IF
            BREAK
        CASE 9:
            // Check if the number is Perfect
            SET perfect = 0
            FOR i FROM 1 TO num-1
                IF num MOD i == 0 THEN
                    SET perfect = perfect + i
                END IF
            END FOR
            IF perfect == num THEN
                PRINT "Perfect number: Yes"
            ELSE
                PRINT "Perfect number: No"
            END IF
            BREAK
        CASE 10:
            // Exit the program
            PRINT "Exiting..."
            BREAK
    END SWITCH
END</code></pre>
</body>
</html>
