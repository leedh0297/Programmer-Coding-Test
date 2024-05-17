#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int result = 1;
    for (answer = 1; ; ++answer) {
        result = result * answer;
        if (result > n) {
            break;
            answer;
        }
    }
    return answer-1;
}
