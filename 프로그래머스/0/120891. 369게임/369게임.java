class Solution {
    public int solution(int order) {
        int answer = 0;
        String orderStr = String.valueOf(order);  // order를 문자열로 변환
        
        for(int i = 0; i < orderStr.length(); i++) {
            int digit = Character.getNumericValue(orderStr.charAt(i));  // 각 자리 숫자를 정수로 변환
            if(digit % 3 == 0 && digit != 0) {
                answer++;
            }
        }
        
        return answer;
    }
}
