void snyinsertionsort()
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
