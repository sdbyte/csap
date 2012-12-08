#include "snyincludeall.c"

int main()
{
	int choice=0;
	enter();

	while(choice<4)
	{
		printf("\n\nEnter 1 for mergesort and enter 2 for insertionsort:");
		scanf("%d",&choice);
	
		if(choice==1)
			snymergesort(0,n);
		if(choice==2)
			snyinsertionsort();
		printf("\n\nProcessing......");
		printf("\n\nOutput is...");
		output();
		printf("\n\nYou want to try again? Press 1 for try again, Press 2 for exit:");
		scanf("%d",&choice);
		if(choice!=1)
			choice=10;

	}

	return 1;
		
}
