#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;
    if(num1==num2){
        answer = 1;
        printf("%d", answer);
    }else{
        answer = -1;
        printf("%d", answer);
    }
    return answer;
    
}