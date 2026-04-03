#include <stdio.h>

void findCubes(int *ptr, int a) {
    int totalElements = a * a;
    
    for (int i = 0; i < totalElements; i++) {
        *(ptr + i) = (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i));
    }
}

int main() {
    int a;
    printf("Enter array's size: ");
    scanf("%d", &a);

    int arr[a][a];

    printf("\nEnter array elements:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    findCubes(&arr[0][0], a);

    printf("Cubes of all elements:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}