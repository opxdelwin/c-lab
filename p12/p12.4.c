#include <stdio.h>

int main()
{

    int m, n, sum = 0;
    printf("Enter rows and column of matrix [m, n]: ");
    scanf("%d %d", &m, &n);

    if (m != n)
    {
        printf("Not a square matrix.\n");
        return 0;
    }

    int userArray[m][n];

    for (int i = 0; i < m; i++)
    {
        // take rows
        printf("\n<----- NEXT ROW ----->\n\n");
        for (int j = 0; j < n; j++)
        {
            // take column data
            int data;
            printf("Input Data at row %d, col %d: ", i, j);
            scanf(" %d", &data);
            userArray[i][j] = data;
        }
    }

    printf("Your Matrix is \n\n");
    int lenRow = sizeof(userArray) / sizeof(userArray[0]);
    int lenCol = sizeof(userArray[0]) / sizeof(userArray[0][0]);

    for (int i = 0; i < lenRow; i++)
    {
        for (int j = 0; j < lenCol; j++)
        {
            if (j == i)
            {
                sum += userArray[i][j];
            }
        }
    }

    printf("Trace od matrix: %d\n", sum);

    return 0;
}