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
    printf("�̸�: %s, �й�: %d, ����: %d\n", s->name, s->id, s->score);
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

    printf("����� �л� ������ �Է��Ͻó���? ");
    scanf("%d", &numStudents);

    Student* students = (Student*)malloc(numStudents * sizeof(Student));
    if (students == NULL) {
        printf("�޸� �Ҵ� ����\n");
        return 1;
    }

    for (int i = 0; i < numStudents; i++) {
        printf("[%d] �л��� ������ �Է��ϼ��� (�̸� �й� ����) \n", i + 1);
        inputStudent(&students[i]);
    }

    int searchId;
    Student* foundStudent;

    do {
        printf("�й��� �Է��ϼ���(0�̸� ����) ");
        scanf("%d", &searchId);

        if (searchId == 0) {
            break;
        }

        foundStudent = searchStudent(students, numStudents, searchId);

        if (foundStudent != NULL) {
            printf("�л� ����: ");
            printStudent(foundStudent);
        }
        else {
            printf("�ش� �й��� �л��� �����ϴ�. \n");
        }
    } while (1);

    free(students);

    return 0;
}