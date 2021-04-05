#include <stdio.h>
#include <stdlib.h>

main()
{
	int h0, h, m0, m, hv, mv;
	scanf("%d %d %d %d", &h0, &m0, &h, &m);
	hv=h-h0;
	if (hv<0)
	{
		hv=24+(h-h0);
	}
	mv=m-m0;
	if (mv<0)
	{
		mv=60+(m-m0);
		hv--;
	}
	if (h == h0 && m == m0)
	{
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}
	else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hv, mv);
}
