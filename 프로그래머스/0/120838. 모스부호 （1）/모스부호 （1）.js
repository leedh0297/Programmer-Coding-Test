function solution(letter) {
    const morse = { 
        '.-':'a','-...':'b','-.-.':'c','-..':'d','.':'e','..-.':'f',
        '--.':'g','....':'h','..':'i','.---':'j','-.-':'k','.-..':'l',
        '--':'m','-.':'n','---':'o','.--.':'p','--.-':'q','.-.':'r',
        '...':'s','-':'t','..-':'u','...-':'v','.--':'w','-..-':'x',
        '-.--':'y','--..':'z'
    };
    
    var answer = '';
    // 모스부호 문자열을 공백으로 나누어 배열로 변환
    const morseLetters = letter.split(' ');
    // 각 모스부호를 영어 소문자로 변환
    for (let morseLetter of morseLetters) {
        if (morse[morseLetter]) { // 해당 모스부호가 매핑된 영어 소문자가 있는 경우
            answer += morse[morseLetter];
        }
    }
    return answer;
}
