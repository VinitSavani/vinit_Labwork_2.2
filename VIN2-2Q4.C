#include<stdio.h>
#include<conio.h>

void main(){
int p,r,t,total;

clrscr();
printf("Principal Amount=");
scanf("%d",&p);
printf("Rate per annum=");
scanf("%d",&r);
printf("time in years=");
scanf("%d",&t);
total=(p*r*t)/100;
printf("simple intrest is %d",total);

getch();
}