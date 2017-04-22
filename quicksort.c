#include<stdio.h>

void quicksort (int [250000], int, int);

int main () {
    int x[500000], size, i, n, a;
    
    scanf("%d", &n);
    for(a=0; a<n; a++){
        
        scanf("%d", &size);
        for(i=0; i<size; i++)
            scanf("%d", &x[i]);
        
        quicksort(x, 0, size-1);
        
        for(i=0; i<size; i++) {
            printf("%d ", x[i]);
        } printf("\n");
    }
    return 0;
}

void quicksort (int x[250000], int first, int last) {
    int pivot, j, temp, i;
    
    if( first < last ){
        pivot = first;
        i = first;
        j = last;
        
        while ( i < j ){
            while (x[i]<=x[pivot] && i<last )
                i++;
            while (x[j]>x[pivot])
                j--;
            if (i < j) {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
        temp = x[pivot];
        x[pivot]= x[j];
        x[j]=temp;
        quicksort(x, first, j-1);
        quicksort(x, j+1, last);
    }
}
