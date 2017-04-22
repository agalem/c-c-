#include <stdio.h>

int main () {
	int tab[100], i, m, l, s, p;
	scanf("%d", &m);
	l = 0;
	for (i=0; i<m; i++)
		scanf ("%d", &tab[i]);
	for (i=0; i<m; i++){
		if (tab[i]!=0)
		{
			s=tab[i];
			tab[i]=0;
			l++;
			while (tab[s-1]!=0)
			{
				p=s;
				s=tab[s-1];
				tab[p-1]=0;
			}
		}
	}
	printf("%d\n", l*500);
	return 0;
}
