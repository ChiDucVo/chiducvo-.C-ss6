#include <stdio.h>

int main() {
    int numbers[5]; // M?ng d? luu 5 s? nguy�n
    int sumOdd = 0; // Bi?n luu t?ng c�c s? l?

    // Y�u c?u ngu?i d�ng nh?p 5 s? nguy�n
    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // T�nh t?ng c�c s? l?
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) { // Ki?m tra n?u l� s? l?
            sumOdd += numbers[i];
        }
    }

    // In ra t?ng c�c s? l?
    printf("Tong cac so le la: %d\n", sumOdd);

    return 0;
}

