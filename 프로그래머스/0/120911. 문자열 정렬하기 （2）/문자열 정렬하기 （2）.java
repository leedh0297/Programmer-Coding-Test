class Solution {
    public String solution(String my_string) {
        // 1. 문자열을 모두 소문자로 변환
        my_string = my_string.toLowerCase();

        // 2. 문자 배열로 변환
        char[] chars = my_string.toCharArray();

        // 3. 정렬 (버블 정렬)
        for (int i = 0; i < chars.length - 1; i++) {
            for (int j = 0; j < chars.length - i - 1; j++) {
                if (chars[j] > chars[j + 1]) {
                    // swap
                    char temp = chars[j];
                    chars[j] = chars[j + 1];
                    chars[j + 1] = temp;
                }
            }
        }

        // 4. 정렬된 문자 배열을 문자열로 변환
        return new String(chars);
    }
}