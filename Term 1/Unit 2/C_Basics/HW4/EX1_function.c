#include <stdio.h>
#include <math.h>
int main(){
    int i,j,count;
    int a,b;
    printf("Enter two number intervals: ");
    scanf("%d %d",&a,&b);
    for (i = a; i <= b; i++)
    {
        if ( i == 0)
            continue;
        count = 1;
        for (j = 2; j <= i / 2; ++j)
        {
            if (i % j == 0)
            {
                count = 0;
                break;
            }
        }
        if (count == 1)
            printf("%d ", i);
    }
 
    return 0;
}