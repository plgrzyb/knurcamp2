#include <stdio.h>
#include <stdbool.h>
/*
 Zaimplementuj ciało funkcji isPrime która zwróci true jeśli podany int §num§ jest liczba pierwszą.
 Zwróć false w przeciwnym wypadku.
 */

bool isPrime(int num) {
    if(num > 1){
        int dividers = 0;
        for(int i = 1; i <= num; i++){
            if(num % i == 0){
                dividers++;
            }
        }
        printf("%d\n", dividers);
        return dividers < 3 ? true :  false;
    }
    return false;
}

void selfTest(void) {
    printf("Self-checking code:\n");
    printf("Test 1: %s\n", isPrime(2) ? "POPRAWNY" : "NIEPRAWIDŁOWY");
    printf("Test 2: %s\n", isPrime(11) ? "POPRAWNY" : "NIEPRAWIDŁOWY");
    printf("Test 3: %s\n", isPrime(99) ?  "NIEPRAWIDŁOWY" : "POPRAWNY");
    printf("Test 4: %s\n", isPrime(97) ? "POPRAWNY" : "NIEPRAWIDŁOWY");
}


int main(void) {
    int num;
    printf("Podaj liczbe: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d jest liczba pierwsza.\n", num);
    } else {
        printf("%d nie jest liczba pierwsza.\n", num);
    }

    // Run the self-checking code
    selfTest();

    return 0;
}