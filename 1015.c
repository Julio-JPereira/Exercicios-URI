#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	double x1, x2, y1, y2, d1, d2;
	scanf("%lf %lf", &x1, &y1);
	scanf("%lf %lf", &x2, &y2);
	d1=pow(x2-x1,2)+pow(y2-y1,2);
	d2=sqrt(d1);
	printf("%.4lf\n", d2);
}
