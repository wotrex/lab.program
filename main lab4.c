#include <stdio.h>
#include <stdlib.h>
#include <string.h>s

int main()
{
    unsigned const int ws = 15;
    char word[ws];
    char wd = word;
    int c;
    char t;
    printf("Enter your word\n");
    scanf("%s", word);
    c = strlen(word);
    int sum;
    for(int a = 0; a < c * c; a++) {
        sum = a;
        if(sum+1 > c) {
                    for (int i = 0; i < c-1; i++){
                        sum = i;
                        t = word[sum];
                        word[sum] = word[sum+1];
                        word[sum+1] = t;
                        printf("\nYour word is %s", word);
                    }
        }
        else if(sum+1 < c){
                    t = word[sum];
                    word[sum] = word[sum+1];
                    word[sum+1] = t;
                    printf("\nYour word is %s", word);

        }
    }
    return 0;

}
