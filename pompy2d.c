#include<stdio.h>

int main ()
{
	int i, n, tab[1000], pompa;
	pompa =0;
	scanf ("%d", &n);
	for (i=0; i<n; i++)
	{
			scanf ("%d", &tab[i+1]);
	}
	i=1;
	tab[0]=11;
	pompa =0;
	
	while (i<=n)
	{
		while(i<=n && tab [i-1]>=tab[i])
		{
			i++;
		}
		
		pompa++;
		
		while (i<=n && tab[i-1]<=tab[i])
		{
			i++;
		}
	}
	printf ("%d\n",pompa);
	return 0;
	
}
