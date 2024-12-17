#include <stdio.h>
#include <string.h> // Thu vi?n h? tr? x? lý chu?i

int main() {
    char password[] = "12345"; // M?t kh?u du?c khai báo s?n
    char input[50];           // Bi?n luu m?t kh?u ngu?i dùng nh?p vào

    // Yêu c?u ngu?i dùng nh?p m?t kh?u
    printf("Nhap vao mat khau: ");
    scanf("%s", input);

    // Ki?m tra m?t kh?u
    if (strcmp(password, input) == 0) { // So sánh m?t kh?u v?i input
        printf("Mat khau dung!\n");
    } else {
        printf("Mat khau sai!\n");
    }

    return 0;
}

