# include <stdio.h>

int moldura(int a, int b, char c)
{
	int i,j,cont=0;
	for(i=1;i<=a;i++){
	
		for(j=1;j<=b;j++)
			if((i==1)|| (i==a))
			{	printf("%c",c);
				cont++;
			}
			else
				if((j==1)||(j==b))
				{
					printf("%c",c);
					cont++;
				}
				else
					printf(" ");
			printf("\n");
}
	return cont;
}
int main()
{
	int alt,larg;
	char c;
	printf("informe a o caracter\n");
	scanf("%c",&c);
	printf("informe a altura da moldura\n");
	scanf("%d",&alt);
	printf("informe a largura da moldura\n");
	scanf("%d",&larg);
	int qtd=moldura(alt,larg,c);
	printf("quantidade de caracteres impressos foi :%d",qtd);
	return 0;
	
}
