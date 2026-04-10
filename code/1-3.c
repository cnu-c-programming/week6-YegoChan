#include <stdio.h>

int main() {
    char* names[5] = {"kim", "lee", "park", "choi", "jeong"};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; ; j++) {
            char c = *(*(names + i) + j);
            /*
            names를 식에 쓰면 decay
            names + i는 배열의 i번째 원소를 가리키는 포인터
            *(names + i)로 역참조, 배열의 원소를 꺼냄
            근데 꺼낸 원소는 char* 타입임
            char를 꺼내려면 한 번 더 참조해야 함
            *(names + i) + j는 문자열의 j번째 원소를 가리키는 포인터
            *(*(names + i) + j)로 역참조, 문자열의 원소를 꺼냄
            */ 
            if (c == '\0') {
                break;
            }
            printf("%c", c);
        }
        printf("\n");
    }
}