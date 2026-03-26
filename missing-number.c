#include <stdio.h>
int main() {
    int n;
    printf("enter a number of elements");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        printf("enter a number ");
        scanf("%d",&ar[i]);
    }
    int sum1=0,sum2=0,i;
    for(i=0;i<n;i++)
    {
        sum1+=i;
        sum2+=ar[i];
    }
      sum1+=i;
      if(sum1!=sum2)
      printf("Missing element=%d",sum1-sum2);
    return 0;
}
