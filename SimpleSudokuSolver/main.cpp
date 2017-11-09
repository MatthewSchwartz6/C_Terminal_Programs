#include <iostream>
#include <vector>
#include <stdlib.h>
#include <ctime>
using namespace std;

#include "Sudoku.h"
int main()
{

vector<int> jack;

Sudoku board;

board.AddFirstRow();
board.MakeCompletedBoard();
board.print();




return 0;
}


