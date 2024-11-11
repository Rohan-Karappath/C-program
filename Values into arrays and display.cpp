#include<stdio.h>
int main()
{
	int r,i;
	printf("Enter the number:");
	scanf("%d",&r);
	int a[50];
	for(i=0;i<=6;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<=6;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}
