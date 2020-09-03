#include<stdio.h>

/*Guess and check algorithm = Exhusive rumination algorithm = Brute force algotihm*/

int main() {

    double num;
    double var = 0;
    int count = 0;
    printf(" Enter number to find cube root: ");
    scanf_s(" %lf", &num);

    while (var * var * var <= num) {
        var += (double) 0.000001;
        count++;
    }
    printf("\n Number of guesses are %d", count);

    if ((double) num - var * var * var > 0.001) {

        printf("\n\n Faled to find cube root of %f", num);
    }

    else printf("\n\n Cube root of %f is close to %f", num, var);

}