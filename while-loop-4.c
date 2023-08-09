#include<stdio.h>

main()
{
	int i,n=1;
	
	printf("Enter value for=");
	scanf("%d",&i);
	
	while(i>=n)
	{
		printf("%d\n",i);
		i--;
	}
}