#include <stdio.h>

int main() {
    int numbers[5]; // M?ng d? luu 5 s? nguy�n
    int evenCount = 0; // Bi?n d?m s? lu?ng s? ch?n
    int oddCount = 0;  // Bi?n d?m s? lu?ng s? l?

    // Y�u c?u ngu?i d�ng nh?p 5 s? nguy�n
    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // �?m s? lu?ng s? ch?n v� s? l?
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++; // N?u l� s? ch?n, tang bi?n d?m s? ch?n
        } else {
            oddCount++;  // N?u l� s? l?, tang bi?n d?m s? l?
        }
    }

    // In k?t qu?
    printf("So luong so chan: %d\n", evenCount);
    printf("So luong so le: %d\n", oddCount);

    return 0;
}

