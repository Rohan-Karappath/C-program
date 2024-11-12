#include<stdio.h>
int main()
{
	int m,l,i,j,a[30][30];
	printf("Enter the no of row:");
	scanf("%d",&m);
	printf("Enter the no of column:");
	scanf("%d",&l);
	for(i=0;i<m;i++)
	{
		for(j=0;j<l;j++)
	{
		printf("a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
    }
    }
    for (i=0;i<m;i++)
    {
    	printf("\n");
    	{
    		for(j=0;j<l;j++)
    		printf("%d\n",a[i][j]);
		}
	}
	return 0;
}
