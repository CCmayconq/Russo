#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <locale.h>

char S[4];
char O[50];
int K;

int SInt()
{
    K=0;
    if (S[0]=='1')
        K=10;
    if (S[0]=='2')
        K=20;
    if (S[1]=='1')
        K=K+1;
    if (S[1]=='2')
        K=K+2;
    if (S[1]=='3')
        K=K+3;
    if (S[1]=='4')
        K=K+4;
    if (S[1]=='5')
        K=K+5;
    if (S[1]=='6')
        K=K+6;
    if (S[1]=='7')
        K=K+7;
    if (S[1]=='8')
        K=K+8;
    if (S[1]=='9')
        K=K+9;
    return 0;
}

int main()
{
    setlocale(LC_ALL, "ru-RU");
    const time_t timer = time(NULL);
    strcpy(O, ctime(&timer));
    S[0]=O[11];
    S[1]=O[12];
    SInt();
    if (K>=6 && K<12)
        printf ("доброе утро \n");
    if (K>=12 && K<18)
        printf ("добрый день \n");
    if (K>=18 && K<=23)
        printf ("добрый вечер \n");
    if (K>=0 && K<6)
        printf ("добрый вечер \n");
    return 0;
}
