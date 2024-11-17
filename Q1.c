#include <stdio.h>
int main() {

int mn = 9999;
int mx = 9999;
int i;
int a[5];

printf("Enter 5 elements (less than 9999)\n");

for (i = 0; i < 5; i++) {
  printf("Enter Element %d ", i + 1);
  scanf("%d" ,&a[i]);

  if (a[i] > 9999) {
    printf("Enter value less than 9999");
    i--;
    }
  }

for(i = 0; i < 5; i++) {

  if (a[i] < mn) {
    mn = i;
    }
}

a[mn] = 10000;

for(i = 0; i < 5; i++) {

  if (a[i] < mx) {
    mx = a[i];
    }
}

printf("The second smallest number is %d", mx);

return 0;
}


