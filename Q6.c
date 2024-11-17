#include <stdio.h>

int move1(int n) {
    if (n % 5 == 0) {
        return -1;
    }
     else {
        return n % 5;
    }
}

int main() {
    int n;
    printf("Enter the number of matchsticks: ");
    scanf("%d", &n);
    
    int result = move1(n);
    if (result == -1) {
        printf("It is impossible for A to win.\n");
    } else {
        printf("A should pick %d matchsticks on his first turn to guarantee a win.\n", result);
    }
    
    return 0;
}