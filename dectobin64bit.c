#include<stdio.h>
int main(void)
{
	long long unsigned dec;
	printf("Decimal: ");
	scanf("%llu",&dec);
	int rem=0,i,bin[64];
	for(int j=0;j<64;j++)
		bin[j]=0;
	printf("Binary: ");
	for(i=0;;i++)
	{
		if(dec==0)
			break;
		rem=dec%2;
		bin[i]=rem;
		dec=dec/2;	
	}
	i--;
	int flag=0;
	for(;i>=0;i--)
	{
		printf("%d",bin[i]);
		flag++;
		if(flag==4)
		{
			printf(" ");
			flag=0;
		}
	}
	return 0;
}