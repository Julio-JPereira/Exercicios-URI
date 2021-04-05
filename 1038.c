#include <stdio.h>
#include <stdlib.h>

main()
{
	int c, q;
	float p;
	scanf("%d %d", &c, &q);
	switch(c)
	{
		case 1: p= q*4.0; break;
		case 2: p= q*4.5; break;
		case 3: p= q*5.0; break;
		case 4: p= q*2.0; break;   
		case 5: p= q*1.5; break;
		default: break;
	}
	printf("Total: R$ %.2f\n", p);
	return 0;
	system("pause");
}
