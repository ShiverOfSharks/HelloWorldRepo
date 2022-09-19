// ticTacToe_WireSharks.cpp Runner File
// By Dorien Fields, Dylan De Muth

#include <iostream>

/*

    possible plan

class ticTacToe{
    private:
        char[] =[3][3];
        // player1 and 2 obj? | turn based with no score count


};//class ticTacToe
*/  // Object-Oriented Design idea ends here



//Global Variables:
std::string axis[3][3]; //board



//Methods

void clearBoard() //sets all elements to " "
{                   

    for (int i; i = 0; i++) { //row iterator
        for (int j; j = 0; j++) //col iterator
            axis[i][j] = " "; //sets elements to " "
    }//for

}//clearBoard()



void cout_boardBLANK() {//prints board
    //clearBoard();

    int countOuterLoop = 0; //counts the amount of loops per line so ther is no extra " _ " character under the board    

    for (auto& index_Outer : axis) {//forloop iterates through row

        int countInnerLoop = 0; //counts the amount of loops per line so ther is no extra " | " character at the end of the board


        std::cout << "\n"; //creates a space

        for (auto& index_Inner : axis) {//forloop iterates through col

            std::cout << index_Outer; //prints element in array
            if (countInnerLoop <= 1) std::cout << " | "; //lines of the board
            countInnerLoop++; //increments countInnerLoop

        }//for inner

        if (countOuterLoop <= 1) std::cout << "\n_________\n";
        countOuterLoop++;

    }//for outer

    std::cout << "\n\n\n";

}//void cout_boardBLANK()

/* To do: AI for opponent play. Most likely random inputs
Would be easiest to implement, but needs to recognize where user has already input - Dorien */

int x = 0; // x axis for playermove
int y = 0; // y axis for playermove

int playermove(int, int) // allocate x, y variables to the same position on the grid to act out a player's move.
{
    axis[x][y];
}


int main() {

    //variables:
    std::string startGame_Input; //saves input from user to determine if game is ran


    while (true) {//game run cycle through loop, 

     //prompt:

        std::cout << "Start a TicTacToe Game? (Y/N) "; //Asks user for input to start or exit game
        std::cin >> startGame_Input; //input for prompt


       //conditions:

        if (startGame_Input.compare("Yes") == 0 || startGame_Input.compare("Y") == 0) { //start game input handling

         //TEST
            cout_boardBLANK();
            //TEST

            //call object for board and initiate a new game

            std::cout << "You are X! Where would you like to move? Input a number for x axis and then y, from 0 to 2."; // Input to playermove variable to mark a spot on the grid.

            std::cin >> x;
            if (x = 0, 1, 2) // Input validation for playermove variables
            {
                std::cin >> y;
                if (y != 0, 1, 2) 
                {
                    std::cout << "Please enter a value from 0 to 2, defaulting to 1.";
                    y = 1;
                }
            }
            else
            {
                std::cout << "Please enter a value from 0 to 2, defaulting to 1.";
                x = 1;
            }

        /*To do: Everything else. Deciding ties, victories, opponent moves, etc.*/
            

        }//if

        else if (startGame_Input.compare("No") == 0 || startGame_Input.compare("N") == 0) { //end game input handling
            std::cout << "\nGoodbye!" << std::endl;
            break;
        }//elseif

        else { //invalid input handling
            std::cout << "\nInvalid Response, Please Enter Valid Response (Y/N)\n" << std::endl;
        }//else



    }//while

    std::cout << "Thank you for playing.\n"; //end program statement

    return 0;

}//main



/*I personally suggest redoing this in C# if possible - comes with UI that would make Tic-Tac-Toe easier
But I left some ToDos if we do go forward - Dorien */