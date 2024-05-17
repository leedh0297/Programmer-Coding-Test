import java.util.HashMap;

class Solution {
    public int[] solution(String s) {
        // 결과를 저장할 배열, s의 길이와 동일하게 초기화
        int[] answer = new int[s.length()];
        // 각 문자가 마지막으로 나타난 위치를 저장할 HashMap
        HashMap<Character, Integer> lastPos = new HashMap<>();
        
        for (int i = 0; i < s.length(); i++) {
            char currentChar = s.charAt(i);
            // 만약 현재 문자가 이전에 나타난 적 있다면
            if (lastPos.containsKey(currentChar)) {
                // 현재 위치에서 마지막으로 나타난 위치를 빼서 그 차이를 저장
                answer[i] = i - lastPos.get(currentChar);
            } else {
                // 처음 나타난 문자라면 -1 저장
                answer[i] = -1;
            }
            // 현재 문자의 위치를 업데이트
            lastPos.put(currentChar, i);
        }
        
        return answer;
    }
}
