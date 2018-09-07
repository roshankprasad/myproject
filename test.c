#include<stdio.h>

int main()
{
    int i=0;

    // do while loop
do{
    if(6>4)
    printf("i = %d \n",i);
    else printf("6 is not less than 4\n");
    i++;

}while(i<10);

i=0;
printf("\n");
// while loop
while(i<10){
    if(6>4)
    printf("i = %d \n",i);
    else printf("6 is not less than 4\n");
    i++;
}
return 0;
}