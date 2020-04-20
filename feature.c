//feature.c
#include "feature.h" 

int add_score(SCORE* p){
	printf("Name: ");
	scanf("%s", p->name);
	printf("Score: ");
	scanf("%d", &p->score);
	printf("=> added!\n");
	return 1;
}

int read_score(SCORE p);
int list_score(SCORE p[], int count);
int update_score(){
	printf("Name: ");
	scanf("%s", p->name);
	printf("Score: ");
	scanf("%d", &p->score);
	printf("=> updated!\n");
	return 1;

}
