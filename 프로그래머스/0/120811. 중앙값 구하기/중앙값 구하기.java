class Solution {
    public int solution(int[] array) {
        int answer = 0;
        
        for(int i = 0; i < array.length - 1; i++){ //버블정렬을 사용하여 오름차순으로 정렬
            for(int j = 0; j < array.length - 1 - i; j++){
                if(array[j] > array[j + 1]){ //원소 위치 바꾸기
                    int num = array[j]; //원소를 비교하여 오름차순으로 정렬하기 위한 변수
                    array[j] = array[j + 1];
                    array[j + 1] = num;
                }
            }
        }
        return array[(array.length-1)/2]; //정렬된 배열의 중간값을 반환
    }
}