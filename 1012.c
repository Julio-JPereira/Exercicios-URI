#include <stdio.h>
#include <stdlib.h>

main()
{
	double a, b, c, t, ci, tr, q, r, pi = 3.14159;
	scanf("%lf %lf %lf", &a, &b, &c);
	t=a*c/2;
	ci=pi*c*c;
	tr=(a+b)*c/2;
	q=b*b;
	r=a*b;
	printf("TRIANGULO: %.3lf\n", t);
	printf("CIRCULO: %.3lf\n", ci);
	printf("TRAPEZIO: %.3lf\n", tr);
	printf("QUADRADO: %.3lf\n", q);
	printf("RETANGULO: %.3lf\n", r);
	return 0;
	system("pause");
}
