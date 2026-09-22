#include<stdio.h>
int main(){
    int n,key, found=0,index;
    printf("enter no. of inputs:"); scanf("%d",&n);
    int arr[n];
    
    for(int i=1; i<=n; i++){
        printf("enter element %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("enter key to search: "); scanf("%d",&key);
    for(int i=1; i<=n; i++){
        if (arr[i]==key) {
            found=1;
            index=i;
            break;
        }
    }
    if (found=1) printf("found at index %d\n",index);
    else printf("not found");
    return 0;
}