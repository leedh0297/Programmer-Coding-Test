#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 소수 판별 함수
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// n 이하의 합성수 개수를 구하는 함수
int solution(int n) {
    int count = 0; // 합성수의 개수
    for (int i = 2; i <= n; i++) {
        if (!isPrime(i) && i != 1) { // 소수가 아니고 1이 아니면 합성수
            count++;
        }
    }
    return count;
}