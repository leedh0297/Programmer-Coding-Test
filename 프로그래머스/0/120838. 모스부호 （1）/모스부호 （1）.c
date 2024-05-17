#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 모스부호를 영어 소문자로 변환하는 함수
char morseToChar(const char* morseCode) {
    const char* morse[] = { 
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
        "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
        "..-", "...-", ".--", "-..-", "-.--", "--.."
    };
    for (int i = 0; i < 26; i++) {
        if (strcmp(morseCode, morse[i]) == 0) {
            return 'a' + i;
        }
    }
    return '?'; // 모스부호가 일치하지 않는 경우 '?' 반환
}

char* solution(const char* letter) {
    // letter의 길이를 계산하고 결과 문자열을 저장할 충분한 크기의 메모리 할당
    int length = strlen(letter);
    char* answer = (char*)malloc(length + 1); // +1 for null terminator
    if (!answer) return NULL; // 메모리 할당 실패 시 NULL 반환
    
    int answerIdx = 0; // answer 인덱스
    char morseCode[5]; // 한 글자의 모스부호를 저장할 임시 배열
    int morseCodeIdx = 0; // morseCode 인덱스
    
    for (int i = 0; i < length; i++) {
        if (letter[i] != ' ') { // 공백이 아니면 morseCode에 추가
            morseCode[morseCodeIdx++] = letter[i];
        } else {
            morseCode[morseCodeIdx] = '\0'; // null terminator 추가
            char decodedChar = morseToChar(morseCode); // 모스부호를 문자로 변환
            answer[answerIdx++] = decodedChar; // 변환된 문자를 answer에 추가
            morseCodeIdx = 0; // morseCode 인덱스 초기화
        }
    }
    
    // 마지막 모스부호 처리
    if (morseCodeIdx > 0) {
        morseCode[morseCodeIdx] = '\0'; // null terminator 추가
        char decodedChar = morseToChar(morseCode); // 모스부호를 문자로 변환
        answer[answerIdx++] = decodedChar; // 변환된 문자를 answer에 추가
    }
    
    answer[answerIdx] = '\0'; // 문자열 끝에 null terminator 추가
    return answer;
}
