#include <stdio.h>

int main() {
    int n;

    // Y�u c?u ngu?i d�ng nh?p s? nguy�n
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);

    printf("Cac uoc cua so %d la: ", n);

    // T�m t?t c? c�c u?c c?a s? n
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n"); // Xu?ng d�ng sau khi in c�c u?c
    return 0;
}

