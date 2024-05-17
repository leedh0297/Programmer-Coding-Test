#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    int answer = 0;
    if(price<100000){
        answer=price;
    }else if(100000<=price&&price<300000){
        answer=price*0.95;
    }else if(300000<=price&&price<500000){
        answer=price*0.90;
    }else if(500000<=price){
        answer=price*0.80;
    }
    return answer;
}