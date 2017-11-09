#include <iostream>
#include <string>



using namespace std;
#include "RomanNumeral.h"
int main(){

int choice = 0;
bool done = false;

romanType romanobject1;
romanType romanobject2;
romanType romanobject3;

string numeral1 = "MCXIV";
string numeral2 = "CCCLIX";
string numeral3 = "MDCLXVI";

romanobject1.storeRoman(numeral1);
romanobject1.convertInt();

romanobject2.storeRoman(numeral2);
romanobject2.convertInt();

romanobject3.storeRoman(numeral3);
romanobject3.convertInt();

cout<<"Would you like to print the numbers as Roman numerals or positive integers?"<<endl;

while(!done){

cout<<endl;
cout<<"Press 1 for Roman numerals, 2 for positive integers, 3 for both, or 4 to exit."<<endl;
cin>>choice;
cout<<endl;

if (choice == 1)
{
  romanobject1.printRom();
  romanobject2.printRom();
  romanobject3.printRom();
}
else if (choice == 2)
{
  romanobject1.printInt();
  romanobject2.printInt();
  romanobject3.printInt();
}
else if (choice == 3)
{
  romanobject1.printRom();
  romanobject1.printInt();
  romanobject2.printRom();
  romanobject2.printInt();
  romanobject3.printRom();
  romanobject3.printInt();
}
else if (choice == 4)
{
  cout<<"Goodbye!"<<endl;
  done = true;
}
else
{
  cout<<"Sorry, I didn't catch that."<<endl;
}

}
  return 0;
}
