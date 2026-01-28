#include<stdio.h>
int main(){
    int n,i, isPrime= 1;
    printf("enter a number:");
    scanf("%d",&n);
    if(n<=1){
        printf("not prime");
        return 0;
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            isPrime++;
            printf("not prime");
            return 0;
        }
    }
    printf("prime");
    return 0;
}