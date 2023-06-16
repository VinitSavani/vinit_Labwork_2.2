#include<stdio.h>
#include<conio.h>

void main(){
const  float pi=3.1473;
int radius,total;
clrscr();
printf("radius = ");
scanf("%d",&radius);
total=pi*radius*radius;
printf("Area of circle is %d",total);

getch();
}