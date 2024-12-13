
<body>
    <h1>Patterns in Pseudo Code</h1>  
    <pre>
        BEGIN
       <!-- Pattern 1: Square of 5x5 with numbers 1-5 in each row -->
        PRINT "Pattern 1: Square of 5x5 with numbers 1-5 in each row"
        FOR i FROM 0 TO 4
            FOR j FROM 1 TO 5
                PRINT j
            END FOR
            PRINT newline
        END FOR
        PRINT newline
        <!-- Pattern 2: Rectangle of alphabets A-X -->
        PRINT "Pattern 2: Rectangle of alphabets A-X"
        FOR i FROM 0 TO 3
            FOR j FROM 0 TO 5
                PRINT character ('A' + (i * 6 + j))
            END FOR
            PRINT newline
        END FOR
        PRINT newline
   <!-- Pattern 3: Half 5x5 Pyramid right of numbers -->
        PRINT "Pattern 3: Half 5x5 Pyramid right of numbers"
        FOR i FROM 1 TO 5
            FOR j FROM 1 TO i
                PRINT j
            END FOR
            PRINT newline
        END FOR
        PRINT newline
   <!-- Pattern 4: Half 5x5 Pyramid left of numbers -->
        PRINT "Pattern 4: Half 5x5 Pyramid left of numbers"
        FOR i FROM 1 TO 5
            FOR j FROM 0 TO (5 - i)
                PRINT "  " // print spaces
            END FOR
            FOR j FROM 1 TO i
                PRINT j
            END FOR
            PRINT newline
        END FOR
        PRINT newline
    <!-- Pattern 5: Half 5x5 Pyramid right of alphabets -->
        PRINT "Pattern 5: Half 5x5 Pyramid right of alphabets"
        FOR i FROM 1 TO 5
            FOR j FROM 0 TO (i - 1)
                PRINT character ('A' + j)
            END FOR
            PRINT newline
        END FOR
        PRINT newline
  <!-- Pattern 6: Square of 5x5 with alphabets a-e in each row -->
        PRINT "Pattern 6: Square of 5x5 with alphabets a-e in each row"
        FOR i FROM 0 TO 4
            FOR j FROM 0 TO 4
                PRINT character ('a' + j)
            END FOR
            PRINT newline
        END FOR
        PRINT newline
   <!-- Pattern 7: Hollow full 7x8 rectangle of stars -->
        PRINT "Pattern 7: Hollow full 7x8 rectangle of stars"
        FOR i FROM 0 TO 6
            FOR j FROM 0 TO 7
                IF i == 0 OR i == 6 OR j == 0 OR j == 7 THEN
                    PRINT "* "
                ELSE
                    PRINT "  " // print spaces
                END IF
            END FOR
            PRINT newline
        END FOR
        PRINT newline
    <!-- Pattern 8: Inverted half 6 row pyramid of stars -->
        PRINT "Pattern 8: Inverted half 6 row pyramid of stars"
        FOR i FROM 6 DOWNTO 1
            FOR j FROM 1 TO i
                PRINT "* "
            END FOR
            PRINT newline
        END FOR
        PRINT newline
      <!-- Pattern 9: Hollow inverted 6 row half pyramid of stars -->
        PRINT "Pattern 9: Hollow inverted 6 row half pyramid of stars"
        FOR i FROM 6 DOWNTO 1
            FOR j FROM 1 TO i
                IF i == 6 OR i == 1 OR j == 1 OR j == i THEN
                    PRINT "* "
                ELSE
                    PRINT "  " // print spaces
                END IF
            END FOR
            PRINT newline
        END FOR
        PRINT newline
    <!-- Pattern 10: Full 6 row pyramid of stars -->
        PRINT "Pattern 10: Full 6 row pyramid of stars"
        FOR i FROM 1 TO 6
            FOR j FROM 1 TO (6 - i)
                PRINT "  " // print spaces
            END FOR
            FOR j FROM 1 TO (2 * i - 1)
                PRINT "* "
            END FOR
            PRINT newline
        END FOR
        PRINT newline
    <!-- Pattern 11: Inverted full 6 row pyramid of stars -->
        PRINT "Pattern 11: Inverted full 6 row pyramid of stars"
        FOR i FROM 6 DOWNTO 1
            FOR j FROM 1 TO (6 - i)
                PRINT "  " // print spaces
            END FOR
            FOR j FROM 1 TO (2 * i - 1)
                PRINT "* "
            END FOR
            PRINT newline
        END FOR
        PRINT newline
    <!-- Pattern 12: Hollow full 6 row pyramids of stars -->
        PRINT "Pattern 12: Hollow full 6 row pyramids of stars"
        FOR i FROM 1 TO 6
            FOR j FROM 1 TO (6 - i)
                PRINT "  " // print spaces
            END FOR
            FOR j FROM 1 TO (2 * i - 1)
                IF j == 1 OR j == (2 * i - 1) OR i == 6 THEN
                    PRINT "* "
                ELSE
                    PRINT "  " // print spaces
                END IF
            END FOR
            PRINT newline
        END FOR

        END
    

