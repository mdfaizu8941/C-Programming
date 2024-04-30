    #include <stdio.h>
#include <stdlib.h>
 
struct student {
    int roll;
    char name[50];
    float marks;
};
void sortStudents(struct student *students, int n) {
    struct student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks > students[j + 1].marks) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}
int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array of student structures
    struct student students[n];

    // Take input for each student
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Sort the students by marks in ascending order
    sortStudents(students, n);

    // Print the sorted student information
    printf("\nStudent information sorted by marks:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll number: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("-------------------\n");
    }

    return 0;
}

 