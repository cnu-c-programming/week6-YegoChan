#include <stdio.h>

void print_2d_arr(int* element, int row_size, int col_size) {
    for (int i = 0; i < row_size; i++) {
        for (int j = 0; j < col_size; j++) {
            printf("%d ", element[i*col_size + j]);
            // 배열은 메모리에서 딱 붙은 일렬로 나열되니까, 이런 식의 접근이 가능
        }
        printf("\n");
    }
}

int main() {
    int arr[2][3] = {1, 2, 3, 4, 5, 6};

    print_2d_arr(&arr[0][0], 2, 3);
    // arr[0][0], 0행 0열 원소의 주소 전달
}