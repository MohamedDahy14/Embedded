#include <stdio.h>
int main(){
    int a[100];
    int no,i,x;
    printf("Enter number of elements: ");
    scanf("%d",&no);
    for (i = 0; i < no; i++)
    {   scanf("%d",&a[i]);

    }
    printf("\n");
    printf("Enter the elements to be searched : ");
    scanf("%d",&x);
    for (i = 0; i < no; i++)
    {   
        if (a[i]==x){
            printf("the number located in :%d",i+1);
        }
    }
}