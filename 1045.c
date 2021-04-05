#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	float a, b, c, p1, p2, p3;
	float temp;
	scanf("%f %f %f", &a, &b, &c);
	if (a<b)
	{
		temp=a;
		a=b;
		b=temp;
	 } 
	 if (a<c)
	{
		temp=a;
		a=c;
		c=temp;
	 } 
	if (b<c)
	{
		temp=b;
		b=c;
		b=temp;
	 }
	  
	if (a<b || a<c) printf("%f\n", a);
	if (a>=b+c) printf ("NAO FORMA TRIANGULO\n");
	else 
	{
	
	if (pow(a, 2) == pow(b, 2)+pow(c, 2) ) printf("TRIANGULO RETANGULO\n");
	if (pow(a, 2)>pow(b, 2)+pow(c, 2)) printf("TRIANGULO OBTUSANGULO\n");
	if (pow(a, 2)<pow(b, 2)+pow(c, 2)) printf("TRIANGULO ACUTANGULO\n");
	if (a==b && a==c) printf("TRIANGULO EQUILATERO\n");
	if (a==b && a!=c || a==c && c!=b || b==c && b!=a) printf("TRIANGULO ISOSCELES\n");
    }
}
