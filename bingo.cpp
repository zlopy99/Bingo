#include<stdio.h>
int main()
{
	int niz[48]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48};
	int i,brojevi[6];
	
	printf("Unesite 6 brojeva po vasem izboru:\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&brojevi[i]);
		if(brojevi[i]<1 || brojevi[i]>48)
		{
			printf("Unesite ponovo:\n");
			i--;
		}
		
		
	}
	printf("Vasi brojevi su:\n");
	for(i=0;i<6;i++)
	{
		printf("%d ",brojevi[i]);
	}
}
