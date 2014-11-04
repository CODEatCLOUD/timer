#include<stdio.h>
#include<unistd.h>
#include<windows.h>
int main()
{
    int i,j=0,k;
    for(i=0;;i++)
    {
        printf("%02d",j);
        goto start;
        j++;
    }
    start:
    for(k=0;k<60;k++)
     {
        printf("%02d",k);
        sleep(1000);
        printf("\b\b");

      }
}


