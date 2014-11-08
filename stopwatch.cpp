#include<stdio.h>
#include<iostream>
#include<windows.h> // library for sleep function

int sec(int);
int minute(int,int);
int hour(int,int,int);

int main()
{
    int m,s,h;
    printf("hh:mm:ss\n");
    scanf("%d:%d:%d",&h,&m,&s);
    hour(h,m,s);
    printf("00:00:00");          // to show that it is completed

}

int hour(int h,int m,int s)
{
    for(;h>=0;h--)
    {
        printf("%02d:",h);
        minute(m,s);
        printf("\b\b\b");
        m=60;
        s=60;

    }
}

int minute(int m,int s)
{
    for(;m>=0;)
    {
        if(m==60)
            printf("00:");
        else
            printf("%02d:",m);
        sec(s);
        printf("\b\b\b");
        m--;
        s=60;
    }
}


int sec(int s)
{
    for(;s>0;s--)
    {

        if(s==60)
            printf("00");
        else
            printf("%02d",s);
        Sleep(1000);
        printf("\b\b");
    }
}
