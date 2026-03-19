#include<stdio.h>
void main()
{
  int n,num=0,dig=0;
  printf("enter the number");
  scanf("%d",&n);
  for(int i=n;i>0;i=i/10)
  {
      dig=i%10;
      num=num*10+dig;
  }
  if(num==n)
  printf("%d is a palindrome number",n);
  else
  printf("%d is not a palindrome number",n);
}
