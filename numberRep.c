#include<stdio.h>

int main()
{
int temp,a,b;
printf("value of temp = %d \n",temp);
printf("value of a= %d & value of b= %d \n",a,b);
printf("enter two numbers:");
scanf("%d %d",&a,&b);
printf("value of a= %d & value of b= %d \n",a,b);
temp=a;
a=b;
b=temp;
printf("value of a= %d & value of b= %d \n",a,b);
printf("value of temp = %d \n",temp);

return 0;
}

