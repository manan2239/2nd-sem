#include<stdio.h>

int min_loc (int x[], int k, int size)
{
	int j, pos;
	pos = k;
	for (j=k+1; j<size; j++)
	if (x[j] < x[pos])
	pos = j;
	return pos; 
}

int sel_sort (int x[], int size)
{ int k,m;

for (k=0 ; k<size-1; k++)
{int temp;
	m = min_loc (x, k, size);
	temp = x[k];
	x[k] = x[m];
	x[m] = temp;
}
}
int main ()

{
	
	int x[]={-45,89,-65,87,0,3,-23,19,56,21,76,-50};
	int i;
	for(i=0;i<12;i++)
	printf("%d " ,x[i]);
	printf("\n");
	sel_sort(x,12);
	for(i=0;i<12;i++)
	printf("%d ",x[i]);
	printf("\n");
}
