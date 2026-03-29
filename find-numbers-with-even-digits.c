#include <stdio.h>
int main() {
   int n,a=0;
   printf("enter the number of elements ");
   scanf("%d",&n);
   int ar[n];
   for(int i=0;i<n;i++)
   {
       printf("enter the number");
       scanf("%d",&ar[i]);
   }
   for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=ar[i];j>0;j=j/10)
        {
            c++;
        }
        if(c%2==0)
        a++;
    }
      printf("number of even digit containing numbers in the array=%d",a);
    return 0;
}
