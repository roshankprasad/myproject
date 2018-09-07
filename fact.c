#include<stdio.h>
int main()
{
    int i,num,fact;
printf("please enter a number: \n");
scanf("%d",&num);
fact0=1;
for(i=num ; i>0; i--)
    {   
        fact(i)= num*fact(i-1);
        fact(i-1)=(i-1)*fact(i-2);
        printf("value of i = %d\n",i);
    }
printf("factorial of %d is = %d \n",num,fact);
return 0;
}