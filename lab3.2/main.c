#include <stdio.h>
#include <stdlib.h>

int main()
{
    const unsigned int row;
    const unsigned int col;
    printf("Enter array size[][]\n");
    scanf("%d", &row);
    printf("Enter array size[%d][]\n", row);
    scanf("%d", &col);
    printf("Your array size[%d][%d]\n", row, col);
    int arr[row][col];
    printf("Enter values\n");
    int i;
    for (int b = 0; b < row; b++ ){
        for (int a = 0; a < col; a++ ){
            scanf("%d", &i);
            arr[b][a] = i;
            printf("a[%d][%d] = %d\n", b, a, i);
        }

    }
    printf("Your array[%d][%d] =  ", row, col);
    for (int b = 0; b < row; b++ ){
        for (int a = 0; a < col; a++ ){
            printf("%d   ", arr[b][a]);
        }

    }
    float s[row];
    for (int b = 0; b < row; b++ ){
        if (b < row) {
            float sum = 0;
            for (int a = 0; a < col; a++ ){
                 int num = arr[b][a];
                 sum += num;
                 for (int mdl = 0; mdl <= a; mdl++){
                    s[b] = sum/(mdl+1);
                 }
            }
            printf("\nAverage value of string %d is %.5f\n", b, s[b]);
        }
    }
    int t;
    int tt;
    for (int i = 0; i < row; i++) {
        for(int j = row - 1; j >= i; j--) {
            if(s[j-1] > s[j]) {
                printf("Work\n");
                for (int a = 0; a < col; a++) {
                    tt = arr[j-1][a];
                    arr[j-1][a] = arr[j][a];
                    arr[j][a] = tt;
                }
                t = s[j-1];
                s[j-1] = s[j];
                s[j] = t;
            }
        }
    }
    for (int k = 0; k < row; k++){
        printf("%.5f\n", s[k]);
    }
    printf("Your new array[%d][%d] =  ", row, col);
    for (int b = 0; b < row; b++ ){
        for (int a = 0; a < col; a++ ){
            printf("%d   ", arr[b][a]);
        }

    }
    return 0;
}
