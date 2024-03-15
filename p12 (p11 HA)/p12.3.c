#include <stdio.h>

int main()
{

    int m, n = 0;
    printf("Enter rows and column of matrix [m, n]: ");
    scanf("%d %d", &m, &n);

    int userArray[m][n], transpose[n][m];

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
            transpose[j][i] = data;
        }
    }

    printf("Your Matrix is \n\n");
    int lenRow = sizeof(userArray) / sizeof(userArray[0]);
    int lenCol = sizeof(userArray[0]) / sizeof(userArray[0][0]);


    for (int i = 0; i < lenRow; i++)
    {
        for (int j = 0; j < lenCol; j++)
        {
            printf("\t%d\t|", userArray[i][j]);
        }
        printf("\n");
    }


    printf("Tranpose Matrix is \n\n");
    int lenRowT = sizeof(transpose) / sizeof(transpose[0]);
    int lenColT = sizeof(transpose[0]) / sizeof(transpose[0][0]);


    for (int i = 0; i < lenRowT; i++)
    {
        for (int j = 0; j < lenColT; j++)
        {
            printf("\t%d\t|", transpose[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}