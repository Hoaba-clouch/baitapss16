#include <stdio.h>
#include <stdlib.h>
void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i)); 
    }
}

int main() {
    int my_array[] = {10, 20, 30, 40, 50};
    int size = sizeof(my_array) / sizeof(my_array[0]); 
    printf("Cac phan tu trong mang la:\n");

 
    print_array(my_array, size);

    return 0;
}
