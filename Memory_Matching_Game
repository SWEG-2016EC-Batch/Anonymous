#include <iostream>
#include <cstdlib> // for rand and srand functions and also for system clear which can be used to clear the previous output
#include <ctime> // for time function
using namespace std; 

const int row = 4;
const int maxColumns = 8; // Set a maximum number of columns
int grid[row][maxColumns];
bool revealed[row][maxColumns] = { false };
bool MatchFound = false; // shows if the first match is found then it will be used to stop the shuffle

// Function to initialize the grid
void initializeGrid(int column) {
    int counter = 1;
    for (int i = 0; i < row; ++i) { 
        for (int j = 0; j < column; ++j) { 
            grid[i][j] = counter++; 
            if (counter > (column * row)/2) 
            counter = 1; // Reset counter to repeat numbers 
        } 
    }
}

// Function to shuffle the grid
void shuffle(int column) {
    srand(time(0)); 
    /* srand function help us to change the seed. There is an information about seed in the documentaion.
    - time function help generate new seed value  */

    for (int i = 0; i < row * column; ++i) {
        /* - now lets change the 2d array into a 1d array.
		   - why? because the rand function generates only one integer and we have row index and column index which means we will have to generate two numbers
		   - to do that we will divide i by column for row index  which gives us the index 0 
		   - for column index we will make it the remainder */
        int NowRow = i / column;
        int NowColumn = i % column;
        
        // now generate new index 
        int randomIndex = rand() % (row*column); // generates the random index between 0 and row * column - 1
		// now change the 1d index to 2d index randomRowIndex and randomColumnIndex
		// how? Dividing the index by column gives the row number.
		int randomRowIndex = randomIndex / column;
		// remainder of the index divided by column gives the row number.
		int randomColumnIndex= randomIndex % column;
		
		// Swap the now element with the random element
		int temp = grid[NowRow][NowColumn];
        grid[NowRow][NowColumn] = grid[randomRowIndex ][randomColumnIndex ];
        grid[randomRowIndex ][randomColumnIndex] = temp;
        }
}

// Function to check if two selected cells match
bool checkMatch(int row1, int col1, int row2, int col2) {
    // these are the rows and column the user enters to match
    return grid[row1][col1] == grid[row2][col2];// returns true is they do match
}

// Function to reveal two selected cards
void reveal(int row1, int col1, int row2, int col2) {
    // reveal the entered cards 
    revealed[row1][col1] = true;
    revealed[row2][col2] = true;
}

// Function to hide two selected cards again
void hide(int row1, int col1, int row2, int col2) {
    revealed[row1][col1] = false;
    revealed[row2][col2] = false;
}

// Function to print the grid
void printGrid(int column) {
    for (int i = 0; i < row; ++i) {
        // for the column
        for (int j = 0; j < column; ++j) {
            if (revealed[i][j]) {
                cout << grid[i][j] << " ";
            } else {
                cout << "* "; // Print the number face down
            }
        }
        cout << endl;
    }
}

int main() {
    int n, column, counter = 0, win = 0, lose = 0;
    do {
        // prompt the user to choose the difficulty of the game
        label1:
        cout << "******* MENU *******\n";
        cout << "Please choose the level of the game.\n";
        cout << "1. easy \n2. medium \n3. hard\n"; 
        cin >> column;
        // modify the size of the column depending on the level that is chosen
        if (column == 1) {
            column = 4;
        } else if (column == 2) {
            column = 6;
        } else if (column == 3) {
            column = 8; 
        } else { 
            system("cls"); // this fuction helps us to clear the previous outputs
            cout << "Invalid input! Please choose the right menu.\n";
            goto label1; 
        }

        initializeGrid(column); // Initialize the grid with the specified number of columns
        shuffle(column); // Shuffle the grid with the specified number of columns

        cout << "The Grid: " << endl;
        printGrid(column); // prints the grid with the right number of column

        // Row and column the user enters 
        int row1, col1, row2, col2;
        bool gameOver = false;

        while (!gameOver) {
            // Accept the rows and columns from the user for the two cards 
            cout << "\nEnter the row (0 - " << row - 1 << ") and column of the first card (0 - " << column - 1 << "): ";
            cin >> row1 >> col1;
            cout << "Enter the row (0 - " << row - 1 << ") and column of the second card (0 - " << column - 1 << "): ";
            cin >> row2 >> col2;
        
            // Ensure the indices are valid
            if (row1 < 0 || row1 >= row || col1 < 0 || col1 >= column || row2 < 0 || row2 >= row || col2 < 0 || col2 >= column) {
                cout << "Invalid indices! Please try again." << endl;
                continue;
            }
            reveal(row1, col1, row2, col2); // Reveal the selected cards    

            // Show the grid with the selected cards revealed
            printGrid(column);

            if (grid[row1][col1] == grid[row2][col2]) { 
                cout << "You won! It's a match!" << endl; 
                win++;
                MatchFound = true; // Set the flag when the first match is found
            } else { 
                cout << "You lose! It is not a match! Reshuffling..." << endl;
                // Hide the selected cards again
                hide(row1, col1, row2, col2);
                if (!MatchFound) {
                    shuffle(column); // shuffle the grid only if the first match is not found
                
                }

                for (int i = 0; i < row; ++i) { 
                    for (int j = 0; j < column; ++j) { 
                        if (revealed[i][j]) { cout << grid[i][j] << " "; // Print the revealed card 
                        } else { 
                            cout << "* "; // Print the hidden card 
                        } 
                    } 
                    cout<<endl;
                }
                lose++; // counts the number of unsuccessful trials
            }

            // Check if the game is over (when all cells are revealed)
            gameOver = true;
            for (int i = 0; i < row; ++i) {
                for (int j = 0; j < column; ++j) {
                    if (!revealed[i][j]) {
                        gameOver = false;
                        break; // if all cards are revealed then beark out// if all cards are revealed then beark out
                    }
                }
                if (!gameOver) break;
                cout<<endl; 
            }

            if (gameOver) {
                cout << "Congratulations! You've matched all the pairs!" << endl;
            }
            counter++;
        }
        cout << "If you want to stop the game, press 0: ";
        cin >> n; 
    } while (n != 0);
    cout << "You played " << counter << " rounds and \nYou won " << win << " of them and \nYou lost " << lose << " of the rounds. "; 
    return 0;
}
