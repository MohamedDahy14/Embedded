#include <stdio.h>
int power(int y,int n){
    if(n==1){
        return y;
    }
    else{
        return y*power(y,n-1);
    }
}
int main(){
    int n,x,y;
    printf("Enter base numberr: ");
    scanf("%d",&y);
    printf("Enter power number (postive integer: )");
    scanf("%d",&n);
        x= power(y,n);
    printf(" %d ^ %d= %d",y,n,x);
    }