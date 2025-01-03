


















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
