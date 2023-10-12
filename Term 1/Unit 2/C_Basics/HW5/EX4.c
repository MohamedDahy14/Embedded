#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student students[10];
    int i,j;
    printf("Enter information for 10 students:\n");

    for ( i = 0; i < 10; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\nStudent Information:\n");
    for ( j = 0; j < 10; j++) {
        printf("Student %d:\n", j + 1);
        printf("Name: %s\n", students[j].name);
        printf("Roll Number: %d\n", students[j].roll);
        printf("Marks: %.2f\n", students[j].marks);
    }

    return 0;
}
