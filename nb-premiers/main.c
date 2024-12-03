#include <stdio.h>
#include <stdlib.h>

void print_primes() {
    int num = 2;

    while (1) {
        int is_prime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%d\n", num);
        }

        num++;
    }
}

int main(){
    print_primes();
    return 0;
}
