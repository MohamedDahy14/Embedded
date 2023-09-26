#include<stdio.h>
int main(){
    int i;
    float a[100], count,sum=0.0;
	printf("Enter the number of data: "); 
    scanf("%f",&count) ;   
    for (i=0;i<count;i++){
        printf("Enter number: ");
        scanf("%f",&a[i]);
    }
    for (i=0;a[i]!=0;i++){
        sum+=a[i];

    }
    float avg=sum/count;
    printf("Average = %.2f",avg);    
}