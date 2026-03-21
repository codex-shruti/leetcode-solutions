#include <stdio.h>
int main() {
    int n;
    printf("enter the no of days");
    scanf("%d",&n);
    int price[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the price ");
        scanf("%d",&price[i]);
    }
    int min=price[0],max=0,maxd,mind;
    for(int i=0;i<n;i++)
    {
        if(min>price[i]){
        min=price[i];
        mind=i;}
        if(max<price[i]-min){
        max=price[i]-min;
        maxd=i;}
    }
    printf("maximum profit obtained= %d ",max);
    printf("\n stock bought on Day%d and stock sold on Day%d",mind+1,maxd+1);
    return 0;
}
