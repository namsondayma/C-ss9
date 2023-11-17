#include <stdio.h>
int main()
{
    int row, col, sum, max, min, count;
    printf("L?n lu?t nh?p s? c?t v� s? d�ng c?a m?ng 2 chi?u ");
    scanf("%d%d", &row, &col);
    int arr[row][col];
    do
    {
        printf("1. Nh?p gi� tr? c�c ph?n t? c?a m?ng\n");
        printf("2. In gi� tr? c�c ph?n t? c?a m?ng theo ma tr?n\n");
        printf("3. In gi� tr? c�c ph?n t? l� l? v� t�nh t?ng\n");
        printf("4. In ra c�c ph?n t? n?m tr�n du?ng bi�n v� t�nh t�ch\n");
        printf("5. In ra c�c ph?n t? n?m tr�n du?ng ch�o ch�nh v� ch�o ph? v� t�nh t?ng\n");
        printf("6. In ra gi� tr? l?n nh?t v� nh? nh?t trong m?ng\n");
        printf("7. T�nh gi� tr? trung b�nh c?a c�c ph?n t? trong m?ng (l�m tr�n xu?ng) v� th?ng k� c� bao nhi�u ph?n t? c� gi� tr? b?ng gi� tr? trung b�nh\n");
        printf("8. In ra d�ng c� t?ng gi� tr? c�c ph?n t? l� l?n nh?t\n");
        printf("9. Tho�t\n");
        printf("Nh?p l?a ch?n c?a b?n");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            for (int i = 0; i < row; i++)
            {
                for (int f = 0; f < col; f++)
                {
                    printf("arr[%d][%d]=", i, f);
                    scanf("%d", &arr[i][f]);
                }
            }

            break;
        case 2:
            for (int i = 0; i < row; i++)
            {
                for (int f = 0; f < col; f++)
                {
                    printf("arr[%d][%d]=%d\t", i, f, arr[i][f]);
                }
                printf("\n");
            }
            break;
        case 3:
            for (int i = 0; i < row; i++)
            {
                for (int f = 0; f < col; f++)
                {
                    if (arr[i][f] % 2 != 0)
                    {
                        sum += arr[i][f];
                        printf("arr[%d][%d]=%d\n", i, f, arr[i][f]);
                    }
                }
            }
            break;
        case 4:
            sum = 0;
            for (int i = 0; i < row; i++)
            {
                for (int f = 0; f < col; f++)
                {
                    if (i == 0 || f == 0 || i == row - 1 || f == col - 1)
                    {
                        printf("arr[%d][%d]=%d\n", i, f, arr[i][f]);
                        sum *= arr[i][f];
                    }
                }
            }
        case 5:
            if (row == col)
            {
                printf("�u?ng ch�o ch�nh c?a ma tr?n l�\n");
                for (size_t i = 0; i < row; i++)
                {
                    printf("arr[%d][%d]=%d\n", i, i, arr[i][i]);
                }
                printf("�u?ng ch�o ph? c?a ma tr?n l�\n");
                int f = col;
                for (int i = 0; i < row; i++)
                {
                    printf("arr[%d][%d]=%d\n", i, f, arr[i][f]);
                    f--;
                }
            }
            else
                printf("Nh?p l?i s? c?t v� s? d�ng\n");
        case 6:
            max = arr[0][0];
            min = arr[0][0];
            for (int i = 0; i < row; i++)
            {
                for (int f = 0; f < col; f++)
                {
                    max = (max > arr[i][f]) ? max : arr[i][f];
                    min = (min < arr[i][f]) ? min : arr[i][f];
                }
            }
            printf("Max=%d\tMin=%d\n", max, min);
            break;
        case 7:
            int averageValue = 0;
            for (int i = 0; i < row; i++)
            {
                for (int f = 0; f < col; f++)
                {
                    averageValue += arr[i][f];
                }
            }
            averageValue = averageValue / (row * col);
            count = 0;
            for (int i = 0; i < row; i++)
            {
                for (int f = 0; f < col; f++)
                {
                    if (averageValue == arr[f][i])
                    {
                        count++;
                    }
                }
            }
            printf("Trong m?ng  c� %d gi� tr? nhu v?y", count);
            break;
        case 8:
            count = 0;
            max=0;
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    sum+=arr[i][j];
                }
                if (sum>max)
                {
                    count=i;
                }
            }
            printf("d�ng c� t?ng gi� tr? c�c ph?n t? l� l?n nh?t l� %d",sum);
            break;
        default:
            printf("Nh?p l?i");
        }
    } while (1 == 1);
}
