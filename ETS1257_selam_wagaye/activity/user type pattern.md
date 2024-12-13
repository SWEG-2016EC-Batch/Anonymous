<h1>Pattern Generation with user preference Pseudocode</h1>
<pre><code>BEGIN
    // Declare variables
    DECLARE i, j, rows, cols
  // Get user input for pattern dimensions
    PRINT "Enter the number of rows: "
    INPUT rows
    PRINT "Enter the number of columns: "
    INPUT cols
    // Pattern 1: Square with numbers 1 to cols in each row
    PRINT "Pattern 1: Square with numbers 1-" + cols + " in each row"
    FOR i = 0 TO rows - 1
        FOR j = 1 TO cols
            PRINT j
        END FOR
        PRINT newline
    END FOR
    PRINT newline
    // Pattern 2: Rectangle of alphabets A to (rows * cols) characters
    PRINT "Pattern 2: Rectangle of alphabets A-" + char('A' + (rows * cols) - 1)
    FOR i = 0 TO rows - 1
        FOR j = 0 TO cols - 1
            PRINT char('A' + (i * cols + j))
        END FOR
        PRINT newline
    END FOR
    PRINT newline
    // Pattern 3: Half pyramid right of numbers
    PRINT "Pattern 3: Half pyramid right of numbers"
    FOR i = 1 TO rows
        FOR j = 1 TO i
            PRINT j
        END FOR
        PRINT newline
    END FOR
    PRINT newline
    // Pattern 4: Half pyramid left of numbers
    PRINT "Pattern 4: Half pyramid left of numbers"
    FOR i = 1 TO rows
        FOR j = 0 TO (rows - i) - 1
            PRINT "  "
        END FOR
        FOR j = 1 TO i
            PRINT j
        END FOR
        PRINT newline
    END FOR
    PRINT newline
    // Pattern 5: Half pyramid right of alphabets
    PRINT "Pattern 5: Half pyramid right of alphabets"
    FOR i = 1 TO rows
        FOR j = 0 TO i - 1
            PRINT char('A' + j)
        END FOR
        PRINT newline
    END FOR
    PRINT newline
    // Pattern 6: Square of alphabets a-e in each row
    PRINT "Pattern 6: Square of " + rows + "x" + cols + " with alphabets a-e in each row"
    FOR i = 0 TO rows - 1
        FOR j = 0 TO cols - 1
            PRINT char('a' + j)
        END FOR
        PRINT newline
    END FOR
    PRINT newline
    // Pattern 7: Hollow full rectangle of stars
    PRINT "Pattern 7: Hollow full rectangle of stars"
    FOR i = 0 TO rows - 1
        FOR j = 0 TO cols - 1
            IF (i == 0 OR i == rows - 1 OR j == 0 OR j == cols - 1)
                PRINT "*"
            ELSE
                PRINT "  "
            END IF
        END FOR
        PRINT newline
    END FOR
    PRINT newline
    // Pattern 8: Inverted half pyramid of stars
    PRINT "Pattern 8: Inverted half pyramid of stars"
    FOR i = rows TO 1 STEP -1
        FOR j = 1 TO i
            PRINT "*"
        END FOR
        PRINT newline
    END FOR
    PRINT newline
    // Pattern 9: Hollow inverted half pyramid of stars
    PRINT "Pattern 9: Hollow inverted half pyramid of stars"
    FOR i = rows TO 1 STEP -1
        FOR j = 1 TO i
            IF (i == rows OR i == 1 OR j == 1 OR j == i)
                PRINT "*"
            ELSE
                PRINT "  "
            END IF
        END FOR
        PRINT newline
    END FOR
    PRINT newline
    // Pattern 10: Full pyramid of stars
    PRINT "Pattern 10: Full pyramid of stars"
    FOR i = 1 TO rows
        FOR j = 1 TO (rows - i)
            PRINT "  "
        END FOR
        FOR j = 1 TO (2 * i - 1)
            PRINT "*"
        END FOR
        PRINT newline
    END FOR
    PRINT newline
    // Pattern 11: Inverted full pyramid of stars
    PRINT "Pattern 11: Inverted full pyramid of stars"
    FOR i = rows TO 1 STEP -1
        FOR j = 1 TO (rows - i)
            PRINT "  "
        END FOR
        FOR j = 1 TO (2 * i - 1)
            PRINT "*"
        END FOR
        PRINT newline
    END FOR
    PRINT newline
    // Pattern 12: Hollow full pyramid of stars
    PRINT "Pattern 12: Hollow full pyramid of stars"
    FOR i = 1 TO rows
        FOR j = 1 TO (rows - i)
            PRINT "  "
        END FOR
        FOR j = 1 TO (2 * i - 1)
            IF (j == 1 OR j == (2 * i - 1) OR i == rows)
                PRINT "*"
            ELSE
                PRINT "  "
            END IF
        END FOR
        PRINT newline
    END FOR
END</code></pre>
</body>
</html>
