#include <stdio.h>

int sumOfDigits(int); 

int main (void) {

    int n, result; 
    scanf ("%d", &n); 

    result = sumOfDigits (n);

    printf("%d", result);



    return 0;
}

int sumOfDigits (int x) {
    int s;

    if (x/10 == 0) {
        s = x; 
    } else {
        s = x % 10 + sumOfDigits (x / 10);
    }
      


    return s;
}

