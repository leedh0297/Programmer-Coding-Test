#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, const char* letter) {
    // 원본 문자열의 길이를 구합니다.
    int len = strlen(my_string);
    
    // 제거된 문자를 제외한 문자열을 저장할 동적 할당 배열을 생성합니다.
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    int index = 0;
    
    // 원본 문자열을 탐색하면서 특정 문자를 제외하고 answer 배열에 복사합니다.
    for (int i = 0; i < len; i++) {
        // 특정 문자를 제외한 경우에만 answer 배열에 추가합니다.
        if (my_string[i] != letter[0]) {
            answer[index] = my_string[i];
            index++;
        }
    }
    
    // 문자열의 끝을 표시하는 널 문자를 추가합니다.
    answer[index] = '\0';
    
    return answer;
}