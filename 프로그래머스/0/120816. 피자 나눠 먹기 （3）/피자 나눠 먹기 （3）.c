#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int answer = 0;
    for(int i=1; i>0; i++){
        if((slice*i)/n>=1){
            answer=i;
            break;
        }
    }
    return answer;
}