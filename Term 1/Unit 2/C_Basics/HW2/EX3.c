#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter three numbers :");
    fflush(stdout);
    scanf("%f %f %f",&a,&b,&c);
    fflush(stdin);
    if (a>b && a>c){
        printf("Largest number= %f",a);
        fflush(stdout);
    }else if (b>a && b>c){
        printf("Largest number= %f",b);
        fflush(stdout);
    }else{
        printf("Largest number= %f",c);
        fflush(stdout); 
    }
    

}