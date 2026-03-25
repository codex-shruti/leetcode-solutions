#include <stdio.h>
int main() {
  int n,c=0;
  printf("enter a number");
  scanf("%d",&n);
  if(n<=0)
  c=2;
  for(int i=n;i>=1;i=i/2)
  {
      if(i==1)
      {
      c++;
      break;
      }
      if(i%2!=0)
      {
          c=2;
          break;
      }
  }
  if(c==2)
  printf("%d is not a power of two",n);
  else
  printf("%d is a power of two",n);
    return 0;
}
