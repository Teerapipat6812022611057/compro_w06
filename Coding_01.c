#include <stdio.h>

int main() {
    int a = 5, b = 17;
    float c = 8.5, d = 4.0;

    // 1. แสดงค่าที่กำหนดไว้ทั้งหมด
    printf("a = %d, b = %d, c = %.1f, d = %.1f\n", a, b, c, d); 

    // 2. ผลการคำนวณของ a + d
    printf("a + d = %.1f\n", a + d);

    // 3. ผลการคำนวณของ a - b
    printf("a - b = %d\n", a - b);

    // 4. ผลการคำนวณของ a * c
    printf("a * c = %.2f\n", a * c);

    // 5. ผลการคำนวณของ a * d
    printf("a * d = %.2f\n", a * d);

    // 6. ผลการคำนวณของ c / d
    printf("c / d = %.2f\n", c / d);

    // 7. ผลการคำนวณของ b / c
    printf("b / c = %.2f\n", b / c);

    // 8. ผลการคำนวณของ a % b (ใช้ได้ เพราะเป็น int)
    printf("a %% b = %d\n", a % b);

    // 9. ผลการคำนวณของ c % a → ต้องแปลง c เป็น int ก่อน
    printf("(int)c %% a = %d\n", ((int)c) % a);

    // 10. ผลการคำนวณของ c % d → ต้องแปลงทั้ง c และ d เป็น int ก่อน
    printf("(int)c %% (int)d = %d\n", ((int)c) % ((int)d));

    return 0;
}