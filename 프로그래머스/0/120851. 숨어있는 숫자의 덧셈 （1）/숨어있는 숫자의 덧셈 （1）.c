#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* my_string) {
    int answer = 0;
    int length = strlen(my_string);
    for(int i = 0; i < length; i++) {
        char c = my_string[i];
        if(c >= '1' && c <= '9') {
            int num = c - '0'; // 숫자 문자를 숫자 값으로 변환
            answer += num;
        }
    }
    return answer;
}
