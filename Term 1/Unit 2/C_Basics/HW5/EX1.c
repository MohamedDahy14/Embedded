#include <stdio.h>
struct Grades
{
    char name[50];
    int roll;
    float marks;
};

int main (){
    struct Grades x;
    printf("Enter name: ");
    scanf("%s",x.name);
    printf("Roll Number: ");
    scanf("%d",&x.roll);
    printf("Marks: ");  
    scanf("%f",&x.marks);      
    printf("Displaying Information");
    printf("name : %s\n",x.name);
    printf("Roll: %d\n",x.roll);
    printf("Marks: %.2f\n",x.marks);
}