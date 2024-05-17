#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int age) {
    char* answer = (char*)calloc(4, sizeof(char));
    char strAge[4] = "";
    sprintf(strAge, "%d", age);
    
    for(int i=0; ;i++){
        char c = strAge[i];
        if(c == 0) break;
        answer[i] = c - '0'+'a';
    }
    return answer;
}