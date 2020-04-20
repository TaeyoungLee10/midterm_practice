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

void read_score(SCORE p){
	printf("%-5s %d\n", p.name, p.score);
}

int list_score(SCORE p[], int count){
	printf("No Name    Score\n");
	printf("=================\n");
	for(int i=0;i<count;i++){
	if(p[i]!=NULL)
	printf("%-2d ", i+1);
	readscore(*p[i]);
	}
}

int update_score(){
	printf("Name: ");
	scanf("%s", p->name);
	printf("Score: ");
	scanf("%d", &p->score);
	printf("=> updated!\n");
	return 1;

}
