// ticTacToe_WireSharks.cpp Runner File
// By Dorien Fields, Dylan De Muth

#include <iostream>
#include <string>

// Global Variables

int x = 0; // x axis for playermove
int y = 0; // y axis for playermove
static std::string board[3][3]; // Grid
int XWins = 0; // Number of times X won
int OWins = 0; // Number of times O won
int Ties = 0; // Number of ties
int rnd = 0; // Round counter for FIndWinner function

// Functions

void playermove(int x, int y, int r) // allocate x, y variables to the same position on the grid to act out a player's move. R variable tells whose turn it is. 
{
    std::string temp;

    if (r % 2 == 0) temp = "X";
    else temp = "O";
    std::cout << temp << " to location: " << x << " , " << y << "\n";

    board[x][y] = temp;
}

void FindWinner(int win, int r) // Check straights, diagonals, and rows to find if someone has won, then declare that player as the winner. 
{

    // X win cases

    if (board[0][0].compare("X") == 0 && board[1][0].compare("X") == 0 && board[2][0].compare("X") == 0)
    {
        std::cout << "The winner is X!" << "\n"; // declare X winner, set winner to 1 to denote X won this match, add to X
        win = 1;
        XWins++;

        std::cout << " X Wins: " << XWins << " O Wins: " << OWins << " Ties: " << Ties << "\n";
        std::cout << "Thank you for playing.\n";
        exit(0);

    }
    else if (board[0][1].compare("X") == 0 && board[1][1].compare("X") == 0 && board[2][1].compare("X") == 0)
    {
        std::cout << "The winner is X!" << "\n"; // declare X winner, set winner to 1 to denote X won this match, add to X
        win = 1;
        XWins++;

        std::cout << " X Wins: " << XWins << " O Wins: " << OWins << " Ties: " << Ties << "\n";
        std::cout << "Thank you for playing.\n";
        exit(0);

    }
    else if (board[0][2].compare("X") == 0 && board[1][2].compare("X") == 0 && board[2][2].compare("X") == 0)
    {
        std::cout << "The winner is X!" << "\n"; // declare X winner, set winner to 1 to denote X won this match, add to X
        win = 1;
        XWins++;

        std::cout << " X Wins: " << XWins << " O Wins: " << OWins << " Ties: " << Ties << "\n";
        std::cout << "Thank you for playing.\n";
        exit(0);

    }
    else if (board[0][0].compare("X") == 0 && board[0][1].compare("X") == 0 && board[0][2].compare("X") == 0)
    {
        std::cout << "The winner is X!" << "\n"; // declare X winner, set winner to 1 to denote X won this match, add to X
        win = 1;
        XWins++;

        std::cout << " X Wins: " << XWins << " O Wins: " << OWins << " Ties: " << Ties << "\n";
        std::cout << "Thank you for playing.\n";
        exit(0);

    }
    else if (board[1][0].compare("X") == 0 && board[1][1].compare("X") == 0 && board[1][2].compare("X") == 0)
    {
        std::cout << "The winner is X!" << "\n"; // declare X winner, set winner to 1 to denote X won this match, add to X
        win = 1;
        XWins++;

        std::cout << " X Wins: " << XWins << " O Wins: " << OWins << " Ties: " << Ties << "\n";
        std::cout << "Thank you for playing.\n";
        exit(0);

    }
    else if (board[2][0].compare("X") == 0 && board[2][1].compare("X") == 0 && board[2][2].compare("X") == 0)
    {
        std::cout << "The winner is X!" << "\n"; // declare X winner, set winner to 1 to denote X won this match, add to X
        win = 1;
        XWins++;

        std::cout << " X Wins: " << XWins << " O Wins: " << OWins << " Ties: " << Ties << "\n";
        std::cout << "Thank you for playing.\n";
        exit(0);

    }
    else if (board[0][0].compare("X") == 0 && board[1][1].compare("X") == 0 && board[2][2].compare("X") == 0)
    {
        std::cout << "The winner is X!" << "\n"; // declare X winner, set winner to 1 to denote X won this match, add to X
        win = 1;
        XWins++;

        std::cout << " X Wins: " << XWins << " O Wins: " << OWins << " Ties: " << Ties << "\n";
        std::cout << "Thank you for playing.\n";
        exit(0);

    }
    else if (board[2][0].compare("X") == 0 && board[1][1].compare("X") == 0 && board[0][2].compare("X") == 0)
    {
        std::cout << "The winner is X!" << "\n"; // declare X winner, set winner to 1 to denote X won this match, add to X
        win = 1;
        XWins++;

        std::cout << " X Wins: " << XWins << " O Wins: " << OWins << " Ties: " << Ties << "\n";
        std::cout << "Thank you for playing.\n";
        exit(0);

    };


    // O win cases

    if (board[0][0].compare("O") == 0 && board[1][0].compare("O") == 0 && board[2][0].compare("O") == 0)
    {
        std::cout << "The winner is O!" << "\n"; // declare X winner, set winner to 1 to denote X won this match, add to X
        win = 2;
        OWins++;

        std::cout << " X Wins: " << XWins << " O Wins: " << OWins << " Ties: " << Ties << "\n";
        std::cout << "Thank you for playing.\n";
        exit(0);

    }
    else if (board[0][1].compare("O") == 0 && board[1][1].compare("O") == 0 && board[2][1].compare("O") == 0)
    {
        std::cout << "The winner is O!" << "\n"; // declare X winner, set winner to 1 to denote X won this match, add to X
        win = 2;
        OWins++;

        std::cout << " X Wins: " << XWins << " O Wins: " << OWins << " Ties: " << Ties << "\n";
        std::cout << "Thank you for playing.\n";
        exit(0);

    }
    else if (board[0][2].compare("O") == 0 && board[1][2].compare("O") == 0 && board[2][2].compare("O") == 0)
    {
        std::cout << "The winner is O!" << "\n"; // declare X winner, set winner to 1 to denote X won this match, add to X
        win = 2;
        OWins++;

        std::cout << " X Wins: " << XWins << " O Wins: " << OWins << " Ties: " << Ties << "\n";
        std::cout << "Thank you for playing.\n";
        exit(0);

    }
    else if (board[0][0].compare("O") == 0 && board[0][1].compare("O") == 0 && board[0][2].compare("O") == 0)
    {
        std::cout << "The winner is O!" << "\n"; // declare X winner, set winner to 1 to denote X won this match, add to X
        win = 2;
        OWins++;

        std::cout << " X Wins: " << XWins << " O Wins: " << OWins << " Ties: " << Ties << "\n";
        std::cout << "Thank you for playing.\n";
        exit(0);

    }
    else if (board[1][0].compare("O") == 0 && board[1][1].compare("O") == 0 && board[1][2].compare("O") == 0)
    {
        std::cout << "The winner is O!" << "\n"; // declare X winner, set winner to 1 to denote X won this match, add to X
        win = 2;
        OWins++;

        std::cout << " X Wins: " << XWins << " O Wins: " << OWins << " Ties: " << Ties << "\n";
        std::cout << "Thank you for playing.\n";
        exit(0);

    }
    else if (board[2][0].compare("O") == 0 && board[2][1].compare("O") == 0 && board[2][2].compare("O") == 0)
    {
        std::cout << "The winner is O!" << "\n"; // declare X winner, set winner to 1 to denote X won this match, add to X
        win = 2;
        OWins++;

        std::cout << " X Wins: " << XWins << " O Wins: " << OWins << " Ties: " << Ties << "\n";
        std::cout << "Thank you for playing.\n";
        exit(0);

    }
    else if (board[0][0].compare("O") == 0 && board[1][1].compare("O") == 0 && board[2][2].compare("O") == 0)
    {
        std::cout << "The winner is O!" << "\n"; // declare X winner, set winner to 1 to denote X won this match, add to X
        win = 2;
        OWins++;

        std::cout << " X Wins: " << XWins << " O Wins: " << OWins << " Ties: " << Ties << "\n";
        std::cout << "Thank you for playing.\n";
        exit(0);

    }
    else if (board[2][0].compare("O") == 0 && board[1][1].compare("O") == 0 && board[0][2].compare("O") == 0)
    {
        std::cout << "The winner is O!" << "\n"; // declare X winner, set winner to 1 to denote X won this match, add to X
        win = 2;
        OWins++;

        std::cout << " X Wins: " << XWins << " O Wins: " << OWins << " Ties: " << Ties << "\n";
        std::cout << "Thank you for playing.\n";
        exit(0);

    }
    else // Tie case
    {
        std::cout << "No winner yet..." << "\n";
        if (r == 8)
        {
            std::cout << "It's a tie..." << "\n";

            Ties = 1;
            win = 0;

            std::cout << " X Wins: " << XWins << " O Wins: " << OWins << " Ties: " << Ties << "\n";
            std::cout << "Thank you for playing.\n";
            exit(0);
        }
    }




}



void clearBoard() //sets all elements to " "
{

    for (int i = 0; i <= 2; i++) { //row iterator
        for (int j = 0; j <= 2; j++) //col iterator
            board[i][j] = " "; //sets elements to " "
    }//for

}//clearBoard()



void cout_Board() {//prints board
    //clearBoard();

    for (int i = 0; i < 3; i++) {//forloop iterates through row

        std::cout << "\n"; //creates a space

        for (int j = 0; j < 3; j++) {//forloop iterates through col

            std::cout << board[i][j]; //prints element in array
            if (j <= 1) std::cout << " | "; //lines of the board

        }//for inner

        if (i <= 1) std::cout << "\n_________\n";

    }//for outer

    std::cout << "\n\n\n";

}//void cout_boardBLANK()



int startGame() {
    clearBoard(); // Empties all elements to " "    

    cout_Board();

    int winner = 0; // Determines winner. 1 is X win, 2 is O win
    int rnd = 0;

    std::string inputString;

    for (int round = 0; round <= 10; round++) {

        if (round % 2 == 0) {
            std::cout << "You are X! Where would you like to move? Input a number for x axis and then y, from 0 to 2: " << "\n"; // Input to playermove variable to mark a spot on the grid.
        }
        else
        {
            std::cout << "You are O! Where would you like to move? Input a number for x axis and then y, from 0 to 2: " << "\n";
        }

        // Quick & dirty code change to fix Wiresharks-17 - alpha input crashes game
        //   ToDo - remove duplication
        // read in row selection - keep going until we have a valid response
        //   use string to integer - but note throws exception if alpha character entered
        do {
            x = 99;  // ToDo - remove hardcoded default value
            std::cin >> inputString;
            try {
                x = stoi(inputString);
            }
            catch (const std::invalid_argument& ia) {
                std::cout << "Invalid coordinate - please enter row value from 0-2\n";
                continue;  // try again
            }            
        } while ((x != 0) && (x != 1) && (x != 2));

        // add a 2nd commit to the pull request
        // read in column selection
        do {
            y = 99;  // ToDo - remove hardcoded default value
            std::cin >> inputString;
            try {
                y = stoi(inputString);
            }
            catch (const std::invalid_argument& ia) {
                std::cout << "Invalid coordinate - please enter column value from 0-2\n";
                continue;  // try again
            }
        } while ((y != 0) && (y != 1) && (y != 2));

        std::cout << "Move: " << x << " " << y << "\n";

        if (x <= -1 || x >= 3) // Input validation for playermove variables
        {
            std::cout << "Please enter a value from 0 to 2, defaulting to 1." << "\n";
            x = 1;
        }
        if (y <= -1 || y >= 3)
        {
            std::cout << "Please enter a value from 0 to 2, defaulting to 1." << "\n";
            y = 1;
        }

        playermove(x, y, round);
        cout_Board();

        FindWinner(winner, rnd);
        rnd++;

    }//for


    return winner;

}//startGame(){



int main() {

    //Local Variables:
    std::string startGame_Input; //saves input from user to determine if game is ran

    // Game Intialization
    while (true) {

        //Start Game Prompt:

        std::cout << "Start a TicTacToe Game? (y/n) "; //Asks user for input to start or exit game
        std::cin >> startGame_Input; //input for prompt



        if (startGame_Input.compare("Yes") == 0 || startGame_Input.compare("y") == 0) { //start game input handling

            startGame();

        } // start game if yes

        else if (startGame_Input.compare("No") == 0 || startGame_Input.compare("n") == 0)
        {
            std::cout << "\nGoodbye!" << std::endl;
            break;
        } // End of game if player said "no"

        else
        { // Input validation
            std::cout << "\nInvalid Response, Please Enter Valid Response (y/n)\n" << std::endl;
        }

    }// Game code ends here.

    std::cout << "Thank you for playing.\n"; // End program message/signoff 

    return 0;

}//main