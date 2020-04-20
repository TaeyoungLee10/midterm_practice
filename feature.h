//feature.h
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char name[20];
	int score;
}SCORE;

int add_score();
int read_score(SCORE p);
int list_score(SCORE p[], int count);
int update_score();
