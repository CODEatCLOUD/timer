#include<stdio.h>
#include<iostream>

#include<windows.h>

int sec(int);
int minit(int);

int main()
{
    int m,s;
    printf("mm:ss\n");
    scanf("%d:%d",&m,&s);
    for(;m>=0;)
    {
        minit(m);
        sec(s);
        printf("\b\b\b");
        s=59;
        m--;
    }
}

int sec(int s)
{
    for(;s>=0;s--)
    {
        printf("%02d",s);
        Sleep(1000);
        printf("\b\b");
    }
}

int minit(int m)
{
    printf("%02d:",m);
}
