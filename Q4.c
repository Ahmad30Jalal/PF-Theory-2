#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define mtrnsc 100
#define mlen 100

void sort_string(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

typedef struct {
    char **transactions;
    int count;
} AnagramGroup;

void gword(char *transactions[], int n, AnagramGroup groups[], int *group_count) {
    int used[mtrnsc] = {0};   
    *group_count = 0;

    for (int i = 0; i < n; i++) {
        if (used[i]) continue; 
        
        groups[*group_count].transactions = (char **)malloc(n * sizeof(char *));
        groups[*group_count].count = 0;

        char sorted_i[mlen];
        strcpy(sorted_i, transactions[i]);
        sort_string(sorted_i);

        for (int j = i; j < n; j++) {
            if (used[j]) continue;

            char sorted_j[mlen];
            strcpy(sorted_j, transactions[j]);
            sort_string(sorted_j);

            if (strcmp(sorted_i, sorted_j) == 0) { 
                used[j] = 1;
                groups[*group_count].transactions[groups[*group_count].count++] = transactions[j];
            }
        }
        (*group_count)++;
    }
}

int main() {
    int n;
    char *transactions[mtrnsc];
    
    printf("Enter the number of transactions: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        transactions[i] = (char *)malloc(mlen * sizeof(char));
        printf("Enter transaction %d: ", i + 1);
        scanf("%s", transactions[i]);
    }

    AnagramGroup groups[mtrnsc];
    int group_count = 0;

    gword(transactions, n, groups, &group_count);

    printf("\nGrouped Anagrams:\n");
    for (int i = 0; i < group_count; i++) {
        printf("[ ");
        for (int j = 0; j < groups[i].count; j++) {
            printf("%s ", groups[i].transactions[j]);
        }
        printf("]\n");
        free(groups[i].transactions);  
    }

    for (int i = 0; i < n; i++) {
        free(transactions[i]);
    }

    return 0;
}