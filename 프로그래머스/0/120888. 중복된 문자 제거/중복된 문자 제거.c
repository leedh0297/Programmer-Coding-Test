#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> // strlen 함수를 사용하기 위해 string.h 헤더 파일을 포함시킴

// 문자열 str 내에 특정 문자 c가 이미 존재하는지 확인하는 함수
// maxIndex는 검사할 문자열의 최대 길이를 의미
bool isDuplicate(char* str, char c, int maxIndex) {
    // 문자열 str을 처음부터 maxIndex까지 순회하며 문자 c를 찾음
    for (int i = 0; i < maxIndex; i++) {
        // 만약 문자 c가 발견되면 true를 반환
        if (str[i] == c) {
            return true;
        }
    }
    // 문자열 전체를 검사했음에도 문자 c가 발견되지 않았다면 false를 반환
    return false;
}

// 주어진 문자열 my_string에서 중복 문자를 제거한 새로운 문자열을 반환하는 함수
char* solution(const char* my_string) {
    int length = strlen(my_string); // my_string의 길이를 계산
    // 결과 문자열을 저장할 공간을 할당. 널 문자('\0')를 포함하기 위해 length + 1 크기로 메모리를 할당
    char* answer = (char*)malloc((length + 1) * sizeof(char));
    int answerIndex = 0; // answer 문자열에 사용될 인덱스
    
    // 주어진 문자열 my_string을 처음부터 끝까지 순회
    for (int i = 0; i < length; i++) {
        char c = my_string[i]; // 현재 순회 중인 문자
        // isDuplicate 함수를 사용하여 answer 문자열 내에 현재 문자 c가 이미 존재하는지 확인
        // answerIndex는 현재까지 채워진 answer 문자열의 길이를 의미
        if (!isDuplicate(answer, c, answerIndex)) {
            // 중복되지 않은 문자라면 answer 문자열에 추가하고 answerIndex를 1 증가
            answer[answerIndex++] = c;
        }
    }
    
    answer[answerIndex] = '\0'; // 문자열의 끝을 나타내는 널 문자를 추가
    
    return answer; // 중복이 제거된 새로운 문자열을 반환
}
