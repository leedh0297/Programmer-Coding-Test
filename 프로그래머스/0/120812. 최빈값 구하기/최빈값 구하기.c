#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    qsort(array, array_len, sizeof(int), compare);
    int max_count = 0; // 최빈값의 등장 횟수
    int mode_value = 0; // 최빈값
    int count = 1; // 현재 값
    int i;
    for (i = 1; i < array_len; i++) {
        if (array[i] == array[i-1]) {
            count++;
        } else {
            if (count > max_count) {
                max_count = count;
                mode_value = array[i-1];
            } else if (count == max_count) {
                mode_value = -1;
            }
            count = 1;
        }
    }
    
    if (count > max_count) {
        max_count = count;
        mode_value = array[array_len-1];
    } else if (count == max_count) {
        mode_value = -1;
    }
    return mode_value;
}
