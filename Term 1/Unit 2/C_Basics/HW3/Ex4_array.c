#include <stdio.h>
int main(){
    int a[100];
    int no,i,x,y;
    printf("Enter number of elements: ");
    scanf("%d",&no);
    for (i = 0; i <no; i++)
    {   scanf("%d",&a[i]);

    }
    printf("\n");
    printf("Enter the element to be inserted :");
    scanf("%d",&x);
    printf("Enter the location :");
    scanf("%d",&y);
    a[y-1]=x;
    for (i = 0; i < no; i++)
    {   
        printf("%d ",a[i]);
    }

}