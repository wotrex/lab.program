#include <stdio.h>
#include <stdlib.h>

int main()
{
    const unsigned int size;
    printf("Enter array size[]\n");
    scanf("%d", &size);
    printf("Your array size[%d]\n", size);
    int arr [size];
    printf("Enter values\n");
    int i;
    for (int a = 0; a < size; a++ ){
        scanf("%d", &i);
        arr[a] = i;
        printf("a[%d] = %d\n", a, i);

    }
    printf("Your array[%d] =  ", size);
    for (int a = 0; a < size; a++ ){
        printf("%d   ", arr[a]);
    }
    for (int a = 0; a < size; a++) {
        int num = arr[a];
        int sum = 0;
        for (int i = num/2; i >= 1; i--) {
             if(!(num % i)) {
             sum += i;
             }

        }
        if (sum == num) {
            printf("\nNumber %d is perfect", num);
        }else{
            printf("\nNumber %d isn't perfect", num);
        }

    }
     for (int a = 0; a < size; a++) {
        int num = arr[a];
        int sum = 0;
        for (int i = num/2; i >= 1; i--) {
             if(!(num % i)) {
             sum += i;
             }

        }
        if (sum == num) {
            printf("\nNumber %d is perfect", num);
        }else{
            printf("\nSum of divisors number %d is %d", num, sum);
        }
    }

    return 0;
}
