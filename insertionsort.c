#define MAX 10000
#include <stdio.h>
#include "random.c"

void output();
//Global Definations
int a[MAX]={0};
int n=0;

//entering the sequence in array
void enter()
{
	int i;
	int choice=0;
	
	printf("Enter array size:");
	scanf("%d",&n);
	
	printf("Do you want to enter sequence or randomize sequence? Enter 1 for manual input and 2 for randomization:");
	scanf("%d",&choice);

	if(choice == 1)
	{
		printf("\n\nNow enter input number sequence:");

		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	}

	else if(choice == 2)
	{
		for(i=0;i<n;i++)
		{
			a[i]=snyrandom();
			snyrand=a[i];
		}

		printf("\n\nRandomized array is :");
	
		output();
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
