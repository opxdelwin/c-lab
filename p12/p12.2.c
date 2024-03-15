#include <stdio.h>

int main()
{

    int m, n, even, odd = 0;
    printf("Enter rows and column of matrix [m, n]: ");
    scanf("%d %d", &m, &n);

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
            if (data % 2 ==0) {
                even++;
            } else {
                odd++;
            }
        }
    }

    printf("Your Matrix is \n\n");
    printf("Odd Frequency: %d ; Even Frequency: %d\n", odd, even);

    return 0;
}