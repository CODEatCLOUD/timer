#include<stdio.h>
#include<unistd.h>
#include<windows.h>
int minit(int);
int sec();
int main()
{
    int i,j=0,k;
    for(i=0;;i++)
    {
        minit(j);
        sec();
        j++;
        printf("\b\b\b");
    }
}

int minit(int j)
{
    printf("%02d:",j);
}
int sec()
{
    int j;
    for(j=0;j<60;j++)
    {
        printf("%02d",j);
        Sleep(1000);
        printf("\b\b");
    }
}



