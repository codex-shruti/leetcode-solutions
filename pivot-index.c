#include <stdio.h>
int main() {
    int n;
    printf("enter the number of elements");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        printf("enter a number");
        scanf("%d",&ar[i]);
    }
    int leftsum=0,rightsum=0,totalsum=0,found=0;
    for(int i=0;i<n;i++)
    totalsum+=ar[i];
    for(int i=0;i<n;i++)
    {
        rightsum=totalsum-leftsum-ar[i];
        if(rightsum==leftsum){
        printf("the pivot index is %d",i+1);
        found++;
        }
        leftsum=leftsum+ar[i];
    }
    if(found==0)
    printf("there is no pivot index");
    return 0;
}
