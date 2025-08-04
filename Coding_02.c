#include <stdio.h>

int main() {
    // w06-02-01
    int i = 1, j = 2, k;

    printf("w06-02-01:\n");

    printf("บรรทัดที่ 1: กำหนดค่าเริ่มต้น → i = %d, j = %d\n", i, j);

    k = i + j;
    printf("บรรทัดที่ 2: k = i + j = %d + %d = %d\n", i, j, k);

    i = i + (k * j);
    printf("บรรทัดที่ 3: i = i + (k * j) = %d + (%d * %d) = %d\n", i + (k * j), k, j, i);

    j = i / 2;
    printf("บรรทัดที่ 4: j = i / 2 = %d / 2 = %d\n", i, j);

    k = j % 2;
    printf("บรรทัดที่ 5: k = j %% 2 = %d %% 2 = %d\n", j, k);

    i = (j + k) * 3;
    printf("บรรทัดที่ 6: i = (j + k) * 3 = (%d + %d) * 3 = %d\n", j, k, i);

    printf("บรรทัดที่ 7: ผลลัพธ์สุดท้าย → i = %d, j = %d, k = %d\n\n", i, j, k);

    // w06-02-02
    double x = 1.0, y = 2.0, z;

    printf("w06-02-02:\n");

    printf("บรรทัดที่ 1: กำหนดค่าเริ่มต้น → x = %.1f, y = %.1f\n", x, y);

    x = y + 5.0;
    printf("บรรทัดที่ 2: x = y + 5.0 = %.1f + 5.0 = %.1f\n", y, x);

    y = x / 2.0;
    printf("บรรทัดที่ 3: y = x / 2.0 = %.1f / 2.0 = %.1f\n", x, y);

    z = (x * 3.0) + 4.0;
    printf("บรรทัดที่ 4: y = (x * 3.0) + 4.0 = (%.1f * 3.0) + 4.0 = %.1f\n", x, y);

    x = -0.5 * y;
    printf("บรรทัดที่ 5: x = -0.5 * y = -0.5 * %.1f = %.1f\n", y, x);

    z = x + y;
    printf("บรรทัดที่ 6: z = x + y = %.1f + %.1f = %.1f\n", x, y, z);

    printf("บรรทัดที่ 7: ผลลัพธ์สุดท้าย → x = %.1f, y = %.1f, z = %.1f\n", x, y, z);

    return 0;

}
