#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(const char* s) {
    int stack_size = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            stack_size++;
        } else {
            if (stack_size == 0) {
                return false;
            }
            stack_size--;
        }
    }
    return stack_size == 0;
}