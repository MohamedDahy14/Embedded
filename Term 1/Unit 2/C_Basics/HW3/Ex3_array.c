#include<stdio.h>
int main(){
    int i,j,k,l;
    int a[100][100];
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d",&i,&j);
    for (k=0 ; k < i; k++)
    {
        for(l=0;l<j;l++)
        {
            printf("enter a%d%d: ",k+1,l+1);
            scanf("%d",&a[k][l]);  
        }
    }
    printf("Entered Matrix: \n");
    for(k=0 ; k < i; k++){
        for(l=0;l<j;l++){
            printf("%d  ",a[k][l]);
        }
        printf("\n");
    }
    printf("Transpose of Matrix: \n");
    for(k=0 ; k < j; k++){
        for(l=0;l<i;l++){
            printf("%d  ",a[l][k]);
        }
        printf("\n");
    }
}