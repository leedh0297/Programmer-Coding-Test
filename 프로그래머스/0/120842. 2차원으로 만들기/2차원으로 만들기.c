#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int** solution(int num_list[], size_t num_list_len, int n) {
    int row = num_list_len/n;
    int** answer = (int**)calloc(row, sizeof(int *));
    
    for(int i=0; i<row; i++){
        answer[i] = (int*)calloc(n, sizeof(int));
        for(int j=0; j<n; j++){
            answer[i][j] = num_list[(i*n)+j];
            }
    }
    
    return answer;
}