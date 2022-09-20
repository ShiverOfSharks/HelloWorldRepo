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

// Global Variables

int x = 0; // x axis for playermove
int y = 0; // y axis for playermove
std::string axis[3][3]; // Grid

// Functions - 

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

void playermove(int x, int y) // allocate x, y variables to the same position on the grid to act out a player's move.
{
    axis[x][y];
    std::cout << "O to location: " << x << " , " << y << "." << "\n";
}



int main() {

    //Local Variables:
    std::string startGame_Input; //saves input from user to determine if game is ran

    // Game Intialization
    while (true) {

     //Start Game Prompt:

        std::cout << "Start a TicTacToe Game? (Y/N) "; //Asks user for input to start or exit game
        std::cin >> startGame_Input; //input for prompt



        if (startGame_Input.compare("Yes") == 0 || startGame_Input.compare("Y") == 0) { //start game input handling

        
            cout_boardBLANK();
            
            std::cout << "You are X! Where would you like to move? Input a number for x axis and then y, from 0 to 2." << "\n"; // Input to playermove variable to mark a spot on the grid.

            std::cin >> x;
            if (x <= -1 || x >= 3) // Input validation for playermove variables
            {
                std::cout << "Please enter a value from 0 to 2, defaulting to 1." << "\n";
                x = 1;
            }
            else
            {
                std::cin >> y;
                if (y != 0, y != 1, y != 2)
                {
                    std::cout << "Please enter a value from 0 to 2, defaulting to 1." << "\n";
                    y = 1;
                }
            }
            playermove(x, y);

        /*To do: Everything else. Deciding ties, victories, opponent moves, etc.*/
            

        } // End of game if player said "yes"

        else if (startGame_Input.compare("No") == 0 || startGame_Input.compare("N") == 0) 
        {
            std::cout << "\nGoodbye!" << std::endl;
            break;
        } // End of game if player said "no"/

        else 
        { // Input validation
            std::cout << "\nInvalid Response, Please Enter Valid Response (Y/N)\n" << std::endl;
        }



    }// Game code ends here.

    std::cout << "Thank you for playing.\n"; // End program message/signoff 

    return 0;

}// Code ends here