#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "TicTacToe.h"
using namespace std;
TicTacToe::TicTacToe()
{
        init();
         for (i = 0; i< numBoxes ;++i)
         {
             game.push_back(" ");
         }
}
void TicTacToe::init()
{
        numBoxes = 9;
         matchDecided = false;

         done = false;
         i = 0;
         j = 0;
         numTurns = 0;
         pickBox = 0;

         playerLetter=" ";
         computerLetter = " ";

         firstPlayerIs= " " ;
         secondPlayerIs= " ";
         choice = " ";


}
void TicTacToe::PlayGame()
{
        cout <<"\n\nCLI Tic-Tac-Toe"<<endl;
        cout <<"---------------"<<endl;
        cout<<endl;
        cout<<endl;

        pickXorO();
        whoGoesFirst();
        firstPlayer();
        printBoard();
        while (!matchDecided)
            {
                secondPlayer();
                printBoard();
                if (isWon())
                    {
                        cout<<secondPlayerIs<<" won!"<<endl;
                        matchDecided = true;
                        break;
                    }
                if (isDraw())
                    {
                        cout<<"Draw!"<<endl;
                        matchDecided = true;
                        break;
                    }
                firstPlayer();
                printBoard();
                if (isWon())
                    {
                        cout<<firstPlayerIs<<" won!"<<endl;
                        matchDecided = true;
                    }
                if (isDraw())
                {
                    cout<<"Draw!"<<endl;
                    matchDecided = true;
                }
            }
        playAgain();
}

void TicTacToe::printBoard()
{

        cout<<"         |        |    "<<endl;
        cout<<"     "<<game[6]<<"   |   "<<game[7]<<"    |   "<<game[8]<<endl;
        cout<<"         |        |    "<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"         |        |    "<<endl;
        cout<<"     "<<game[3]<<"   |   "<<game[4]<<"    |   "<<game[5]<<endl;
        cout<<"         |        |    "<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"         |        |    "<<endl;
        cout<<"     "<<game[0]<<"   |   "<<game[1]<<"    |   "<<game[2]<<endl;
        cout<<"         |        |    "<<endl;

        cout<<endl;
        cout<<endl;
}

bool TicTacToe::isWon()
{
    /*Try not to get dizzy */

    /* Check if X won */
        if (game[0] == "X" && game[1] == "X" && game[2] == "X")
            return true;
        else if (game[3] == "X" && game[4] == "X" && game[5] == "X")
            return true;
        else if (game[6] == "X" && game[7] == "X" && game[8] == "X")
            return true;

        else if (game[0] == "X" && game[3] == "X" && game[6] == "X")
            return true;
        else if (game[1] == "X" && game[4] == "X" && game[7] == "X")
            return true;
        else if (game[2] == "X" && game[5] == "X" && game[8] == "X")
            return true;

        else if (game[0] == "X" && game[4] == "X" && game[8] == "X")
            return true;
        else if (game[2] == "X" && game[4] == "X" && game[6] == "X")
            return true;

    /* Check if O won */
        else if (game[0] == "O" && game[1] == "O" && game[2] == "O")
            return true;
        else if (game[3] == "O" && game[4] == "O" && game[5] == "O")
            return true;
        else if (game[6] == "O" && game[7] == "O" && game[8] == "O")
            return true;

        else if (game[0] == "O" && game[3] == "O" && game[6] == "O")
            return true;
        else if (game[1] == "O" && game[4] == "O" && game[7] == "O")
            return true;
        else if (game[2] == "O" && game[5] == "O" && game[8] == "O")
            return true;

        else if (game[0] == "O" && game[4] == "O" && game[8] == "O")
            return true;
        else if (game[2] == "O" && game[4] == "O" && game[6] == "O")
            return true;

        else
            return false;
}

void TicTacToe::pickXorO()
{
        cout <<"The game is Tic-Tac-Toe! Are you an X fella or an O fella?"<<endl;
        cin>> playerLetter;
        cout<<endl;

        if (playerLetter == "x" || playerLetter == "X")
            {
                playerLetter = "X";
                computerLetter = "O";
            }
        else if (playerLetter == "o" || playerLetter == "O")
            {
                playerLetter = "O";
                computerLetter = "X";
            }
        else
            {
                cout<<"Whoah there! Let's try this again."<<endl;
                playerLetter = " ";
                computerLetter = " ";
                pickXorO();
            }
}
void TicTacToe::whoGoesFirst()
{
        srand(time(0));
        cout<<"OK now. Lets see who will go first. I'll flip a coin..."<<endl;
        cout<<"******FLIP********"<<endl;
        j = (rand()%100);
        if (j<50)
            {
                cout<<"Player goes first."<<endl;
                firstPlayerIs = "player";
                secondPlayerIs = "computer";
            }
        else if (j>=50)
            {
                cout<<"Computer goes first."<<endl;
                firstPlayerIs = "computer";
                secondPlayerIs = "player";
            }
}

void TicTacToe::firstPlayer()
{
        ++numTurns;
        if (firstPlayerIs=="computer")
            {
                addToBoard(getComputerMove(),computerLetter);
            }
        else if (firstPlayerIs=="player")
            {
                addToBoard(getPlayerMove(),playerLetter);
            }

}

void TicTacToe::secondPlayer()
{
        ++numTurns;
        if (secondPlayerIs=="computer")
            {
                addToBoard(getComputerMove(),computerLetter);

            }
        else if (secondPlayerIs=="player")
            {
                addToBoard(getPlayerMove(),playerLetter);
            }

}

int TicTacToe::getComputerMove()
{

        pickBox = findBestMove();
    return pickBox;
}

int TicTacToe::getPlayerMove()
{

            cout<<"\nYour turn.......\nPlease pick a number between 0 - 8.\nThe box numbers are as follows:"<<endl;
            cout<<endl;
            cout<<"6 | 7 | 8"<<endl;
            cout<<"---------"<<endl;
            cout<<"3 | 4 | 5"<<endl;
            cout<<"---------"<<endl;
            cout<<"0 | 1 | 2"<<endl;
            cout<<endl;
            //cin.ignore(1000,'/n');
            cout<<"Your choice: ";
            cin>>pickBox;
            cout<<endl;

            if ( pickBox<0 || pickBox>8 || game[pickBox]!=" ")
                {
                    cout<<"Invalid choice. Try again"<<endl;
                    cin.clear();
                    cin.ignore(1000,'\n');
                    getPlayerMove();
                }
            else
                {
                    return pickBox;
                }


}

int TicTacToe::findBestMove()
{
    srand(time(0));
    j = rand()%9;

    /* First check if winning move is possible: */

        /*Horizontal*/
            if (game[0] == computerLetter && game[1] == computerLetter && game[2]== " ")
                return 2;
            else if (game[1] == computerLetter && game[2] == computerLetter && game[0]== " ")
                return 0;
            else if (game[0] == computerLetter && game[2] == computerLetter && game[1]== " ")
                return 1;

            else if (game[3] == computerLetter && game[4] == computerLetter && game[5]== " ")
                return 5;
            else if (game[4] == computerLetter && game[5] == computerLetter && game[3]== " ")
                return 3;
            else if (game[3] == computerLetter && game[5] == computerLetter && game[4]== " ")
                return 4;

            else if (game[6] == computerLetter && game[7] == computerLetter && game[8]== " ")
                return 8;
            else if (game[7] == computerLetter && game[8] == computerLetter && game[6]== " ")
                return 6;
            else if (game[6] == computerLetter && game[8] == computerLetter && game[7]== " ")
                return 7;

        /*Vertical*/
            else if (game[0] == computerLetter && game[3] == computerLetter && game[6]== " ")
                return 6;
            else if (game[3] == computerLetter && game[6] == computerLetter && game[0]== " ")
                return 0;
            else if (game[0] == computerLetter && game[6] == computerLetter && game[3]== " ")
                return 3;

            else if (game[1] == computerLetter && game[4] == computerLetter && game[7]== " ")
                return 7;
            else if (game[7] == computerLetter && game[1] == computerLetter && game[4]== " ")
                return 4;
            else if (game[4] == computerLetter && game[7] == computerLetter && game[1]== " ")
                return 1;


            else if (game[2] == computerLetter && game[5] == computerLetter && game[8]== " ")
                return 8;
            else if (game[8] == computerLetter && game[2] == computerLetter && game[5]== " ")
                return 5;
            else if (game[5] == computerLetter && game[8] == computerLetter && game[2]== " ")
                return 2;

        /*Diagnol*/
            else if (game[0] == computerLetter && game[4] == computerLetter && game[8]== " ")
                return 8;
            else if (game[8] == computerLetter && game[0] == computerLetter && game[4]== " ")
                return 4;
            else if (game[4] == computerLetter && game[8] == computerLetter && game[0]== " ")
                return 0;

            else if (game[2] == computerLetter && game[4] == computerLetter && game[6]== " ")
                return 6;
            else if (game[2] == computerLetter && game[6] == computerLetter && game[4]== " ")
                return 4;
            else if (game[4] == computerLetter && game[6] == computerLetter && game[2]== " ")
                return 2;


    /*Secondly, make sure to block the player from winning*/

        /*Horizontal*/
            if (game[0] == playerLetter && game[1] == playerLetter && game[2]== " ")
                return 2;
            else if (game[1] == playerLetter && game[2] == playerLetter && game[0]== " ")
                return 0;
            else if (game[0] == playerLetter && game[2] == playerLetter && game[1]== " ")
                return 1;

            else if (game[3] == playerLetter && game[4] == playerLetter && game[5]== " ")
                return 5;
            else if (game[4] == playerLetter && game[5] == playerLetter && game[3]== " ")
                return 3;
            else if (game[3] == playerLetter && game[5] == playerLetter && game[4]== " ")
                return 4;

            else if (game[6] == playerLetter && game[7] == playerLetter && game[8]== " ")
                return 8;
            else if (game[7] == playerLetter && game[8] == playerLetter && game[6]== " ")
                return 6;
            else if (game[6] == playerLetter && game[8] == playerLetter && game[7]== " ")
                return 7;

        /*Vertical*/
            else if (game[0] == playerLetter && game[3] == playerLetter && game[6]== " ")
                return 6;
            else if (game[3] == playerLetter && game[6] == playerLetter && game[0]== " ")
                return 0;
            else if (game[0] == playerLetter && game[6] == playerLetter&& game[3]== " ")
                return 3;

            else if (game[1] == playerLetter && game[4] == playerLetter&& game[7]== " ")
                return 7;
            else if (game[7] == playerLetter && game[1] == playerLetter&& game[4]== " ")
                return 4;
            else if (game[4] == playerLetter && game[7] == playerLetter&& game[1]== " ")
                return 1;

            else if (game[2] == playerLetter && game[5] == playerLetter&& game[8]== " ")
                return 8;
            else if (game[8] == playerLetter && game[2] == playerLetter&& game[5]== " ")
                return 5;
            else if (game[5] == playerLetter && game[8] == playerLetter&& game[2]== " ")
                return 2;

        /*Diagnol*/
            else if (game[0] == playerLetter && game[4] == playerLetter&& game[8]== " ")
                return 8;
            else if (game[8] == playerLetter && game[0] == playerLetter&& game[4]== " ")
                return 4;
            else if (game[4] == playerLetter && game[8] == playerLetter&& game[0]== " ")
                return 0;

            else if (game[2] == playerLetter && game[4] == playerLetter&& game[6]== " ")
                return 6;
            else if (game[2] == playerLetter && game[6] == playerLetter&& game[4]== " ")
                return 4;
            else if (game[4] == playerLetter && game[6] == playerLetter&& game[2]== " ")
                return 2;


        /*See if any of these strategies will work*/
            if (game[4]==" ")//If not in a position to block or win first check this.
                return 4;
            if (game[4]==computerLetter)//If the computer has the center
            {
                /*Put the piece in an opposing corner if they're in an edge*/
                if (game[1]== playerLetter && game[6] == " ")
                    return 6;
                else if (game [1] == playerLetter && game[8] == " ")
                    return 8;

                else if (game[3]== playerLetter && game[8] == " ")
                    return 8;
                else if (game [3] == playerLetter && game[2] == " ")
                    return 2;

                else if (game[7]== playerLetter && game[0] == " ")
                    return 0;
                else if (game [7] == playerLetter && game[2] == " ")
                    return 2;

                else if (game[5]== playerLetter && game[0] == " ")
                    return 0;
                else if (game [5] == playerLetter && game[6] == " ")
                    return 6;

                /*Put piece in the opposite corner if they're in a corner*/
                if (game[0]== playerLetter && game[8] == " ")
                    return 8;
                else if (game [2] == playerLetter && game[6] == " ")
                    return 6;

                else if (game[6]== playerLetter && game[2] == " ")
                    return 2;
                else if (game [8] == playerLetter && game[0] == " ")
                    return 0;
            }
        /*Let's not make this abominably difficult*/
            if (game[j]== " ")
                return j;
            else
                {
                for (i = 0; i < numBoxes; ++i)
                    {
                        if (game[i] == " ")
                            return i;
                    }

                }
}

void TicTacToe::addToBoard(int boxN, string let)
{

        game.at(boxN) = let;
}

bool TicTacToe::isDraw()
{
        if (numTurns == 9)
        {
            return true;
        }
        return false;
}

void TicTacToe::playAgain()
{
        cin.ignore(1000,'\n');
        cout<<"Would you like to play again?"<<endl;
        cout<<"Type y or n.............: ";
        cin>> choice;
        cout<<endl;
        cout<<endl;
        if (choice == "y")
            {
                for(i = 0;i<numBoxes;++i)
                        {
                            game.at(i)=" ";
                        }

                init();
                PlayGame();
            }
        else if (choice == "n")
            {
                cout<<"\nThank you for playing";
                exit(0);
            }
        else
            {
                cout<<"Invalid choice";
                playAgain();
            }
}
