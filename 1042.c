#include <stdio.h>
#include <stdlib.h>

main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a<b && a<c) printf("%d\n", a);
	else if (b<a && b<c) printf("%d\n", b);
	else if (c<a && c<b) printf("%d\n", c);
	if (b<a && a<c || c<a && a<b) printf("%d\n", a);
	else if (a<b && b<c || c<b && b<a) printf("%d\n", b);
	else if (a<c && c<b || b<c && c<a) printf("%d\n", c);
	if (b<a && c<a) printf("%d\n", a);
	else if (a<b && c<b) printf("%d\n", b);
	else if (a<c && b<c) printf("%d\n", c);
	printf("\n");
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	system("pause");
	return 0;
}
