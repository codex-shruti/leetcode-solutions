#include<stdio.h>
int addDigits(int num) {
    if(num==0)
    return 0;
    return 1+(num-1)%9;
}
void main()
{
    int n,c;
    printf("enter the number");
    scanf("%d",&n);
    c=addDigits(n);
    if(c==0)
    printf("wrong input");
    else
    printf("we get %d as the output due to repeated addition",c);
    
}
