#include <stdio.h>
int main() {
    int n,k=0;
    printf("enter a number");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]!=0)
        {
            ar[k]=ar[i];
            k++;
        }
    }
    while(k!=n)
    {
        ar[k]=0;
        k++;
    }
    printf("Updated Array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}
