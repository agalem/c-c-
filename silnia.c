#include<stdio.h>

int main()
{
 int n,i,j,p,s;

 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
  scanf("%d",&p);
  if(p<=1)
   printf("0 1\n");
  else if(p>10)
   printf("0 0\n");
  else
  {
   s=1;
   for(j=1; j<=p; j++)
   {
    s=s*j;
   }
  printf("%d %d\n",(s/10)%10, s%10);
  }
 }
 return 0;
}
