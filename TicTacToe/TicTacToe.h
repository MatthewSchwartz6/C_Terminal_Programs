#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <vector>
#include <string>
using namespace std;
class TicTacToe
{
    public:
        TicTacToe();
        void PlayGame();

    private:
        vector<string> game;

        void init();
        void printBoard();
        void pickXorO();
        void whoGoesFirst();
        void playAgain();

        void firstPlayer();
        void secondPlayer();
        int getPlayerMove();
        int getComputerMove();
        int findBestMove();
        void addToBoard(int, string);

        bool isWon();
        bool isDraw();


        int numBoxes;
        int i;
        int j;
        int pickBox;
        int numTurns;

        string playerLetter;
        string computerLetter;
        string firstPlayerIs;
        string secondPlayerIs;
        string choice;

        bool done;
        bool matchDecided;

};

#endif // TICTACTOE_H
