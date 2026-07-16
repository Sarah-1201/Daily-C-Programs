#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, cols;
    int **matrix;
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);
    matrix = (int **)malloc(rows * sizeof(int *));

    if (matrix == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (i = 0; i < rows; i++)
    {
        matrix[i] = (int *)malloc(cols * sizeof(int));

        if (matrix[i] == NULL)
        {
            printf("Memory allocation failed!\n");
            return 1;
        }
    }
    printf("\nEnter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nMatrix is:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}