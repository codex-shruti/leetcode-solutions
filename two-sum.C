#include<stdio.h>
void main()
{
int n,c=0;
printf("enter the number of elements of the array");
scanf("%d",&n);
int ar[n];
for(int i=0;i<n;i++)
{
 printf("enter a number");
scanf("%d",&ar[i]);
}
int target;
printf("enter the target sum");
scanf("%d",&target);
for(int i=0;i<n;i++)
{
  for(int j=i+1;j<n;j++)
{
   if((ar[i]+ar[j])==target)
   {
     printf("%d is the sum of the positions %d and %d\n",target,i+1,j+1);
      c++;
  }
}
}
if(c==0)
printf(" sum of the numbers of the two positions not found");
}
