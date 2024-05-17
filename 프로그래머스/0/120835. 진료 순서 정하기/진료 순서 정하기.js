function solution(emergency) {
    // Array.from을 사용하여 emergency 배열의 복사본을 생성합니다.
    // sort 함수를 사용하여 복사본 배열을 내림차순으로 정렬합니다.
    // 가장 큰 값이 배열의 첫 번째 요소가 되도록 합니다.
    const sortedEmergency = Array.from(emergency).sort((a, b) => b - a);
    
    // 원본 배열의 각 요소에 대해 map 함수를 사용합니다.
    // 이때, 현재 요소의 값이 정렬된 배열에서 어디에 위치하는지 찾습니다 (indexOf 사용).
    // indexOf는 요소의 위치를 0부터 시작하여 반환하므로, 순위를 위해 1을 더합니다.
    // 이 과정을 통해 각 요소의 순위를 나타내는 새 배열을 생성합니다.
    const rankEmergency = emergency.map(element => sortedEmergency.indexOf(element) + 1);
    
    // 각 요소의 순위가 매겨진 배열을 반환합니다.
    return rankEmergency;
}