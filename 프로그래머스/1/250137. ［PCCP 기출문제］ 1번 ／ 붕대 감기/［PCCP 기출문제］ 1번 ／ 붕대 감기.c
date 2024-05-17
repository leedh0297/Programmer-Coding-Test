#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// bandage_len은 배열 bandage의 길이입니다.
// attacks_rows는 2차원 배열 attacks의 행 길이, attacks_cols는 2차원 배열 attacks의 열 길이입니다.
int solution(int bandage[], size_t bandage_len, int health, int** attacks, size_t attacks_rows, size_t attacks_cols) {
    int cur_health = health;
    int cur_time = 0;
    int cur_bandage_time = 0;
    int attack_index = 0;

    while(true) {
        // 만약 체력이 0 이하가 되면 캐릭터가 죽음
        if (cur_health <= 0) {
            return -1;
        }

        // 만약 현재 시간이 몬스터의 공격 시간과 같다면 체력 감소
        if (attack_index < attacks_rows && cur_time == attacks[attack_index][0]) {
            cur_health -= attacks[attack_index][1];
            cur_bandage_time = 0;
            attack_index++;
        } else {
            // 붕대 감기를 시전할 수 있는 경우
            if (cur_bandage_time < bandage[0]) {
                cur_health += bandage[1];
                if (cur_health > health) {
                    cur_health = health;
                }
                cur_bandage_time++;

                // 붕대 감기를 시전 시간만큼 성공하면 추가 회복
                if (cur_bandage_time == bandage[0]) {
                    cur_health += bandage[2];
                    if (cur_health > health) {
                        cur_health = health;
                    }
                    cur_bandage_time = 0;
                }
            }
        }
        cur_time++;

        // 모든 몬스터의 공격이 끝났고, 캐릭터의 체력이 0보다 큰 경우
        if (attack_index == attacks_rows && cur_health > 0) {
            break;
        }
    }

    return cur_health;
}
