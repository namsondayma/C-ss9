#include <stdio.h>
int main()
{
    int row, col, sum, max, min, count;
    printf("L?n lu?t nh?p s? c?t và s? dòng c?a m?ng 2 chi?u ");
    scanf("%d%d", &row, &col);
    int arr[row][col];
    do
    {
        printf("1. Nh?p giá tr? các ph?n t? c?a m?ng\n");
        printf("2. In giá tr? các ph?n t? c?a m?ng theo ma tr?n\n");
        printf("3. In giá tr? các ph?n t? là l? và tính t?ng\n");
        printf("4. In ra các ph?n t? n?m trên du?ng biên và tính tích\n");
        printf("5. In ra các ph?n t? n?m trên du?ng chéo chính và chéo ph? và tính t?ng\n");
        printf("6. In ra giá tr? l?n nh?t và nh? nh?t trong m?ng\n");
        printf("7. Tính giá tr? trung bình c?a các ph?n t? trong m?ng (làm tròn xu?ng) và th?ng kê có bao nhiêu ph?n t? có giá tr? b?ng giá tr? trung bình\n");
        printf("8. In ra dòng có t?ng giá tr? các ph?n t? là l?n nh?t\n");
        printf("9. Thoát\n");
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
                printf("Ðu?ng chéo chính c?a ma tr?n là\n");
                for (size_t i = 0; i < row; i++)
                {
                    printf("arr[%d][%d]=%d\n", i, i, arr[i][i]);
                }
                printf("Ðu?ng chéo ph? c?a ma tr?n là\n");
                int f = col;
                for (int i = 0; i < row; i++)
                {
                    printf("arr[%d][%d]=%d\n", i, f, arr[i][f]);
                    f--;
                }
            }
            else
                printf("Nh?p l?i s? c?t và s? dòng\n");
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
            printf("Trong m?ng  có %d giá tr? nhu v?y", count);
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
            printf("dòng có t?ng giá tr? các ph?n t? là l?n nh?t là %d",sum);
            break;
        default:
            printf("Nh?p l?i");
        }
    } while (1 == 1);
}
