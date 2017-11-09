#ifndef ROMANNUMERAL_H
#define ROMANNUMERAL_H

#include <string>

class romanType {
public:
  romanType();
  void storeRoman(string);
  int convertInt();
  void printRom() const;
  void printInt() const;
private:
  int num;
  int i;
  string roman;
};
#endif
