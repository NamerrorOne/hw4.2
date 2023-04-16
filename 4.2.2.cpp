#include <iostream>



int main() {
	printf("put number of digitals in array, < 11 and > 0:  ");
	int arr[10], n;
	scanf("%i", &n);
	if((n<10)&&(n>0)) {
		for(int i = 0; i<n; i++) {
			scanf("%i", &arr[i]);
	}
	for(int i = 0; i<n; i++) {
			printf("%3i  ", arr[i]);
	}
	} else {
		printf("wrong number");
	}
}
