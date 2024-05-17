#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int n) {
    int len = strlen(my_string);
    int new_len = len * n;
    char* answer = (char*)malloc((new_len + 1) * sizeof(char));
    int index = 0;

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < n; j++) {
            answer[index] = my_string[i];
            index++;
        }
    }

    answer[index] = '\0';
    return answer;
}