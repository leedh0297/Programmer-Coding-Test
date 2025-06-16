def solution(wallet, bill):
    answer = 0
    
    # 반복: 지폐가 지갑보다 클 동안 계속 접기
    while True:
        # 현재 지폐를 그대로 넣을 수 있는지
        if (bill[0] <= wallet[0] and bill[1] <= wallet[1]) or \
           (bill[1] <= wallet[0] and bill[0] <= wallet[1]):
            break

        # 더 긴 쪽을 반으로 접기
        if bill[0] >= bill[1]:
            bill[0] //= 2
        else:
            bill[1] //= 2
        
        #접은 횟수 추가
        answer += 1

    return answer