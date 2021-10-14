#include <stdio.h>
#include<stdlib.h>

int main() {
    int *arr;
    int n,i;
    scanf("%d",&n);

    arr=(int*)calloc(n,sizeof(int));
    arr=(int*)malloc(n*sizeof(int));
    arr=realloc(arr, n*sizeof(int));
    for(i=0;i<n;i++)
         scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);    
}
