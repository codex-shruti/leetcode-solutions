#include <stdio.h>
int main() {
    int n,c=0;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=n;i!=0;i=i/2)
    {
        if(i%2==1)
        c++;
    }
    printf("the binary representation of %d has %d number of 1 bits",n,c);
    
    return 0;
}
