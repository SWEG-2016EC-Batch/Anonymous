   ## The pseudocode: 

* Start the program
 
* Global variables:
  
* row = 4: Indicates the total number of rows present in the grid.
  
* maxColumns = 8: Specifies the limits of the columns’ maximum count.
  
* grid[row][maxColumns]: This is where the grid values are stored as a 2 dimensional array.
  
* revealed[row][maxColumns] = {false}: This keeps the record of the cards coming up - that have been revealed.
  
* MatchFound = false: Keeps history of at least one match that has been made.
  
* Function shuffle(column):
  
* Use the current time to set up the random number generator.
  
* For every cell in the grid, do the following:
 
   - Set up row and column value of the current cell.
   
   - Create a random index for a cell to swap with.
   
   - Pick the element in the current cell and replace it with the element in the cell that was randomly picked.
     
* main program:
* declare variables:
   - n: user decision to stop or continue (input)
   - column: number of columns based on difficulty (int)
   -counter: number of rounds played (int)
   - win: number of successful matches (int)
   - lose: number of unsuccessful attempts (int)

* start do-while loop for multiple rounds:
    * Display Menu with difficulty options:
        1. Level 1 (4 columns)
        2. Level 2 (6 columns)
        3. Level 3 (8 columns)
        
    * Get the user input for difficulty level (1, 2, or 3)
    * if input is invalid:
        * clear screen
        * ask user to input again
    
    * Set `column` based on selected level (4 for level 1, 6 for level 2, 8 for level 3)

    * Initialize Grid:
        - Grid consists of pairs of numbers
        - Shuffle grid using shuffle(column) function

•Game Loop:

* To initiate the round set gameover = false.

* As gameover is not yet set the round is still active.

* Show the user the current state of the grid:

* Display the revealed numbers.

* All unrevealed numbers should be hidden behind an asterisk (*).

• Receive User Input:

* ask for the row and the column of the first card.

* ask for the row and the column of the second card.

* The input values must be verified for boundaries, including the indices.

* If a user calls a card twice, the system must ask him to input again.

* If the card has already been selected the user must be informed and put the input prompts such card  again.

* Reveal Cards:

* Temporarily reveal the cards selected by the user on the grid.

* Print  the grid with changes made to the cards.

* Check for Match:

* In case the two cards selected are the same:

* Announce success and increase the number of wins by 1.

* Set MatchFound = true.

* If the case is that the cards are not the same:

* Let the user know about it and keep hiding the two cards this time.

* If both the cards turned out to not match even on shuffling the grid: 

* Increase the the lose count.

 * Check for Completion:
 
 * If every single card is selected gameOver = true.
 
 * The variable tracking rounds is automatically incremented by one.
 
 * End Round:
 
 * Encourage the user for completing his game.
 
 * Ask him to either stop the game (By pressing 0) or continue on round one.
 
 * After leaving the iteration, the loop continues:
 
 * Display The overall number of rounds played, and won and lost
 
 * End of Program:

## FLOWCHART 

   ``` mermaid 
       graph TD
    A(Start) --> B[Display Game Menu]
    B --> C[Input Level Choice]
    C --> D[Validate Input]
    D --> E[Set Columns Based on Choice]
    E --> F[Initialize and Shuffle Grid]
    F --> G[Main Game Loop]
    G --> H[Display Grid with Hidden Cards]
    H --> I[Input Card 1]
    I --> J[Validate Card 1]
    J --> K[Input Card 2]
    K --> L[Validate Card 2]
    L --> M[Reveal Selected Cards]
    M --> N[Display Updated Grid]
    N --> O{Do Cards Match?}
    O -- Yes --> P[Increment Wins and Keep Cards Revealed]
    O -- No --> Q[Reshuffle Grid and Increment Losses]
    P --> R{Are All Cards Revealed?}
    Q --> R
    R -- Yes --> S[Display Congratulations]
    S --> T[Display Win/Loss Summary]
    T --> U[Ask to Replay]
    U --> V{Replay or Exit?}
    V -- Replay --> F
    V -- Exit --> W(End Game)
