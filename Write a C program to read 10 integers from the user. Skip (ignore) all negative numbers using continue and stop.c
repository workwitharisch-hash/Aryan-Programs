#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter upto 10 integers (avoid negative no.s, 0 to stop \n");
    
    for(int i=0; i<10; i++){
        scanf("%d",&n);
        if(n==0) break;
        if(n<0) continue;
        sum += n;
    }
    printf("sum of integers are %d",sum);
    return 0;
}