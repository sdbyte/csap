#include <stdio.h>
#include <stdlib.h>
int snyrand;

int snyrandom()
{
			
	srand(snyrand);
	return rand();
}

//void main()
//{
//	int i;
//
//	i=snyrandom();
//
//	printf("%d",i);
//}
