void snymergesort(int first,int last);
void snymerge(int first,int middle, int last);

void snymergesort(int first, int last)
{
	int p=first;
	int r=last;
	int q;
	if (p<r-1)
		
	{
		q=(p+r)/2;

		snymergesort(p,q);
	
		snymergesort(q,r);

		snymerge(p,q,r);
	}
}

void snymerge(int first, int middle, int last)
{
	int temp[last-first];
	int templength=last-first;
	
	int fromLeft = first;
	int fromMid = middle;
	
	int k=0;
	
	for (k=0; k<templength; k++) {
		if(fromMid>=last || (fromLeft<middle && a[fromLeft]<=a[fromMid]))
		{
			temp[k]=a[fromLeft];
			fromLeft++;
		}
		else {
			temp[k]=a[fromMid];
			fromMid++;
		}

	}
	
	for (k=first; k<last; k++) {
		a[k]=temp[k-first];
	}
}
