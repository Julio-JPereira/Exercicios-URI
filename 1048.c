#include <stdio.h>
#include <stdlib.h>

main()
{
	double s, a, b, c, d, e, ns1, ns2, ns3, ns4, ns5;
	scanf("%lf", &s);
	a=s*0.15;
	b=s*0.12;
	c=s*0.10;
	d=s*0.07;
	e=s*0.04;
	ns1=s+a;
	ns2=s+b;
	ns3=s+c;
	ns4=s+d;
	ns5=s+e;
	if (0<s && s<=400)
	{
		printf("Novo salario: %.2lf\n", ns1);
		printf("Reajuste ganho: %.2lf\n", a);
		printf("Em percentual: 15 %%\n");
	}
	else
	{
		if (400.01<=s && s<=800)
		{
			printf("Novo salario: %.2lf\n", ns2);
			printf("Reajuste ganho: %.2lf\n", b);
			printf("Em percentual: 12 %%\n");
		}
		else
		{
			if (800.01<=s && s<=1200)
			{
				printf("Novo salario: %.2lf\n", ns3);
				printf("Reajuste ganho: %.2lf\n", c);
				printf("Em percentual: 10 %%\n");
			}
			else
			{
				if (1200.01<=s && s<=2000)
				{
					printf("Novo salario: %.2lf\n", ns4);
					printf("Reajuste ganho: %.2lf\n", d);
					printf("Em percentual: 7 %%\n");
				}
				else
				{
					if (2000<s)
					{
						printf("Novo salario: %.2lf\n", ns5);
						printf("Reajuste ganho: %.2lf\n", e);
						printf("Em percentual: 4 %%\n");
					}
				}
			}
		}
	}

}
