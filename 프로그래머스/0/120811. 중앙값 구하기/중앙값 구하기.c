#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    qsort(array, array_len, sizeof(int), compare);
    if (array_len % 2 == 1) { // 배열의 길이가 홀수인 경우
        return (double)array[array_len/2];
    } else { // 배열의 길이가 짝수인 경우
        return (double)(array[array_len/2-1] + array[array_len/2])/2;
    }
    return answer;
}