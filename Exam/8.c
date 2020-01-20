#include <stdio.h>
#include <conio.h>
int main(){

    int k=0;
    int M,D,d;
    scanf("%d%d",&M,&d);
    switch(M){
        case 1:  D=31+28+31+30+31+30+31+31+30+31+30+31-d; break;
        case 2:  D=28+31+30+31+30+31+31+30+31+30+31-d; break;
        case 3:  D=31+30+31+30+31+31+30+31+30+31-d; break;
        case 4:  D=30+31+30+31+31+30+31+30+31-d; break;
        case 5:  D=31+30+31+31+30+31+30+31-d; break;
        case 6:  D=30+31+31+30+31+30+31-d; break;
        case 7:  D=31+31+30+31+30+31-d; break;
        case 8:  D=31+30+31+30+31-d; break;
        case 9:  D=30+31+30+31-d; break;
        case 10: D=31+30+31-d; break;
        case 11: D=30+31-d; break;
        case 12: D=31-d; break;
        default: D=-1;k++;
    }
    printf("Do novogo goda %d dnei",D);
    getch();
}