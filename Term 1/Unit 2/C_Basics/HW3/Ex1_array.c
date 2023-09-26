#include<stdio.h>
int main(){
    float a[2][2],b[2][2],sum[2][2];
    int i,j;
    printf("Enter elements of the first matrix:\n");
    for (i=0 ; i < 2; i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter a%d%d: ",i+1,j+1);
            scanf("%f",&a[i][j]);  
        }
    }
    printf("Enter elements of the second matrix:\n");    
    for (i=0 ; i < 2; i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter b%d%d: ",i+1,j+1);
            scanf("%f",&b[i][j]);  
        }
    }    
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
             sum[i][j] =a[i][j]+b[i][j];
            printf("%.1f  ",sum[i][j]);
        }
        printf("\n");
    }
           
}