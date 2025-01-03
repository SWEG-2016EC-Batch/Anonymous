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
    W --> X[End Game]
    X --> Y[Display Congratulations]
    Y --> Z[End]
