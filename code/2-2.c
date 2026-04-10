#include <stdio.h>

int sum_2d_arr(int (*row)[3], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < sizeof(*row)/sizeof(int); j++) {
            sum += *(*row + j);
            /*
            row는 int[3]을 가리키는 포인터
            역참조를 한 번 하면 int[3]이 나올 것
            *row + j, 이러면 int[3]은 int*로 decay
            해당 행의 j번째 원소의 주소에 접근
            역참조를 한 번 더 해서 int형 원소를 꺼냄 
            */
        }
        row++;
        // 포인터의 증감연산은 포인터가 가리키는 자료형의 크기만큼
    }
    return sum;
}

int main() {
    int arr[2][3] = {1, 2, 3, 4, 5, 6};

    printf("%d\n", sum_2d_arr(arr, 2));
    // arr은 &arr[0]으로 decay
}