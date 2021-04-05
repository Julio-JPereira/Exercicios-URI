#include <stdio.h>
#include <stdlib.h>

main()
{
	int h0, h, y, x=24;
	scanf("%d %d", &h0, &h);
	x=h0-h;
	if (h0==h)
	{
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
    else if (h0>h) printf("O JOGO DUROU %d HORA(S)\n", y=24-x);
	else if (h0<h) printf("O JOGO DUROU %d HORA(S)\n", y=(h0-h)*-1);
}
