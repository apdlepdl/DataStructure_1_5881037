#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int id;
    int score;
} Student;

void inputStudent(Student* s) {
    scanf("%s %d %d", s->name, &s->id, &s->score);
}

void printStudent(Student* s) {
    printf("이름: %s, 학번: %d, 점수: %d\n", s->name, s->id, s->score);
}

Student* searchStudent(Student* students, int count, int id) {
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            return &students[i];
        }
    }
    return NULL;
}

int main() {
    int numStudents;

    printf("몇명의 학생 정보를 입력하시나요? ");
    scanf("%d", &numStudents);

    Student* students = (Student*)malloc(numStudents * sizeof(Student));
    if (students == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    for (int i = 0; i < numStudents; i++) {
        printf("[%d] 학생의 정보를 입력하세요 (이름 학번 점수) \n", i + 1);
        inputStudent(&students[i]);
    }

    int searchId;
    Student* foundStudent;

    do {
        printf("학번을 입력하세요(0이면 종료) ");
        scanf("%d", &searchId);

        if (searchId == 0) {
            break;
        }

        foundStudent = searchStudent(students, numStudents, searchId);

        if (foundStudent != NULL) {
            printf("학생 정보: ");
            printStudent(foundStudent);
        }
        else {
            printf("해당 학번의 학생이 없습니다. \n");
        }
    } while (1);

    free(students);

    return 0;
}