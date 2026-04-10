#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // 2D Array도 행 우선으로 저장됨

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%p\n", (void*)&arr[i][j]);
            // &arr[i][j]의 타입은 int*
        }
    }
    printf("\n");
    
    return 0;
}