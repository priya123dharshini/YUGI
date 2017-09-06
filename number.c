# yugi
#include <stdio.h>
  int main() {
    int n[10];
    int k;
    int greatest;
    printf("Enter ten values:"); 
    for (k = 0; k < 10; k++) {
    	scanf("%d", &n[k]);
    }
    greatest = n[0];
    for (k = 0; k < 10; k++) {
	if (n[k] > greatest) {
	greatest = n[k];
    }
    }
    printf("Greatest of ten numbers is %d", greatest);
    return 0;
  }
