#include<stdio.h>
int main()
{ 
    int num,i,z;
    int a[]={10,20,55,33,44,66,88,65,87,29,35};
    printf("numbers r:\n");
    for(i=0;i<11;i++)
    printf("%d\t",a[i]);
    printf("\n");
    printf("enter the number to search:\n");
    scanf("%d",&num);
printf("i=%d\n",i);
    i=0;
while(i<11)
{
    if(a[i]==num)
        return(i);
return(-1);
    i++;
}
printf("x is found at %d\n",i);
return 0;
}