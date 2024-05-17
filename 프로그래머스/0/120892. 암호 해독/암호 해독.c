#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* cipher, int code) {
    int length = strlen(cipher);
    char* answer = (char*)calloc(length / code + 1, sizeof(char));

    int answer_index = 0;
    for (int i = code - 1; i < length; i += code) {
        answer[answer_index++] = cipher[i];
    }

    return answer;
}