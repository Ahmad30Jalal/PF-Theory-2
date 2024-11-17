#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define rows 6
#define cols 5

void generate_random_array(char array[rows][cols], int student_id[]);
void print_array(char array[rows][cols]);
int search_string_in_array(char array[rows][cols], const char *search);

int main() {
    char array[rows][cols];
    int student_id[4] = {1, 2, 3, 4};  // Replace with your actual last four digits of student ID
    char search[50];
    int score = 0;

    srand(time(0));

    while (1) {
        generate_random_array(array, student_id);
        print_array(array);

        printf("Enter string to search (or type END to stop): ");
        scanf("%s", search);

        if (strcmp(search, "END") == 0) {
            break;
        }

        if (search_string_in_array(array, search)) {
            score++;
            printf("%s is present Score %d\n", search, score);
        } else {
            score = score > 0 ? score - 1 : 0;
            printf("%s is not present Score %d\n", search, score);
        }
    }

    return 0;
}

// Generate a random 6x5 array and set the last row to the student ID digits
void generate_random_array(char array[rows][cols], int student_id[]) {
    for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = 'A' + (rand() % 26);  // Random alphabet character
        }
    }
    // Set last row to the student ID's last four digits
    for (int j = 0; j < cols - 1; j++) {
        array[rows - 1][j] = '0' + student_id[j];
    }
    array[rows - 1][cols - 1] = 'Q';  // Fill last cell with 'Q'
}

// Print the 2D array in a tabular format
void print_array(char array[rows][cols]) {
    printf("\nArray:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
}

// Search for a string in the 2D array from left to right and top to down
int search_string_in_array(char array[rows][cols], const char *search) {
    int len = strlen(search);

    // Check each row
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= cols - len; j++) {
            int found = 1;
            for (int k = 0; k < len; k++) {
                if (array[i][j + k] != search[k]) {
                    found = 0;
                    break;
                }
            }
            if (found) return 1;
        }
    }

    // Check each column
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i <= rows - len; i++) {
            int found = 1;
            for (int k = 0; k < len; k++) {
                if (array[i + k][j] != search[k]) {
                    found = 0;
                    break;
                }
            }
            if (found) return 1;
        }
    }

    return 0;
}
