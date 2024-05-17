#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int answer = 0;
    int min = 100;
    for(int i=0; i<array_len; i++){
        int gap = array[i] - n;
        if(gap < 0) gap *= -1;
        if(gap == min){
            if(answer > array[i]){
                answer = array[i];
            }
        }else if(gap < min){
            min = gap;
            answer = array[i];
        }
    }
    
    return answer;
}