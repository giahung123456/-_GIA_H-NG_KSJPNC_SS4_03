#include <stdio.h>
int main() {
    int a;
    printf("so: ");
    scanf("%d", &a);
    if (a % 3 == 0 && a % 5 == 0) {
        printf("So %d chia het cho ca 3 va 5.\n", a);
    } else if (a % 3 == 0) {
        printf("So %d chia het cho 3.\n", a);
    } else if (a % 5 == 0) {
        printf("So %d chia het cho 5.\n", a);
    } else {
        printf("So %d khong chia het cho 3, 5 hoac ca 3 v� 5.\n", a);
    }

    return 0;
}