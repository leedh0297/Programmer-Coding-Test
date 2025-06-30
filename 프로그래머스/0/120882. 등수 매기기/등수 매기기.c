#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct _std {
    double avg;
    int index;
} STD;

// 내림차순 정렬
int compare(const void *a, const void *b) {
    STD *x = (STD *)a;
    STD *y = (STD *)b;

    if (x->avg < y->avg) return 1;
    if (x->avg > y->avg) return -1;
    return 0;
}

int* solution(int** score, size_t score_rows, size_t score_cols) {
    int num = score_rows;
    int* answer = (int*)calloc(num, sizeof(int));
    STD* student = (STD*)calloc(num, sizeof(STD));

    // 평균 계산
    for (int i = 0; i < num; i++) {
        student[i].avg = (score[i][0] + score[i][1]) / 2.0;
        student[i].index = i;
    }

    // 평균 기준 내림차순 정렬
    qsort(student, num, sizeof(STD), compare);

    int rank = 1;

    for (int i = 0; i < num; i++) {
        if (i > 0 && student[i].avg == student[i - 1].avg) {
            // 이전 학생과 평균 같으면 같은 랭크
            answer[student[i].index] = answer[student[i - 1].index];
        } else {
            answer[student[i].index] = i + 1;  // 현재 등수는 (인덱스 + 1)
        }
    }

    free(student);
    return answer;
}
