/*1################################*/

typedef long long int INT64;
typedef unsigned long long int UINT64;

void SumV(INT64 *u, INT64 *z, INT64 *v, UINT64 size){
    INT64 *ue = u+size-1, *ve = v+size-1;
    INT64 t1, t2;
    for (UINT64 i=0; i < size; i++) {
        t1 = (*u++)*(*v++)-(*ue--)*(*ve--);
        t2 = 2*t1*t1;
        if(t1 < 0) t2 *= -1;
        *z++ = t2;
    }
}

/*2################################*/

void f(int * u, int * v, int * z, unsigned int size) {
  for (int i = 0; i < size; i++) {
    if (*v > *u) {
      *(z++) = *(v++) - *(u++);
      }
    }
  }
  
/*3################################*/

void copia_stringa(char d[], const char s[]) {
  unsigned char i = 0;
  while ((d[i] = s[i]) != 0) {
    i += 1;
  }
}

/*4################################*/

bool is_prime(int n)
{
  for (int i = 2; i <= n / 2; i++)
  {
    if ((n % i) == 0)
      return false;
  }
  return n > 1;
}

/*5################################*/

bool is_prime_rec(int n, int i = 2)
{
  if (i > n / 2)
    return n > 1;
  else if (n % i == 0)
    return false;
  else
    return is_prime_rec(n, i + 1);
}

/*6################################*/

void lambda_swap(unsigned int &a, unsigned int &b)
{
  // Swap 8 lsb of two numbers
  unsigned int a_ = a, b_ = b;
  unsigned int a_res, b_res;
  const unsigned int shift = (sizeof(int) - 1) * 8;

  a_ = (a_ >> 8) << 8;         // lsb set to 0
  b_ = (b_ << shift) >> shift; // all bytes but the lsb set to 0

  a_res = a_ | b_;

  a_ = a;
  b_ = b;

  a_ = (a_ << shift) >> shift; // all bytes but the lsb set to 0
  b_ = (b_ >> 8) << 8;         // lsb set to 0

  b_res = a_ | b_;

  a = a_res;
  b = b_res;
}

/*7################################*/

int division(int a, int b, int &remainder)
{ // a>=0, b>0
  int quotient = 0;
  while (a >= b)
  {
    a -= b;
    quotient++;
  }
  remainder = a;
  return quotient;
}

/*8################################*/

int gcd(int a, int b)
{ // Euclidean Algorithm
  // a > b
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}

/*9################################*/

int fib(int n){// n >= 0
  if(n == 0 || n == 1)
    return 1;
  else
    return fib(n-1)+fib(n-2);
}

/*10###############################*/

int fact(int n){// n >= 0
  if(n == 0 || n == 1)
    return 1;
  else
    return n*fact(n-1);
}

/*11###############################*/

bool is_alnum(char c)
{
  return ('a' <= c && c <= 'z') ||
         ('A' <= c && c <= 'Z') ||
         ('0' <= c && c <= '9');
}

/*12###############################*/

void crypt(char word[], int key)
{
  int i = 0;
  while (word[i] != '\0')
  {
    word[i] = (((word[i] - 'a') + key) % ('z' - 'a')) + 'a';
    i++;
  }
}

/*13###############################*/

void decrypt(char word[], int key)
{
  int i = 0;
  while (word[i] != '\0')
  {
    word[i] = (((word[i] - 'a') - key) % ('z' - 'a')) + 'a';
    i++;
  }
}

/*14###############################*/
int strlen (char *s){
  int n = 0;
  while (s[n] != '\0')
    n++;
  return n;
}

void leftmirror(char s[])
{
  int n = strlen(s);
  for (int i = 0; i < n; i++)
    s[n - 1 - i] = s[i];
}

/*14.1#############################*/

void reverse(char s[])
{
  char* se = s;
  while(*se++ != 0) ;
  se -= 2;
  while (s != se && s != (se+1)){
    char t = *se;
    *se-- = *s;
    *s++ = t;
  }
}

/*15###############################*/

int mathforfun(int i, int j,
  int q, int s){
  for(i=0;i<q; i++){
    q=q+s;
    q=q-j;
  }
return q;
}

/*16###############################*/

void sumV(int* v, int* w, int* z, int size){
  while(size-- != 0){
    *z++ = *v++ + *w++;
  }
}

/*17###############################*/

long myFunc(long a,long b,long c){
  long result=0;
  result+=a;
  result+=b;
  result+=c;
  return result;
}

/*18###############################*/

long sum(long count){
  if(count>0){
    long psum=sum(count-1);
  return psum+count;
  }else{
    return 0;
  }
}

/*19###############################*/

typedef long long int int64;
int64 power(int64 x,int64 y){
  int64 result=1;
  while(y & y != 0){
    result *= x;
    y--;
  }
return result;
}

/*20###############################*/

bool comparestring(const char*s1,
const char*s2){
  while((*s1!='\0')&&(*s2!='\0')&&(*s1==*s2)){
    s1++;
    s2++;
  }
  return(*s1==*s2);
}

/*21###############################*/

int calcola_media(int A[], int n) {
  int media = 0;
  for(int i = 0; i < n; i++) {
    media = media + A[i];
  }
  return media / n;
}

/*22###############################*/

int trova_elemento(int A[], int n, int v) {
  for(int i = 0; i < n; i++) {
    if (A[i]== v) return i;
  }
  return -1;
}

/*23###############################*/

void hailstone5(){
  int iter=0;
  int n=5;
  while(n != 1){
    iter++;
    if(n%2){
      n = 3 * n+1;
    }else{
      n = n/2;
    }
  }
}

/*24###############################*/

int memcompare(int nb, char*m1, char*m2){
  while(nb-->0){
    if( *m1++ != *m2++){
      return 0;
    }
  }
  return 1;
}

/*25###############################*/

typedef long long int int64;
int64 fun(int64* MemVett){
  int64 Ris=0;
  for(int64 i=0; i<100; i++)
    Ris += MemVett[i];
  return Ris;
}


#include <iostream>
using namespace std;
int main(){
  INT64 u[] = {1, 2, 3, 4, 5};
  INT64 v[] = {6, 7, 8, 9, 10};
  INT64 z[5];
  SumV(u, z, v, 5);
  cout << z[0] << " " << z[1] << " " << z[2] << " " << z[3] << " " << z[4] << endl;
}
