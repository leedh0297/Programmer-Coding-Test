#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

double factorial(int num){
    double result = 1;
    for (int i = 1; i <= num; ++i){
        result = result * i;
    }
    return result;
}

int solution(int balls, int share) {
    int answer = 0;
    double balls_fact = factorial(balls);
    double share_fact = factorial(share);
    double balls_share_fact = factorial(balls - share);
    answer = round(balls_fact / (balls_share_fact * share_fact));
    return answer;
}
