#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

long long solution(const char* numbers) {
    long long answer = 0;
    char *strA = (char*)calloc(50 + 1, sizeof(char));
    char *alphanum[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int countA = 0;
    
    for (int i = 0; numbers[i] != '\0'; ) {
        for (int j = 0; j < 10; j++) {
            int len = strlen(alphanum[j]);
            if (strncmp(alphanum[j], &numbers[i], len) == 0) {
                strA[countA++] = j + '0';
                i += len;
                break;
            }
        }
    }
    
    answer = atoll(strA);
    
    return answer;
}