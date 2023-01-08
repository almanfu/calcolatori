/*1################################*/

void sposta(int v[], unsigned char i) {
  unsigned char j;
  int appoggio;
  appoggio = v[i];
  j = i - 1;
  while ((j >= 0) && (v[j] > appoggio)){
    v[j+1] = v[j];
    j = j-1;
  }
  v[j+1] = appoggio;
}

void ordina(int v[], unsigned char n){
  unsigned char i;
  i = 1;
  while (i < n) {
    sposta(v, i);
    i = i+1;
  }
}

/*2################################*/

int strlen (char *s){
  int n = 0;
  while (s[n] != '\0')
    n++;
  return n;
}

bool streq(char *s1, char *s2)
{
  bool res;
  int n1 = strlen(s1);
  int n2 = strlen(s2);

  if (n1 != n2)
    res = false;
  else
  {
    res = true;
    for (int i = 0; i < n1 && res; i++)
      res = s1[i] == s2[i];
  }

  return res;
}

/*3################################*/

void shift(char *s)
{
  int i = 0;
  while (s[i] != '\0')
  {
    s[i] = s[i + 1];
    i++;
  }
}

void strip(char *s)
{
  int i = 0;
  while (s[i] != '\0')
  {
    // Condition
    if (s[i] == 'p')
    {
      shift(&s[i]);
    }
    else
      i++;
  }
}

/*4################################*/

void merge_sarr(int *a, int *b, int &na, int nb){
  // In-Place merge, assuming size(a) >= na+nb
  int pos=0;
  for(int j=0; j < nb; j++){
    bool to_place=false;
    while(!to_place){
      if(pos == na-1){
        pos = a[pos] > b[j] ? pos : pos+1;
        to_place = true;
      }
      else if(a[pos+1] >= b[j]){
        to_place = true;
      }
      else
        pos++;
    }
    for(int k=0; k < (na-pos); k++)
      a[na-k] = a[na-k-1];
    a[pos] = b[j];
    na++;
  }
}

/*5################################*/

int insert_ordered(int A[], int n, int max, int v) {
  int i;
  if (n + 1 <= max) {
    for(i = 0; i < n ; i++) {
      if (A[i] > v) break;
    }
    for (int j = n-1; j >= i; j--) {
      A[j+1] = A[j];
    }
    A[i] = v;
    max = n+1;
  }
  return max;
}