#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_TERMS 100

typedef struct {
    int coef;
    int exp;
} Term;

typedef struct {
    Term terms[MAX_TERMS];
    int size;
} Polynomial;

void inputPolynomial(Polynomial* p) {
    char buffer[100];
    fgets(buffer, sizeof(buffer), stdin);

    buffer[strcspn(buffer, "\n")] = 0;

    char* token = strtok(buffer, "+");
    p->size = 0;

    while (token != NULL) {
        int coef = 0, exp = 0;

        if (strchr(token, 'x') || strchr(token, 'X')) {
            if (sscanf(token, "%dx^%d", &coef, &exp) == 2) {
            }
            else if (sscanf(token, "%dx", &coef) == 1) {
                exp = 1;
            }
        }
        else {
            sscanf(token, "%d", &coef);
            exp = 0;
        }

        p->terms[p->size].coef = coef;
        p->terms[p->size].exp = exp;
        p->size++;
        token = strtok(NULL, "+");
    }
}

Polynomial multiplyPolynomials(const Polynomial* a, const Polynomial* b) {
    Polynomial result = { .size = 0 };
    int i, j;

    for (i = 0; i < a->size; i++) {
        for (j = 0; j < b->size; j++) {
            int coef = a->terms[i].coef * b->terms[j].coef;
            int exp = a->terms[i].exp + b->terms[j].exp;

            int found = 0;
            for (int k = 0; k < result.size; k++) {
                if (result.terms[k].exp == exp) {
                    result.terms[k].coef += coef;
                    found = 1;
                    break;
                }
            }
            if (!found) {
                result.terms[result.size].coef = coef;
                result.terms[result.size].exp = exp;
                result.size++;
            }
        }
    }
    return result;
}

void printPolynomial(const Polynomial* p) {
    printf("List: size = 10, last = %d, move = 0\n", p->size - 1);
    printf("Items: P(x) = ");
    for (int i = 0; i < p->size; i++) {
        printf("%dX^%d", p->terms[i].coef, p->terms[i].exp);
        if (i != p->size - 1) printf("+");
    }
    printf("\n");
}

int main() {
    Polynomial p1, p2, result;

    printf("첫 번째 다항식을 입력하세요 (예: 3x^2+4x+1):\n");
    inputPolynomial(&p1);

    printf("두 번째 다항식을 입력하세요 (예: 2x^2+5x+3):\n");
    inputPolynomial(&p2);

    result = multiplyPolynomials(&p1, &p2);

    printf("[곱셈 결과]\n");
    printPolynomial(&result);

    return 0;
}
