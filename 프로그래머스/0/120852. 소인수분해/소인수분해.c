#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int isHSS(int *list, int len, int num){
    //합성수면 1리턴, 아니면 0리턴
    for(int i=0; i<len; i++){
        if(num % list[i] == 0)return 1;
    }
    return 0;
}

int* solution(int n) {
    int* answer = (int*)calloc(n, sizeof(int));
    //배열에 약수 넣기
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if(isHSS(answer, count, i))continue;
        if (n % i == 0) {
            answer[count++] = i;
        }
    }
    return answer;
}