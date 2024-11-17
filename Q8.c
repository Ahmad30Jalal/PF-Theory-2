#include <stdio.h> 
#include <string.h>
#include <math.h>

void btd(int arr[], int n) {

int s = 0, sum = 0;
int i, n1;

printf("Enter number of bits: ");
scanf("%d", &n);

for (i = 0; i < n; i++) {
    printf("Bit %d: ", i + 1);
    scanf("%d", &arr[i]);
    
}

 
  for (i = 0; i < n; i++) {
    
    if ( arr[i] == 1) {
      sum += pow(2, i);
      }
  }
  printf("Binary to decimal: %d ", sum);
  
}

void dtb(int n) {
int i, j, n1, n
int sum = 0;

while (n > 0) {
  n = n % 2;
  
  if (n % 2 == 0) {
    i = 0;
    n1 = arr{i];
    }

    else {
      i = 1;
      n1 = arr[i];
      }
     j += 1;
}

for (i = j; i >= 0; i++) {
  if (i == 1) {
    sum += pow(2, j);
    }
}


int main() {
int arr[20], n;

btd(arr, n);
return 0;

}