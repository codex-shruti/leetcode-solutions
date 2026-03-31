#include <stdio.h>
int main() {
  int n;
  printf("enter the number of elements");
  scanf("%d",&n);
  int ar[n];
  for(int i=0;i<n;i++)
  {
      printf("Enter a number");
      scanf("%d",&ar[i]);
  }
  int c=0;
  for(int i=0;i<n;i++)
  {
      c=c^ar[i];
  }
  if(c>0)
  printf("the single element of the array=%d",c);
  else
  printf("there is no single element in the array");
    return 0;
}
