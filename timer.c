#include<stdio.h>
#include<unistd.h>
#include<windows.h>
int main()
{
    int i;
    for(i=0;;i++)
    {
        printf("%d",i);
        Sleep(1000);
        printf("\r");
    }
}
