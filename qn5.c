#include <stdio.h>
#include <math.h>

int main() {
   int num,a;
   printf("enter any no");
   scanf("%d",&num);
   
// using pow() function
   a=pow(num,3);
   printf("%d \n",a);
// without using pow() function
   printf("%d",num*num*num);   
    return 0;
}

