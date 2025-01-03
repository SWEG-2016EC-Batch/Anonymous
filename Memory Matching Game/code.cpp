



















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

