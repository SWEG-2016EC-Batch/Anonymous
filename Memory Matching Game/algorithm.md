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

*To initiate the round set gameover = false.

*As gameover is not yet set the round is still active.

*Show the user the current state of the grid:

*Display the revealed numbers.

*All unrevealed numbers should be hidden behind an asterisk (*).

• Receive User Input:

*ask for the row and the column of the first card.

*ask for the row and the column of the second card.

*The input values must be verified for boundaries, including the indices.

*If a user calls a card twice, the system must ask him to input again.

*If the card has already been selected the user must be informed and put the input prompts such card  again.
        
    

















## FLOWCHART 

   ``` mermaid 
       graph TD
    A(Start) --> B[Display Game Menu]
    B --> C[Input Level Choice]
    C --> D[Validate Input]
    D --> E[Set Columns Based on Choice]
    E --> F[Initialize Grid]
    F --> G[Shuffle Grid]
    G --> H[Main Game Loop]
    H --> I[Display Grid with astrisk]
    I --> J[Input Card 1]
    J --> K[Validate Input]
    K --> L[Input Card 2]
    L --> M[Validate Input]
    M --> N[Reveal Cards]
    N --> O[Display Updated Grid]
    O --> P{Check for Match?}
    P -- Yes --> Q[Win, Increment Win Count]
    P -- No --> R[Lose, Reshuffle, Increment Loss Count]
    Q --> S[Ask to Continue]
    R --> S
    S --> T[Validate Input]
    T --> U{Continue or Exit?}
    U -- Yes --> H
    U -- No --> V[Exit Game]
    V --> W[Display Win/Loss Summary]
    W --> X(End Game)
    X --> Y[Display Congratulations]
    Y --> Z(End)
