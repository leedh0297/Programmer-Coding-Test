#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string) {
    size_t string_len = strlen(my_string);
    char* answer = (char*)malloc((string_len + 1) * sizeof(char));
    for (int i = 0; i < string_len; i++) {
        answer[i] = my_string[string_len - 1 - i];
    }
    answer[string_len] = '\0';
    return answer;
}
