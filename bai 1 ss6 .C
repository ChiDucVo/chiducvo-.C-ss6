#include <stdio.h>

int main() {
    int numbers[5]; // M?ng d? luu 5 s? nguyên
    int sumOdd = 0; // Bi?n luu t?ng các s? l?

    // Yêu c?u ngu?i dùng nh?p 5 s? nguyên
    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Tính t?ng các s? l?
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) { // Ki?m tra n?u là s? l?
            sumOdd += numbers[i];
        }
    }

    // In ra t?ng các s? l?
    printf("Tong cac so le la: %d\n", sumOdd);

    return 0;
}

