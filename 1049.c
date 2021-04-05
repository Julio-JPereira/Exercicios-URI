#include <stdio.h>
#include <string.h>

main()
{
	char a[30], b[30], c[30];
	scanf("%s %s %s", &a, &b, &c);
	if (0==strcmp(a, "vertebrado") && 0==strcmp(b, "ave") && 0==strcmp(c, "carnivoro")) printf("aguia\n");
	else if (0==strcmp(a, "vertebrado") && 0==strcmp(b, "ave") && 0==strcmp(c, "onivoro")) printf("pomba\n");
	else if (0==strcmp(a, "vertebrado") && 0==strcmp(b, "mamifero") && 0==strcmp(c, "onivoro")) printf("homem\n");
	else if (0==strcmp(a, "vertebrado") && 0==strcmp(b, "mamifero") && 0==strcmp(c, "herbivoro")) printf("vaca\n");
	else if (0==strcmp(a, "invertebrado") && 0==strcmp(b, "inseto") && 0==strcmp(c, "hematofago")) printf("pulga\n");
	else if (0==strcmp(a, "invertebrado") && 0==strcmp(b, "inseto") && 0==strcmp(c, "herbivoro")) printf("lagarta\n");
	else if (0==strcmp(a, "invertebrado") && 0==strcmp(b, "anelideo") && 0==strcmp(c, "hematofago")) printf("sanguessuga\n");
	else if (0== strcmp(a, "invertebrado") && 0==strcmp(b, "anelideo") && 0==strcmp(c, "onivoro")) printf("minhoca\n");
}
