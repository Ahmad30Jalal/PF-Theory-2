#include <stdio.h>

void cmpw(char *word) {
    int i, j = 0;
    char cmp[20];
    
    for (i = 0; word[i] != '\0'; i++) {
    
        if (i == 0 || word[i] != word[i - 1]) {
            cmp[j++] = word[i];
        }
    }
    
    cmp[j] = '\0';  
    printf("%s\n", cmp);  
}

void comp(char arr[3][20]) {
    for (int i = 0; i < 3; i++) {
        cmpw(arr[i]);  
    }
}

int main() {
    char arr[3][20];

    for (int i = 0; i < 3; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", arr[i]);
    }

    printf("\nCompressed words:\n");
    comp(arr);

    return 0;
}

      
     
      
 