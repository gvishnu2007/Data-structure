#include <stdio.h>

int main() {

int arr[100], n, i, key, found = 0;

// Input array size

printf("Enter the number of elements: "); scanf("%d", &n);

// Input array elements

printf("Enter %d elements: \n", n); for(i=0; i < n; i++) { scanf("%d", &arr[i]); }

// Input the number to search

printf("Enter the number to search: "); scanf("%d", &key);
// Linear Search

for(i=0; i < n; i++) {

if(arr[i] == key) {

printf("Element %d found at position %d\n", key, i + 1);

found = 1;

break;

}

}

if(!found) {

printf("Element %d not found in the array.\n", key);

}

return 0;

}
