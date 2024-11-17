#include <stdio.h>
#include <string.h>

#define mx_char 128

void count(char *sl) {
  
int i;

int fr[mx_char] = {0};

// count frequency
for (i = 0; sl[i] != '\0'; i++) {
  fr[(int)sl[i]]++;
  }

printf("For  %s \n", sl);

for (i = 0; i < mx_char; i++) {
  printf("'%c': %d ", (char)i, fr[i]);
}
printf("\n");
}

int main() {

int n, len, i;

printf("Enter number of slogans: ");
scanf("%d", &n);

char sl[n][50];


for (i = 0; i < n; i++) {
  printf("Enter slogan %d: ", i + 1);
  fgets(sl[i], sizeof(sl[i]), stdin);

  len = strlen(sl[i]);

  if (len > 0 && sl[i][len - 1] == '\n') {
    sl[i][len - 1] = '\0';
    }
  }

for (int i = 0; i < n; i++) {
        count(sl[i]);
    }

    return 0;
}