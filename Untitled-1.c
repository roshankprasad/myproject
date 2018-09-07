#include<stdio.h>
int main()
{ 
    int i,j,z;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        { z= i*j;
            printf("value of z=%d\n",z);
        }
        printf("\n");    
    }
return 0;
}