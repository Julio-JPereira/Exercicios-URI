#include <stdio.h>
#include <stdlib.h>

main()
{
	float N1, N2, N3, N4, ne, m, mf;	
	scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
	
	m=(N1*2+N2*3+N3*4+N4*1)/10;
	
	printf("Media: %.1f\n", m);
	if (m>=7)
	{
		printf("Aluno aprovado.\n");
	}
	else
	{
		if(m<5)
		{
			printf("Aluno reprovado.\n");
		}
		else
		{
			printf("Aluno em exame.\n");
			scanf("%f", &ne);
			mf=(ne+m)/2;
			if  (mf>=5)
			{
			printf("Nota do exame: %.1f\n", ne);	
			printf("Aluno aprovado.\n");	
			printf("Media final: %.1f\n", mf);
				
			}
			else
			{
				printf("Aluno reprovado.\n");
				
			}
		}
		
	}
}
