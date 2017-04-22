#include <stdio.h>
int main () {
int ile, k, s, swap, i, j, a[500000];
  scanf("%d", &ile);
  for(k=0; k<ile; k++) {
    scanf("%d",&s);
    for(i=0; i<s; i++)
        scanf("%d", &a[i]);
    for(i=0;i<(s-1);i++){
      for(j=0;j<s-i-1;j++){
           if(a[j]>a[j+1]){
               swap=a[j];
              a[j]=a[j+1];
              a[j+1]=swap;
           }}}
  for(i=0;i<s;i++)
      printf("%d ",a[i]);
      printf("\n");}
    return 0;
}
