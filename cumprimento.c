#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

char S[15];
int K;
FILE *O, *F;

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
    O = fopen("A.txt","r");
    F = fopen("B.txt","w");
    fscanf (O, "%s\n", &S);
    SInt();
    if (K>=6 && K<12)
        fprintf (F,"Bom Dia\n");
    if (K>=12 && K<18)
        fprintf (F,"Boa Tarde\n");
    if (K>=18 && K<=23)
        fprintf (F,"Boa Noite\n");
    if (K>=0 && K<6)
        fprintf (F,"Boa Noite\n");
    fprintf (F,"\n");
    return 0;
}
