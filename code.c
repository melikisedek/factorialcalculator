#include <stdio.h>

int faktor(int param)
{
	int i,toplam=1;
	
	for(i=1;i<=param;i++)
	{
		toplam*=i;
		
	}
	return toplam;
}

int main()
{
	int param;
	printf("facini almak istediginiz sayiyi giriniz :"); scanf("%d",&param);
	printf("%d",faktor(param));
}
