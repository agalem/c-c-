#include <stdio.h>

int main() {
int tab[500000],i,n,m,c,d,pos,swap;
scanf("%d",&m);
for(i=0;i<m;i++){
scanf("%d",&n);
for(c=0;c<n;c++)
    scanf("%d",&tab[c]);
    for(c=0;c<(n-1);c++){
      pos=c;
    for(d=c+1;d<n;d++){
         if(tab[pos]>tab[d] )
            pos=d;}
      if(pos!=c){
         swap=tab[c];
         tab[c]=tab[pos];
         tab[pos]=swap;
      }
}
for(c=0;c<n;c++)
      printf("%d ",tab[c]);
      printf("\n");
   }
   return 0;
}
