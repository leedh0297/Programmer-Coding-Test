class Solution {
    public int solution(int num, int k) {
        String numStr = String.valueOf(num);  // 숫자를 문자열로 변환
        String kStr = String.valueOf(k);      // 비교 대상도 문자열로 변환

        for (int i = 0; i < numStr.length(); i++) {
            if (numStr.charAt(i) == kStr.charAt(0)) {
                return i + 1;  // 위치는 1부터 시작
            }
        }

        return -1;  // 없으면 -1 반환
    }
}
