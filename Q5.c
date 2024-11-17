#include <stdio.h>

void his(int arr[], int n) {
    int i, j;
    
    for (i = 0; i < n; i++) {
        printf("Value %d: ", i + 1);
        for (j = 0; j < arr[i]; j++) {
            printf("*");
        }
        
        printf("\n");
    }
}


void hisv(int arr[], int n) {
    int i, j;
    int max = 0;

    
    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }


    for (i = max; i > 0; i--) {
        for (j = 0; j < n; j++) {
            if (arr[j] >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}


int main() {
    int i, n = 0;
    int arr[4];
    
    printf("Enter Number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nhorizontal histogram\n");

    his(arr, n);
    
    printf("\nVertical histogram\n");
    hisv(arr, n);
   

    return 0;
}
