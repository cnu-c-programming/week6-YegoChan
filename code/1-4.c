#include <stdio.h>

int main() {
    int arr3[2][3][4] = {0};
    // int arr3[2][3][4] = {1}; 로 선언하면 마지막 출력은 1이 될 것

    int (*p)[3][4] = arr3;

    printf("%zu\n", sizeof(p));    // int (*)[3][4]
    printf("%zu\n", sizeof(*p));   // int[3][4]
    printf("%zu\n", sizeof(**p));  // int[4]
    printf("%zu\n", sizeof(***p)); // int

    printf("%p\n", (void*)p);   // int(*)[3][4], 근데 그게 &arr3[0]
    printf("%p\n", (void*)*p);  // int(*)[4], 근데 그게 &arr3[0][0]
    printf("%p\n", (void*)**p); // int(*), 근데 그게 &arr3[0][0][0]
                                // 주소가 같다고 타입이 같진 않더라
    printf("%d\n", ***p);
}


