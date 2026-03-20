#include <stdio.h>
int main() {
   int n;
   char temp;
   printf("enter the length of the string");
   scanf("%d",&n);
   char str[50];
   printf("enter the string to be reversed");
   scanf("%s" , str);
   int left=0,right=n-1;
   while(left<=right)
   {
       temp=str[left];
       str[left]=str[right];
       str[right]=temp;
       left++;
       right--;
   }
     printf("the reversed string is %s",str);
    return 0;
}
