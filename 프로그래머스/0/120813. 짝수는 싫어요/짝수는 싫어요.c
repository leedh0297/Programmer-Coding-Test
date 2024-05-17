#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int count=0;
    for(int i = 0; i<= n; i++){
        if(i%2==0){
            count++;
        }
    }
    int* answer = (int*)malloc(count * sizeof(int));
    int j=0;
    for(int i = 0; i<= n; i++){
        if(i%2!=0){
            answer[j]=i;
            j++;
        }
    }
    
    return answer;
}