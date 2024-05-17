import java.util.Arrays;

public class Solution {

    public static int solution(int[] array) {
        if (array.length == 0) {
            return -1; // 배열이 비어있는 경우 -1 반환
        }

        Arrays.sort(array);
        
        int maxCount = 0; // 최빈값의 등장 횟수
        int modeValue = 0; // 최빈값
        int count = 1; // 현재 값의 등장 횟수
        
        for (int i = 1; i < array.length; i++) {
            if (array[i] == array[i - 1]) {
                count++;
            } else {
                if (count > maxCount) {
                    maxCount = count;
                    modeValue = array[i - 1];
                } else if (count == maxCount) {
                    modeValue = -1;
                }
                count = 1; // 등장 횟수 초기화
            }
        }
        
        // 마지막 값 처리
        if (count > maxCount) {
            modeValue = array[array.length - 1];
        } else if (count == maxCount) {
            modeValue = -1;
        }
        
        return modeValue;
    }
}
