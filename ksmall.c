#include<stdio.h>
int main()
{
	 int i,j,temp,min,n,k,a[10];
	printf("enter the number of elemnts");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element");
		scanf("%d",&a[i]);
	}
	printf("enter the k");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("the smallest elemt is %d",a[k-1]);
}
	
output:

ENTER THE NUMBER OF ELEMENTS TO INSERT INTO THE ARRAY:
4

ENTER THE ELEMENTS OF THE ARRAY:
1
2
3
4

ENTER THE NUMBER OF MAX ELEMENTS:
3

SORTED ARRAY:

1
2
3
4
MAXIMUM ELEMETS ARE:
4
3
2



