#include<stdio.h>
#include<unistd.h>
#include<windows.h>
int minit(int);
int sec();
int hour(int);
int main()
{
    int i,j=0,k=0;
    for(i=0;;i++)
    {
        hour(k);
        minit(j);
        sec();
        j++;
        printf("\b\b\b\b\b\b");
        if(j==60)
        {j=0;
         k++;
        }
    }
}

int hour(int k)
{
    printf("%02d:",k);
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

