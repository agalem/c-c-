#include <stdio.h>
int main(){
  int m,n,tab[500000],c,d,t,i;
  scanf("%d",&m);
  for(i=0;i<m;i++){
  scanf("%d", &n);
  for(c=0;c<n;c++){
    scanf("%d",&tab[c]);
  }
  for(c=1;c<=n-1;c++){
    d=c;
    while(d>0&&tab[d]<tab[d-1]){
      t=tab[d];
      tab[d]=tab[d-1];
      tab[d-1]=t;
      d--;
    }
  }
 for(c=0;c<=n-1;c++){
    printf("%d ",tab[c]);
  }
  printf("\n");
  }
  return 0;
}
