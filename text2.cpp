#include<stdio.h>
int main()
{
	int l,m;	
	scanf_s("%d%d",&l,&m);
	int i = 0;
	int start, end;
	int arr[10000] = { 0 };
	for (i = 0; i < m; i++)
	{
		scanf_s("%d%d",&start,&end);
		for (; start <= end; start++)
		{
			if (start <=end)
			{
				arr[start] = 1;
			}
		}
	}
	int a = 0;
	int count = 0;
	for (a=0;a<=l;a++)
	{
		if (arr[a] == 0)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}