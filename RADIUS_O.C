/*Hello Guys , In this program we reads the Radius of Sphere "r" and
  calculates it's Volume "v" and Surface area "a".*/

#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
	int r,a;
	float v;

	clrscr();

	printf("\nEnter Radius of Sphere:::");
	scanf("%d",&r);

	v=(pi*r*r*4)/3;

	printf("\nVolume = %f",v);

	a=pi * r * r * 4;

	printf("\nSurface Area = %d",a);

	getch();
}