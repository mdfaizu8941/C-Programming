 #include <stdio.h>

#define MAX_SIZE 10

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int i, j, size, sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix you entered is:\n");
    for (i = 0,j=size-1; i < size; i++,j--) {
   
                sum += matrix[i][j];
    }

    printf("The sum of the elements on the secondary diagonal is: %d\n", sum);

    return 0;
}