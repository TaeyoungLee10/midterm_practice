//feature.h
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char name[20];
	int score;
}SCORE;

int add_score(SCORE* p);
int read_score(SCORE p);
int list_score(SCORE p[], int count);
int update_score(SCORE* p);
