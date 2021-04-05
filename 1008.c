#include <stdio.h>
#include <stdlib.h>

main()
{
	int  a, b;
	float c, s;
	scanf("%d %d %f", &a, &b, &c);
	s=b*c; 
	printf("NUMBER = %d\n", a);
	printf("SALARY = U$ %.2f\n", s);
	return 0;
	system("pause");
}  	
