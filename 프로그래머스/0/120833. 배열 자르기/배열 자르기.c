#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    int range = num2 - num1 + 1;
    int* answer = (int*)malloc(range * sizeof(int));
    for (int i = 0; i < range; i++) {
        answer[i] = numbers[num1 + i];
    }
    return answer;
}

