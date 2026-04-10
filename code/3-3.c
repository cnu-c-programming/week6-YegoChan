#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // 깡으로 int* p1 = arr; 이라고 쓰면? arr은 &arr[0]으로 decay 일건데..
    int (*p1)[2][3] = &arr;         // 2D Array의 주소를 가리킴, 타입은 int(*)[2][3]
    int (*p2)[3]    = &arr[0];      // 1D Array의 주소를 가리킴, 타입은 int(*)[3]
    int*  p3        = &arr[0][0];   // 원소의 주소를 가리킴, 타입은 int*

    printf("%p\n", (void*)p1);
    printf("%p\n", (void*)p2);
    printf("%p\n", (void*)p3);
    printf("\n");
    printf("%lu\n", (unsigned long long)(p1 + 1) - (unsigned long long)(p1));
    printf("%lu\n", (unsigned long long)(p2 + 1) - (unsigned long long)(p2));
    printf("%lu\n", (unsigned long long)(p3 + 1) - (unsigned long long)(p3));

    return 0;
}

