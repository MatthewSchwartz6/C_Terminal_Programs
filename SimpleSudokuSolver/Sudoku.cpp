#include <iostream>
#include <stdlib.h>
#include <vector>
#include <ctime>
using namespace std;

#include "Sudoku.h"





Sudoku::Sudoku()
{

   vector<int>sud;

   j = 0;
   i=0;
   posNum = 0;
   index = 0;
   value = 0;
}
void Sudoku::AddFirstRow( )
{
  /*  for(i = 0;i<9;i++)
    {
        sud.push_back(i+1);
    }
    for(i=9;i<82;++i)
    {
        sud.push_back(0);
    }*/

    sud.push_back(3);
    sud.push_back(2);
    sud.push_back(4);
    sud.push_back(7);
    sud.push_back(6);
    sud.push_back(9);
    sud.push_back(8);
    sud.push_back(1);
    sud.push_back(5);
    for(i =9;i<82;++i)
    {
        sud.push_back(0);
    }
}

void Sudoku::MakeCompletedBoard()
{
       // srand(time(0));
    for( int i = 9; i<18 ; ++i)
        {
        //this->print();
         posNum = rand()%9 + 1;
          sud.at(i) = posNum;
        if(i>9)
            {
            for( int j = i; j>8 ; --j)
              {
                index = j%9;

                value = sud.at(j);
                if (sud.at(j)==sud.at(index))
                {
                    sud.at(j) = (rand()%9 + 1);
                    i-=1;

                }
                else if (j<i && sud.at(j) == sud.at(i))
                {
                    sud.at(i) = rand()%9+1;
                    i-=1;

                }

                else
                {
                if(i%9<3)
                    {
                        if (value == sud.at(0)||value==sud.at(1)||value==sud.at(2))
                            {
                            sud.at(j)=rand()%9 +  1;
                            j+=1;
                            }
                    }
                else if(i%9>=3 && j%9<6)
                    {
                         if (value == sud.at(3)||value==sud.at(4)||value==sud.at(5))
                            {
                            sud.at(j)=rand()%9 + 1;
                            j+=1;
                            }
                    }
                else if (i%9>=6)
                    {
                        if (value == sud.at(6)||value==sud.at(7)||value==sud.at(8))
                            {
                            sud.at(j)=rand()%9 + 1;
                            j+=1;
                            }
                    }
                }
              }
            }
        }

   for ( int i = 18;i<27;++i)
        {
//this->print();
            sud.at(i) = rand()%9 + 1;

            if (i>18)
            {
                for( int j = i;j>17;--j)
                {
                    value = sud.at(j);
                    index = j%9;


                    if (sud.at(j)==sud.at(index)||sud.at(j)==sud.at(index+9))
                    {
                        sud.at(j) = rand()%9 + 1;
                        i-=1;
                    }
                    else if(j<i && sud.at(i)==sud.at(j))
                    {
                        sud.at(i)= rand()%9 +1;
                        i-=1;
                    }
                    else
                    {
                      if(j%9<3)
                      {
                        if(value==sud.at(0)||value==sud.at(1)||value==sud.at(2))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j +=1;
                        }
                        else if(value==sud.at(9)||value==sud.at(10)||value==sud.at(11))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j +=1;
                        }
                      }
                      else if (j%9>=3 && j%9<6)
                      {
                       if(value==sud.at(3)||value==sud.at(4)||value==sud.at(5))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j +=1;
                        }
                        else if(value==sud.at(12)||value==sud.at(13)||value==sud.at(14))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j +=1;
                        }
                      }
                      else if(j%9>=6)
                      {
                          if(value==sud.at(6)||value==sud.at(7)||value==sud.at(8))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j +=1;
                        }
                        else if(value==sud.at(15)||value==sud.at(16)||value==sud.at(17))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j +=1;
                        }
                      }
                    }

                }
            }
        }

        for (int i = 27;i<36;++i)
        { //this->print();
            sud.at(i) = rand()%9+1;
            if(i>27)
            {


            for( int j = i;j>26;--j)
            {
                index = j%9;
                value = sud.at(j);

                if(value == sud.at(index)||value==sud.at(index+9)||value==sud.at(index+18))
                {
                    sud.at(j) = rand()%9+1;
                  i-=1;
                }
                else if(j<i&&sud.at(i)==sud.at(j))
                {
                    sud.at(i) = rand()%9+1;
                    j=i;
                }
            }
            }
        }


        for(int i = 36;i<45;++i)
        { //this->print();
          sud.at(i) = rand()%9+1;
            if(i>36)
            {
            for( j = i; j>35 ; --j)
              {
                index = j%9;

                value = sud.at(j);
                if (value==sud.at(index)||value==sud.at(index+9)||value == sud.at(index+18)||value==sud.at(index+27))
                {
                    sud.at(j) = rand()%9 + 1;
                    i=j-1;
                }
                else if (j<i && sud.at(i) == sud.at(j))
                {
                    sud.at(i) = rand()%9+1;
                    i=j-1;
                }

                else
                {
                if(j%9<3)
                    {
                        if (value == sud.at(27)||value==sud.at(28)||value==sud.at(29))
                            {
                            sud.at(j)=rand()%9 +  1;
                            j+=1;
                            }
                    }
                else if(j%9>=3 && j%9<6)
                    {
                         if (value == sud.at(30)||value==sud.at(31)||value==sud.at(32))
                            {
                            sud.at(j)=rand()%9 + 1;
                            j+=1;
                            }
                    }
                else if (j%9>=6)
                    {
                        if (value == sud.at(33)||value==sud.at(34)||value==sud.at(35))
                            {
                            sud.at(j)=rand()%9 + 1;
                            j-=1;
                            }
                    }
                }
              }
            }
          }

        for (int i = 45;i<54;++i)
        {
//this->print();
            sud.at(i) = rand()%9 + 1;

            if (i>45)
            {
                for( j = i;j>44;--j)
                {
                    value = sud.at(j);
                    index = j%9;


                    if (sud.at(j)==sud.at(index)||sud.at(j)==sud.at(index+9)||sud.at(j)==sud.at(index+18)||sud.at(j)==sud.at(index+27)||sud.at(j)==sud.at(index+36))
                    {
                        sud.at(j) = rand()%9 + 1;
                       i-=1;
                    }
                    else if(j<i && sud.at(i)==sud.at(j))
                    {
                        sud.at(i)= rand()%9 +1;
                        i-=1;
                    }
                    else
                    {
                      if(j%9<3)
                      {
                        if(value==sud.at(27)||value==sud.at(28)||value==sud.at(29))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j+=1;
                        }
                        else if(value==sud.at(36)||value==sud.at(37)||value==sud.at(38))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j+=1;
                        }
                      }
                      else if (j%9>=3 && j%9<6)
                      {
                       if(value==sud.at(30)||value==sud.at(31)||value==sud.at(32))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j+=1;
                        }
                        else if(value==sud.at(39)||value==sud.at(40)||value==sud.at(41))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j+=1;
                        }
                      }
                      else if(j%9>=6)
                      {
                          if(value==sud.at(33)||value==sud.at(34)||value==sud.at(35))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j+=1;
                        }
                        else if(value==sud.at(42)||value==sud.at(43)||value==sud.at(44))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j+=1;
                        }
                      }
                    }

                }
            }
        }


        for (int i = 54;i<64;++i)
        {   //this->print();
            sud.at(i) = rand()%9+1;
            if(i>54)
            {


            for( j = i;j>53;--j)
            {
                index = j%9;
                value = sud.at(j);

                if(value == sud.at(index)||value==sud.at(index+9)||value==sud.at(index+18)||value == sud.at(index+27)||value==sud.at(index+36)||value==sud.at(index+45))
                {
                    sud.at(j) = rand()%9+1;
                    i-=1;
                }
                else if(j<i&&sud.at(i)==sud.at(j))
                {
                    sud.at(i) = rand()%9+1;
                   i-=1;
                }
            }
            }
        }

        for( i = 63;i<72;++i)
        {  //this->print();
          sud.at(i) = rand()%9+1;
            if(i>63)
            {
            for( j = i; j>62 ; --j)
              {
                index = j%9;

                value = sud.at(j);
                if (value==sud.at(index)||value==sud.at(index+9)||value == sud.at(index+18)||value==sud.at(index+27)||value==sud.at(index+36)||value==sud.at(index+45)||value == sud.at(index+54))
                {
                    sud.at(j) = rand()%9 + 1;
                    //i-=1;
                }
                else if (j<i && sud.at(i) == sud.at(j))
                {
                    sud.at(i) = rand()%9+1;
                    i-=1;
                }

                else
                {
                if(j%9<3)
                    {
                        if (value == sud.at(54)||value==sud.at(55)||value==sud.at(56))
                            {
                            sud.at(j)=rand()%9 +  1;
                            j+=1;
                            }
                    }
                else if(j%9>=3 && j%9<6)
                    {
                         if (value == sud.at(57)||value==sud.at(58)||value==sud.at(59))
                            {
                            sud.at(j)=rand()%9 + 1;
                            j+=1;
                            }
                    }
                else if (j%9>=6)
                    {
                        if (value == sud.at(60)||value==sud.at(61)||value==sud.at(62))
                            {
                            sud.at(j)=rand()%9 + 1;
                            j+=1;
                            }
                    }
                }
              }
            }
          }

        for (int i = 72;i<81;++i)
        { //this->print();

            sud.at(i) = rand()%9 + 1;

            if (i>72)
            {
                for( j = i;j>71;--j)
                {
                    value = sud.at(j);
                    index = j%9;


                    if (sud.at(j)==sud.at(index)||sud.at(j)==sud.at(index+9)||sud.at(j)==sud.at(index+18)||sud.at(j)==sud.at(index+27)||sud.at(j)==sud.at(index+36)||sud.at(j)==sud.at(index+45)||sud.at(j)==sud.at(index+54)||sud.at(j)==sud.at(index+63))
                    {
                        sud.at(j) = rand()%9 + 1;
                        i-=1;
                    }
                    else if(j<i && sud.at(i)==sud.at(j))
                    {
                        sud.at(i)= rand()%9 +1;
                        i-=1;
                    }
                    else
                    {
                      if(j%9<3)
                      {
                        if(value==sud.at(54)||value==sud.at(55)||value==sud.at(56))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j+=1;
                        }
                        else if(value==sud.at(63)||value==sud.at(64)||value==sud.at(65))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j+=1;
                        }
                      }
                      else if (j%9>=3 && j%9<6)
                      {
                       if(value==sud.at(57)||value==sud.at(58)||value==sud.at(59))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j+=1;
                        }
                        else if(value==sud.at(66)||value==sud.at(67)||value==sud.at(68))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j+=1;;
                        }
                      }
                      else if(j%9>=6)
                      {
                          if(value==sud.at(60)||value==sud.at(61)||value==sud.at(62))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j+=1;
                        }
                        else if(value==sud.at(69)||value==sud.at(70)||value==sud.at(71))
                        {
                            sud.at(j)=rand()%9 + 1;
                            j+=1;
                        }
                      }
                    }

                }
            }
        }


}


void Sudoku::print()
{
for ( i = 0; i < 81;++i)
{
cout<<sud.at(i)<<" ";
if(i==8 || i ==17||i==26||i==35||i==44||i==53||i==62||i==71)
{
cout<<endl;
}

}
cout<<endl;

cout<<endl;

}
