#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    int l = strlen(s);
    char *str = (char*)calloc(l+1,sizeof(char));
    strcpy(str, s);
    char *ptr = strtok(s, " ");
    int num = 0;
    
    while(ptr) {
        if(ptr[0] == 'Z'){
            answer -= num;
        }else{
            num = atoi(ptr);
            answer += num;
        }
        
        ptr = strtok(NULL, " ");
    }
    
    return answer;
}