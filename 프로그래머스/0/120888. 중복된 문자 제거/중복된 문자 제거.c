#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> // strlen 함수를 사용하기 위해 필요

// 주어진 문자가 str 문자열에 이미 존재하는지 확인하는 함수
bool isDuplicate(char* str, char c, int maxIndex) {
    for (int i = 0; i < maxIndex; i++) {
        if (str[i] == c) {
            return true;
        }
    }
    return false;
}

char* solution(const char* my_string) {
    int length = strlen(my_string);
    // 널 문자를 위한 추가 공간을 포함하여 메모리 할당
    char* answer = (char*)malloc((length + 1) * sizeof(char));
    int answerIndex = 0;
    
    for (int i = 0; i < length; i++) {
        char c = my_string[i];
        // isDuplicate 함수의 검사 범위를 answerIndex로 제한
        if (!isDuplicate(answer, c, answerIndex)) {
            answer[answerIndex++] = c;
        }
    }
    
    answer[answerIndex] = '\0'; // 문자열의 끝을 표시
    
    return answer;
}
