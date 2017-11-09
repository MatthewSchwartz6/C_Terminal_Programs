#ifndef SUDOKU_H
#define SUDOKU_H
using namespace std;
#include <vector>

class Sudoku
{
public:
    Sudoku();
    void AddFirstRow();
    void MakeCompletedBoard();
    void print();

private:
   vector<int> sud;
   int j;
   int i;
   int posNum;
   int index;
   int value;
};

#endif // SUDOKU_H
