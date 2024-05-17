import java.util.HashSet; // HashSet을 사용하기 위한 import 구문

public class Solution {
    public String solution(String my_string) {
        // 문자열을 구성할 때 사용할 StringBuilder 선언
        StringBuilder answer = new StringBuilder();
        // 이미 나타난 문자를 추적하기 위한 HashSet 선언
        HashSet<Character> seen = new HashSet<>();
        
        // 입력 문자열을 순회하면서 각 문자를 검사
        for (int i = 0; i < my_string.length(); i++) {
            char c = my_string.charAt(i); // 현재 인덱스의 문자를 가져옴
            // 해당 문자가 HashSet에 존재하지 않는 경우 (즉, 중복되지 않는 경우)
            if (!seen.contains(c)) {
                seen.add(c); // HashSet에 문자를 추가해 중복 추적
                answer.append(c); // StringBuilder에 문자를 추가해 결과 문자열 구성
            }
        }
        
        // StringBuilder를 문자열로 변환하여 최종 결과 반환
        return answer.toString();
    }
}
