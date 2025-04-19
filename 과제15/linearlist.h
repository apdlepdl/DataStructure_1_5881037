#ifndef LINEARLIST_H
#define LINEARLIST_H

#define CAPACITY 100

typedef struct tel {
    char name[20];
    char num[20];
} Tel;

extern Tel directory[CAPACITY];
extern int n;

void add(char* name, char* num);
int search(char* name);
void del(char* name);
void print_all();

#endif
