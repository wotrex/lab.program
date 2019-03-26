#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char menu() {
    char choice;
    printf("-----------------------\n");
    printf("What do you want to do?\n");
    printf("-----------------------\n");
    printf("[A] Complete the first task \n");
    printf("[F]  Complete the second task\n");
    printf("[Q] Quit\n");
    printf("-----------------------\n");
    printf("Your choice: ");
    while((choice = getchar()) == '\n');
    printf("\n");
    return choice;
}
double count_y(double x){
    if (x <=-4){
        return fabs(x+4);
    } else if (-4 < x<= 0){
        return x*exp(x-2);
    } else if(x >0){
        return pow(x,2)+(1/(2-x));
    }
}

double count_f(double x, double y){
    return log(sqrt(x+y))/(x*y);
}

int main(int argc, char *argv[])
{
    char ans;
    while((ans = toupper(menu())) != 'Q') {
    if (ans == 'F') {
        double a = -7, b = 7 , h = 0.2;

        printf("-----------------------------------  Part 1 ----------------------------------- \n");

        printf("x:\t");
        for (double x = a; x <= b; x += h) {
            char c = x + h < b ? '\t' : '\n';
            printf("%.3f%c", x, c);
        }

        printf("y:\t");
        for (double x = a; x <= b; x += h) {
            char c = x + h < b ? '\t' : '\n';
            printf("%.3f%c", count_y(x), c);
        }

        printf("----------------------------------------------------------------------  \n");

        printf("----------------------------------- Part 2 ----------------------------------- \n");

        double a1= 1, b1 = 2, h1 = 0.1;
        double c1= 1, d1 = 3, h2 = 0.2;
        printf("y\\x\t");
        for (double x = a1; x <= b1; x += h1) {
            char c = x + h1 < b1 ? '\t' : '\n';
            printf("%.3f%c", x, c);
        }

        for (double y = c1; y <= d1; y += h2) {
            printf("%.3f\t", y);
            for (double x = a1; x <= b1; x += h1) {
                char c = x + h1 < b1 ? '\t' : '\n';
                printf("%.3f%c", count_f(x, y), c);
            }
        }
    }
else if( ans == 'A'){
      int N;
    double x, leftX = 0, rightX = 1;

    printf("Enter x, N: ");
    if (scanf("%lf %d", &x, &N) != 2) {
        printf("Invalid input\n");
        return -1;
    }

    if (x < leftX || x > rightX) {
        char* fmt = "Incorrect %.4f. Need from [%.4f, %.4f]\n";
        printf(fmt, x, leftX, rightX);
        return -1;
    }
 double a = 1, S = a;

    for (int n = 0; n <= N; ++n) {
        double q = pow(x, 2)*(2*n+3)*(n+1)/(2*n+1);
        a *= q;
        S += a;
    }

    //Calc result
    S = - S;
    double y = 3 * pow(x, 2);
    printf("S=%.7f\n", S);
    printf("y=%.7f\n", y);
    double eps = fabs(y-S)/fabs(S)*100;
    printf("e=%.2f%%\n", eps);
        }

}
return 0;
}
