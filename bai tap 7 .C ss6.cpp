#include <stdio.h>

int main() {
    int n;

    // Yêu c?u ngu?i dùng nh?p s? nguyên
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);

    printf("Cac uoc cua so %d la: ", n);

    // Tìm t?t c? các u?c c?a s? n
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n"); // Xu?ng dòng sau khi in các u?c
    return 0;
}

