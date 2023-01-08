  /*RISCV####################*/

typedef long int int64;
typedef unsigned long int uint64;

void fun(int64 *u, int64 *v, int64 *z, uint64 size){
  for(uint64 i=0; i < size; i++){

    u[i] = -u[i];
    v[i] = -v[i];

    int64 a = u[i]-v[size-i];
    int64 b = u[size-i]-v[i];

    if(a>b)
      z[i] = -a*a*2;
    else
      z[i] = b*b*2;

    /*
    Potrebbe anche essere 
        if(a>b)
          z[i] = -b*b*2;
        else
          z[i] = a*a*2;
    oppure
        if(a>b)
          z[i] = a*a*2;
        else
          z[i] = -b*b*2;
    oppure tutte queste senza il *2
    oppure tutte queste ma con il *2 solo in
      una delle due
    */

  }
}

  /*ARM#######################*/

void fun(int *u, int *v, int *z, unsigned int size){
  for(int i=1; i < size; i++)
    *(z+i) = *(v+i-1) + *(u+i);
}

  /*INTEL#####################*/

void fun(int *u, int *v, int *z, unsigned int size){
  for(int i=0; i < size; i++)
    *z++ = *v++ + *u++ + i;
}