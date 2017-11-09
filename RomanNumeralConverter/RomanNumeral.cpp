#include <iostream>
#include <string>

using namespace std;

#include "RomanNumeral.h"

romanType::romanType(){
  roman = "";
  i = 0;
  num = 0;
}
void romanType::storeRoman(string rn){
  roman = rn;
}

int romanType::convertInt (){

  for(i = 0;i<roman.length();++i){

    if (
      roman.at(i)!=roman.at(roman.length()-1)//Avoid going out of range
      && roman.at(i)=='C'
      && roman.at(i+1)=='M'
       )
    {
      num +=900;
      ++i;//Increment counter so "i+1" doesn't get counted again.
    }

    else if (
      roman.at(i)!=roman.at(roman.length()-1)
      && roman.at(i)=='C'
      && roman.at(i+1)=='D'
            )
    {
      num+=400;
      ++i;
    }

    else if (
      roman.at(i)!=roman.at(roman.length()-1)
      && roman.at(i)=='X'
      && roman.at(i+1)=='C'
            )
    {
      num+=90;
      ++i;
    }

    else if (
      roman.at(i)!=roman.at(roman.length()-1)
      && roman.at(i)=='X'
      && roman.at(i+1)=='L'
            )
    {
      num+=40;
      ++i;
    }

    else if (
      roman.at(i)!=roman.at(roman.length()-1)
      && roman.at(i)=='I'
      && roman.at(i+1)=='X'
            )
    {
      num+=9;
      ++i;
    }

    else if(
      roman.at(i)!=roman.at(roman.length()-1)
      && roman.at(i)=='I'
      && roman.at(i+1)=='V'
          )
    {
      num+=4;
      ++i;
    }

    else if(roman.at(i)=='M')
        num+=1000;

    else if(roman.at(i)=='D')
        num+=500;

    else if(roman.at(i)=='C')
        num+=100;

    else if(roman.at(i)=='L')
        num+=50;

    else if (roman.at(i)=='X')
        num+=10;

    else if(roman.at(i)=='V')
        num+=5;

    else if(roman.at(i)=='I')
        num+=1;

    else
    {
      cout<<"Your roman numeral is incorrect."<<endl;
    }

  }

  return num;
}
void romanType::printInt() const{
  cout<<"Number as a positive integer: "<<num<<endl;
  return;
}
void romanType::printRom() const{
  cout<<"Number as a Roman Numeral: "<<roman<<endl;
  return;
}
