#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* my_string) {
    int length = strlen(my_string);
    int count = 0;
    //배열의 크기 계산
    for (int i = 0; i < length; i++) {
        if (my_string[i] >= '1' && my_string[i] <= '9') {
            count++;
        }
    }
    
    int* answer = (int*)malloc(count * sizeof(int));
    int index = 0;
    //숫자만 배열에 할당
    for (int i = 0; i < length; i++) {
        if (my_string[i] >= '0' && my_string[i] <= '9') {
            answer[index++] = my_string[i] - '0';
        }
    }
    //배열정렬
    for (int i = 0; i < index; i++) {
        for (int j = 0; j < index - i - 1; j++) {
            if (answer[j] > answer[j + 1]) {
                // 인접한 두 요소를 비교하여 순서가 올바르지 않으면 교환
                int temp = answer[j];
                answer[j] = answer[j + 1];
                answer[j + 1] = temp;
            }
        }
    }
    
    return answer;
}