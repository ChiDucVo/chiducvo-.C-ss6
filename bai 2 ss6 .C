#include <stdio.h>

int main() {
    int numbers[5]; // M?ng d? luu 5 s? nguyên
    int evenCount = 0; // Bi?n d?m s? lu?ng s? ch?n
    int oddCount = 0;  // Bi?n d?m s? lu?ng s? l?

    // Yêu c?u ngu?i dùng nh?p 5 s? nguyên
    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Ð?m s? lu?ng s? ch?n và s? l?
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++; // N?u là s? ch?n, tang bi?n d?m s? ch?n
        } else {
            oddCount++;  // N?u là s? l?, tang bi?n d?m s? l?
        }
    }

    // In k?t qu?
    printf("So luong so chan: %d\n", evenCount);
    printf("So luong so le: %d\n", oddCount);

    return 0;
}

