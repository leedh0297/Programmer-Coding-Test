#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numer1, int denom1, int numer2, int denom2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)calloc(2, sizeof(int));
    int gcd;
    
    int den1 = denom1 * denom2;
    int num1 = denom1 * numer2 + denom2 * numer1;
    
    for(int i=1; i <= num1 && i <= den1; i++){
        if(num1 % i == 0 && den1 % i == 0){
            gcd = i;
        }
    }
    
    num1 = num1 / gcd;
    den1 = den1 / gcd;
    
    answer[0] = num1;
    answer[1] = den1;
    
    return answer;
}