#define MAX 10000
#include <stdio.h>

//Global Definations
int a[MAX]={0};
int n=0;

//entering the sequence in array
void enter()
{
	int i;
	
	printf("Enter array size:");
	scanf("%d",&n);

	printf("\n\nNow enter input number sequence:");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

}

//outputing the sequence 

void output()
{
	int i;

	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}

//insertion sort function

void insertionsort()
{
	int key=0;
	int i,j;

	i=0;
	
	for(j=1;j<n;j++)
	{
		key=a[j];
		i=j-1;
		while(i>=0 && a[i]>key)
		{
			a[i+1]=a[i];
			i--;
		}
		i++;
		a[i]=key;
	}
}

int main()
{
	enter();
	printf("\n\nSorting...");
	insertionsort();
	printf("\n\noutput is:\n\n");
	output();

	return 1;
}
