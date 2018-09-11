//Gabriel Medeiros Sollero
//11811EAU006
#include <stdio.h>
int main()
{
	char n[256];
	int estado=0, i=0;
	scanf("%s",n);
	while(n[i]!='\0')
	{
		if(estado==0 && n[i]=='1')
		{
			estado = 1;
			i++;
		}
		if(estado==0 && n[i]=='0')
		{
			estado = 0;
			i++;
		}
		if(estado==1 && n[i]=='1')
		{
			estado = 0;
			i++;
		}
		if(estado==1 && n[i]=='0')
		{
			estado = 2;
			i++;
		}
		if(estado ==2 && n[i]=='0')
		{
			estado = 1;
			i++;
		}
		if(estado ==2 && n[i]=='1')
		{
			estado = 2;
			i++;
		}
	}
	printf("%s ", n);
	if(estado!=0)
	printf("nao ");
	printf("e multiplo de 3");
}
