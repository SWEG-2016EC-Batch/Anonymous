#include <iostream>
#include <cstdlib>// for rand and srand functions and also for system clear which can be used to clear the previous output
#include <ctime> // for time function
using namespace std;

// declare the necessary variables 
const int ROWS = 4;
const int MAX_COLUMNS = 8; // set it to the maximum nuber of columns 
int grid[ROWS][MAX_COLUMNS]; // declare the an array for the grid 
bool revealed[ROWS][MAX_COLUMNS] = { false }; // Initialize a boolean array to track revealed cards, defaulting all to false initially.

// function to shuffle 
void shuffle(int column) 
{
    srand(time(0));
    /* srand function help us to change the seed. There is an information about seed in the documentaion.
    - time function help generate new seed value  */

    for (int i = 0; i < ROWS * column; ++i) 
  {
    /* - now lets change the 2d array into a 1d array.
       - why? because the rand function generates only one integer and we have row index and column index which means we will have to generate two numbers
       - to do that we will divide i by column for row index  which gives us the index 0 
       - for column index we will make it the remainder */
        int nowRow = i / column;
        int nowColumn = i % column;

    
        if (!revealed[nowRow][nowColumn])
     { 
    // This condition checks if the  cell in the grid is not yet revealed.
       // - If the cell is not revealed (still hidden), we proceed to generate a random index for shuffling.
      // - This ensures that only unrevealed cells are shuffled, preserving the state of already revealed cells.
            int randomIndex;
            do 
      {
                randomIndex = rand() % (ROWS * column);
                // Generates a random index for shuffling within the grid size.
            } 
      while (revealed[randomIndex / column][randomIndex % column]); 
      
      // now change the 1d index to 2d index randomRowIndex and randomColumnIndex
      // how? Dividing the index by column gives the row number.
            int randomRowIndex = randomIndex / column;
            // remainder of the index divided by column gives the row number.
            int randomColumnIndex = randomIndex % column;
      
      // Swap the now element with the random element
            int temp = grid[nowRow][nowColumn];
            grid[nowRow][nowColumn] = grid[randomRowIndex][randomColumnIndex];
	    grid[randomRowIndex][randomColumnIndex] = temp;
        }
    }
}

int main() 
{
	// ANSI escape codes for colors
const string RESET = "\033[0m";
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string BLUE = "\033[34m";
const string MAGENTA = "\033[35m";
const string CYAN = "\033[36m";
	
	// initalize counters 
	//declare the column for the different levels 
    int column, counter = 0, wins = 0, losses = 0;

	// the menu
    cout<<BLUE << "******* MENU *******\n";
    cout<<BLUE << "Please choose the level of the game.\n";
    cout <<GREEN<< "1. Easy \n2. Medium \n3. Hard\n";
    cin >> column;

	// if the user input invalid column, accepts the column again
    while (column < 1 || column > 3)
	{
        cout <<RED<< "Invalid input! Please choose the right menu.\n";
        cin >> column;
    }

	// allow the program to adjust the level based on the user's column choice
    switch (column)
	{
        case 1: 
		column = 4;
		break;
        case 2: 
		column = 6; 
		break;
        case 3: 
		column = 8; 
		break;
    }

    // Initialize grid with pairs of numbers
    int counterValue = 0;
    // Initialize a counter to generate the numbers to be placed in the grid.
    for (int i = 0; i < ROWS; ++i) 
	{
        for (int j = 0; j < column; ++j)
		{
            grid[i][j] = counterValue++;
            // Assign the current value of counterValue to the current grid cell.
// Increment counterValue to prepare the next number.
            if (counterValue > (column * ROWS) / 2)
			{
			/* Once counterValue exceeds half the total number of grid cells,
            reset it to 1 so that numbers start repeating, forming pairs.*/
                counterValue = 1;
            }
        }
    }

    // Shuffle grid at the start
    shuffle(column);

    // declare the coordinates the user enters for the cards 
    int row1, col1, row2, col2;
    // Initialize a boolean variable to track if the game is over.
   // `gameOver` starts as `false` and becomes `true` only when all pairs are matched or the player decides to quit.
    bool gameOver = false;
    
// Main game loop
    while (!gameOver) {
        // Display the current state of the grid
        cout << "The Grid: \n";
        for (int i = 0; i < ROWS; ++i) 
		{
            for (int j = 0; j < column; ++j)
			{
				// If the current cell is revealed
                // display the corresponding number from the `grid` array.
                if (revealed[i][j])
				{
                    cout << grid[i][j] << " ";
                } 
                // otherwise hide it by using *
				else 
				{ 
                    cout<<MAGENTA << "* ";
                }
            }
            cout << endl;
        }

        // Get input for the first card
        cout<<GREEN << "\nEnter the row (0 - 3) and column (0 - " << column - 1 << ") of the first card: ";
        cin >> row1 >> col1;
        
		// if the user fails to to enter the correct rows and column or if the cards are already revealed before,allow the user to enter for rows and col again
        while (cin.fail() || row1 < 0 || row1 >= ROWS || col1 < 0 || col1 >= column || revealed[row1][col1]) { 
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<RED << "Invalid input or card already matched! Try again.\n";
            cout<<GREEN << "Enter the row (0 - 3) and column (0 - " << column - 1 << ") of the first card: ";
            cin >> row1 >> col1;
        }

        // Get input for the second card
        cout<<GREEN << "Enter the row (0 - 3) and column (0 - " << column - 1 << ") of the second card: ";
        cin >> row2 >> col2;
		
	// if the user fails to to enter the correct rows and column or if the cards are already revealed before,allow the user to enter for rows and col again
        while (cin.fail() || row2 < 0 || row2 >= ROWS || col2 < 0 || col2 >= column || revealed[row2][col2] || (row1 == row2 && col1 == col2)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout <<RED<< "Invalid input or card already matched! Try again.\n";
            cout<<GREEN<< "Enter the row (0 - 3) and column (0 - " << column - 1 << ") of the second card: ";
            cin >> row2 >> col2;
        }

        // Reveal the selected cards
        revealed[row1][col1] = true;
        revealed[row2][col2] = true;

        // Display grid after the cards are revealed, additional info starting from line 122 because the same process
        cout << "The Grid: \n";
        for (int i = 0; i < ROWS; ++i)
		 {
            for (int j = 0; j < column; ++j) 
			{
                if (revealed[i][j]) 
				{
                    cout << grid[i][j] << " ";
                }
				else
				{
                    cout<<MAGENTA << "* ";
                }
            }
            cout << endl;
        }
		
	// if the cards choosen by the user match, count for win, display win if not count for loss display lose and shuffle 
        if (grid[row1][col1] == grid[row2][col2])
		{
            cout<<BLUE << "You won! It's a match!" << endl;
            wins++;
        } 
		else 
		{
            cout<<RED << "You lose! It is not a match! Reshuffling...\n";
            revealed[row1][col1] = false;
	    revealed[row2][col2] = false;
            shuffle(column);
            losses++;
        }

        // Check if the game is over
        //make the gameOver variable to true, assuming all elements in the "revealed" array have been revealed.
        gameOver = true;
        for (int i = 0; i < ROWS; ++i) 
		{
            for (int j = 0; j < column; ++j) 
			{
				//if the current cell (revealed[i][j]) is false then Set gameOver to false to indicate the game isn't over.
                if (!revealed[i][j]) 
				{
                    gameOver = false;
                    break;
                }
            }
            //  if gameOver is false, break out of the outer loop
            if (!gameOver) 
			break;
        }
		
		// if "gameOver" remains true, display a congratulatory message indicating that the player has matched all pairs.
        if (gameOver) 
		{
            cout <<BLUE<< "Congratulations! You've matched all the pairs!\n";
        }
    }
	// check, display the player's total wins and losses 
    int rounds = wins + losses; 
    cout<<BLUE << "You played "<<rounds<<" rounds and \n You won " << wins << " rounds and lost " << losses << " rounds.\n";
    
// Ask if the user wants to continue after every win or loss
        int choice;
        // prompt the user the user to enter 1 for Yes / 0 for No
        cout<<GREEN << "Would you like to play again? (1 for Yes / 0 for No): ";
        cin >> choice;
		
		// if the choice is invalid allow the user to choose again
        while (cin.fail() || (choice != 0 && choice != 1)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<RED << "Invalid input. Please enter 1 to continue or 0 to exit: ";
            cin >> choice;
        }
		
		// if the choice is 0 or quit or  if the choice is 1 or replay
		if (choice ==1)
        {
        	cout<<" restarting... "<<endl;
        	goto play;	
		}
        else if (choice == 0) 
		{
            cout<<BLUE << "Goodbye! Thanks for playing.\n";
        }
            

return 0;
}

