class Solution {
    public String solution(String my_string) {
        // 결과를 저장할 StringBuilder 객체 생성
        StringBuilder answer = new StringBuilder();
        
        // 입력된 문자열을 순회하며 모음이 아닌 문자만 StringBuilder에 추가
        for(int i = 0; i < my_string.length(); i++) {
            char ch = my_string.charAt(i);
            // 모음이 아닌 경우에만 answer에 추가
            if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
               ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
                answer.append(ch);
            }
        }
        
        // StringBuilder 객체를 문자열로 변환하여 반환
        return answer.toString();
    }
}
