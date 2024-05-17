#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int n=0;
    int answer = 0;
    if(sides[0]>sides[1]){
        n=sides[1];
        sides[1]=sides[0];
        sides[0]=n;
    }
    if(sides[0]>sides[2]){
        n=sides[2];
        sides[2]=sides[0];
        sides[0]=n;
    }
    if(sides[1]>sides[2]){
        n=sides[2];
        sides[2]=sides[1];
        sides[1]=n;
    }
    
    if(sides[0]+sides[1]>sides[2]){
        answer=1;
    }else{answer=2;}
    return answer;
}