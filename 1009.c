#include <stdio.h>
#include <stdlib.h>

main()
{
	char nome;
	double a, b, t;
	scanf("%s %lf %lf", &nome, &a, &b);
	t=b*0.15+a;
	printf("TOTAL = R$ %.2lf\n", t);
	return 0;
	system("pause");
}
