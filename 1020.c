#include <stdio.h>
#include <stdlib.h>

main()
{
	int i;
	scanf("%d", &i);
	printf("%d ano(s)\n", i/365);
	i %=365;
	printf("%d mes(es)\n", i/30);
	i %=30;
	printf("%d dia(s)\n", i/1);
	i %=1;
	return 0;
	system("pause");
}
