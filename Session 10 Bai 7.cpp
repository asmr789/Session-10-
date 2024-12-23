#include <stdio.h>
#define MAX_ROW 100
#define MAX_COL 100

int main() {
    int n, m; // n so hang  m so cot
    int arr[MAX_ROW][MAX_COL];
    printf("Nhap so hang array: ");
    scanf("%d", &n);
    printf("Nhap so cot array: ");
    scanf("%d", &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap array[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m - 1; j++) {
            for (int k = 0; k < m - j - 1; k++) {
                if (arr[i][k] > arr[i][k + 1]) {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }
    printf("Ma tran sau khi sap xep :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}