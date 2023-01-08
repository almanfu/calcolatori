#include <iostream>
#include <bitset>
using namespace std;

char toHex(unsigned char c, bool upper){

  if(upper)
    c = c >> 4;
  else
    c &= 0xF;
  
  switch(c){
    case 0: return '0';
    case 1: return '1';
    case 2: return '2';
    case 3: return '3';
    case 4: return '4';
    case 5: return '5';
    case 6: return '6';
    case 7: return '7';
    case 8: return '8';
    case 9: return '9';
    case 10: return 'A';
    case 11: return 'B';
    case 12: return 'C';
    case 13: return 'D';
    case 14: return 'E';
    case 15: return 'F';
    default: return 'H';
  }
}

void printIEEE754(float *n){
  char *byte = (char *)n;

  for(int i=3; i >= 0; i--)
    cout << toHex(byte[i], true) << toHex(byte[i], false);

  cout << endl;

  for(int i=3; i >= 0; i--)
    cout << std::bitset<8>(byte[i]);

  cout << endl;
}

void setIEEE754(float* &n, const unsigned int rappr){
  unsigned int *bytes = new unsigned int(rappr);
  n = (float *)bytes;
}

int main(){
  float *n = new float(2271.0619);
  cout << to_string(*n) << endl;
  printIEEE754(n);
  
  /*
              //  s--e-----=====m=================
  //setIEEE754(n, 0b01000101010011100000010010101000);
  setIEEE754(n, 0x3F8CCCCD);
  printIEEE754(n);
  cout << to_string(*n) << endl;
  */
  return 0;
}