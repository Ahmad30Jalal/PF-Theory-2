#include <stdio.h> 
#include <string.h>
#include <math.h>

void btd() {
int arr[20];
int n;    

int s = 0, sum = 0;
int i, n1;

printf("Enter number of bits: ");
scanf("%d", &n);



for (i = 0; i < n; i++) {
    printf("Bit %d: ", i + 1);
    scanf("%d", &arr[i]);
    if (arr[i] < 0 || arr[i] > 1) {
        printf("Enter a valid value\n");
        i--;
    }
    
}

 
  for (i = 0; i < n; i++) {
    
    if ( arr[i] == 1) {
      sum += pow(2, i);
      }
  }
  printf("Binary to decimal: %d ", sum);
  
}

void dtb() {
    int n, i = 0, arr[32]; 
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        arr[i] = n % 2; 
        n /= 2;         
        i++;
    }

    printf("Decimal to binary: ");
    for (int j = i - 1; j >= 0; j--) {  
        printf("%d", arr[j]);
    }
    printf("\n");
}

void htd() {
char val[20];
int i, n2, n1;
int ans = 0;

printf("Enter Hexadecimal number: ");
scanf("%s", val);
    
  n2 = strlen(val);
  
    
    for (i = 0; i < n2; i++) {
        char n3 = val[i];
        
        if (n3 >= '0' && n3 <= '9') {
            n1 = n3 - '0';
        }
        else if (n3 >= 'A' && n3 <= 'F') {
            n1 = n3 - 'A' + 10;
        }
        else if (n3 >= 'a' && n3 <= 'f') {
            n1 = n3 - 'a' + 10;
        }
        ans += n1 * pow(16, n2 - i - 1);
    }
    printf("%d", ans);
}

void dth() {
int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("Hexadecimal: %X ", n);

    }
    
void bth() {
int arr[20];
int n;    

int s = 0, sum = 0;
int i, n1;

printf("Enter number of bits: ");
scanf("%d", &n);



for (i = 0; i < n; i++) {
    printf("Bit %d: ", i + 1);
    scanf("%d", &arr[i]);
    if (arr[i] < 0 || arr[i] > 1) {
        printf("Enter a valid value\n");
        i--;
    }
    
}

 
  for (i = 0; i < n; i++) {
    
    if ( arr[i] == 1) {
      sum += pow(2, i);
      }
  }
  printf("Hexadecimal: %X ", sum);
}

void htb() {
    
char val[20];
int i, n2, n1;
int ans = 0;
int arr [20];
int k = 0;

printf("Enter Hexadecimal number: ");
scanf("%s", val);
    
  n2 = strlen(val);
  
    
    for (i = 0; i < n2; i++) {
        char n3 = val[i];
        
        if (n3 >= '0' && n3 <= '9') {
            n1 = n3 - '0';
        }
        else if (n3 >= 'A' && n3 <= 'F') {
            n1 = n3 - 'A' + 10;
        }
        else if (n3 >= 'a' && n3 <= 'f') {
            n1 = n3 - 'a' + 10;
        }
        ans += n1 * pow(16, n2 - i - 1);
    }


    while (ans > 0) {
        arr[k] = ans % 2; 
        ans /= 2;         
        k++;
    }

    printf("Hexadecimal to binary: ");
    for (int j = k - 1; j >= 0; j--) {  
        printf("%d", arr[j]);
    }
    printf("\n");
}

    


int main() {
    int a;

printf("Enter 1 to convert binary to decimal\n2 for decimal to binary\n3 for hexadecimal to decimal\n4 for decimal to hexadecimal\n5 for binary to hexadecimal\n6 for hexadecimal to binary : ");
scanf("%d", &a);

if (a == 1) {
    btd();
}

if (a == 2) {
    dtb();
}

if (a == 3) {
    htd();
}

if (a == 4) {
    dth();
}

if (a == 5) {
    bth();
}

if (a == 6) {
    htb();
}
return 0;
}
