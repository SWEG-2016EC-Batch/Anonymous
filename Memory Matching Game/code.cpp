          grid[randomRowIndex][randomColumnIndex] = temp;
        }
    }
}

int main() 
{
	// change the background color of the console to purple
	system("color 5e");
	
	// initalize counters 
	//declare the column for the different levels 
    int column, counter = 0, wins = 0, losses = 0;

	// the menu
    cout << "******* MENU *******\n";
    cout << "Please choose the level of the game.\n";
    cout << "1. Easy \n2. Medium \n3. Hard\n";
    cin >> column;

	// if the user input invalid column, accepts the column again
    while (column < 1 || column > 3)
	{
        cout << "Invalid input! Please choose the right menu.\n";
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
