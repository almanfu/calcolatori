#include <iostream>
#include <bitset>
#include <cstdlib>
#include <ctime>

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
  }
}

int main(){
  srand(time(NULL));

  float x = rand();
  //x *= float((rand()%2)*(-1));
  float *n =  new float(x);
  char *byte = (char *)n;
  bool print_hex = true;
  
  cout << x << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  
  if(print_hex){
    for(int i=3; i >= 0; i--)
      cout << toHex(byte[i], true) << toHex(byte[i], false);
  }
  else{
    for(int i=3; i >= 0; i--)
      cout << std::bitset<8>(byte[i]);
  }
  cout << endl;
  return 0;
}