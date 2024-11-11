#include<stdio.h>
int main()
{
	int r,i,c;
	printf("Enter the number:");
	scanf("%d",&r);
	int a[r];
	for(i=0;i<=10;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the value needed to check:");
	scanf("%d",&c);
	for(i=0;i<=10;i++)
	{
		if(a[i]==c){
		
		printf("%d first occurance is in a[%d]");
		break;
	}
	}
}
