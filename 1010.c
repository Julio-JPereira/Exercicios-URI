#include <stdio.h>
#include <stdlib.h>

main()
{
	int c, n1, n2;
	float v1, v2, t;
	scanf("%d %d %f", &c, &n1, &v1);
	scanf("%d %d %f", &c, &n2, &v2);
	t=n1*v1+n2*v2;
	printf("VALOR A PAGAR: R$ %.2f\n", t);
	return 0;
	system("pause");
}
