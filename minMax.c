#include<stdio.h>
#define N 1000

int min (int dlugosc, int tab[N])

{
	int i;
	int min = tab[0];
	for (i=0; i<dlugosc; i++)
	{
		if(min>tab[i])
		{
			min=tab[i];
		}
	
	}
	return min;
}

int max (int dlugosc, int tab[N])

{
	int i;
	int max = tab[0];
	for (i=0; i<dlugosc; i++)
	{
		if (max<tab[i])
		{
			max=tab[i];
		}
	}
	return max;
}


int main ()
{
	int i,j;
	int ile_tab;
	int dlugosc;
	int tab[N];
	scanf("%d", &ile_tab);
	for (i=0; i<ile_tab; i++)
	{
		scanf("%d",&dlugosc);
		for(j=0; j<dlugosc; j++)
		{
			scanf ("%d", &tab[j]);
			
		}
		printf ("%d %d \n", min (dlugosc, tab), max (dlugosc, tab));
		
	}
	
	return 0;
	
}
