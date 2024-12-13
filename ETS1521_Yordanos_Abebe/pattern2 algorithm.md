
▎Algorithm 

1. Start

   
2. Display Menu:

   • Print the menu options for pattern generation.

   • Options include various patterns (natural numbers, alphabets, pyramids, etc.).

3. Input User Choice:

   • Prompt the user to enter a number corresponding to their choice of pattern.

   • Validate the input to ensure it is between 1 and 12.

4. While Loop (for repeating the process):

   • Initialize a variable choice to control the loop.

   • Do the following until the user chooses to exit:

     • If the input is invalid, prompt again for a valid number.

5. Switch Case:

   • Based on the user's choice, call the appropriate function:

     • Case 1: Call five_times() to print natural numbers.

     • Case 2: Call alphabets() to print alphabets.

     • Case 3: Call pyramid_left() to print half pyramid left aligned.

     • Case 4: Call pyramid_right() to print half pyramid right aligned.

     • Case 5: Call alphabets_pyramid() to print alphabet pyramid.

     • Case 6: Call five_alphabets() to print five alphabets in one line.

     • Case 7: Call hollow() to print a hollow rectangle.

     • Case 8: Call inverted_pyramid() to print an inverted half pyramid.

     • Case 9: Call hollow_pyramid() to print a hollow inverted pyramid.

     • Case 10: Call full() to print a full pyramid.

     • Case 11: Call inverted_full() to print an inverted full pyramid.

     • Case 12: Call hollow_p() to print a hollow pyramid.

6. Ask User for Continuation:

   • After displaying the pattern, ask the user if they want to see more patterns (input 0 for no, 1 for yes).

7. End Loop if User Chooses Not to Continue.

8. Display Exit Message:

   • Print a goodbye message.

9. End
        

        Note

 * For each case in the switch statement, you will need to implement specific functions. 

• five_times(): 

  • Input number of rows and columns.

  • Print numbers from 1 to column in each row.

• alphabets():

  • Input the number of columns.

  • Print alphabets from 'A' up to the specified column.

• pyramid_left():

  • Input number of rows.

  • Print a left-aligned half pyramid using natural numbers.

• pyramid_right():

  • Input number of rows.

  • Print a right-aligned half pyramid using natural numbers.

• alphabets_pyramid():

  • Input number of rows.

  • Print a pyramid of alphabets.

• five_alphabets():

  • Print the first five alphabets in one line.

• hollow():

  • Input dimensions for a rectangle.

  • Print a hollow rectangle.

• inverted_pyramid():

  • Input number of rows.

  • Print an inverted half pyramid.

• hollow_pyramid():

  • Input number of rows.

  • Print a hollow inverted pyramid.

• full():

  • Input number of rows.

  • Print a full pyramid.

• inverted_full():

  • Input number of rows.

  • Print an inverted full pyramid.

• hollow_p():

  • Input number of rows for a hollow pyramid.

