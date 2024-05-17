#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(1);
    int even_count=0; //짝수
    int odd_count=0; //홀수    
    for(int i=0;i<num_list_len;i++){
        if(num_list[i]%2==0){
            even_count++;
        }else{odd_count++;}
    }
    answer[0]=even_count;
    answer[1]=odd_count;
    
    return answer;
}