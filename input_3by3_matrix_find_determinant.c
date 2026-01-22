#include <stdio.h>
float determinant(float m[3][3]) //to get determinant
{
    float det;

    det = m[0][0] * (m[1][1]*m[2][2] - m[1][2]*m[2][1])
        - m[0][1] * (m[1][0]*m[2][2] - m[1][2]*m[2][0])
        + m[0][2] * (m[1][0]*m[2][1] - m[1][1]*m[2][0]);

    return det;
}

int main()
{
    float matrix[3][3];
    float det;
// input the matrix
    printf("Enter elements of 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }
//printing the matrix
    printf("\nInput Matrix:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
// finding determinant
    det = determinant(matrix);
    printf("\nDeterminant = %f\n", det);

    return 0;
}
