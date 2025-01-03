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

