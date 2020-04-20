//CRUD function
//main.c
#include <stdio.h>

typedef struct{
	char name[20];
	int score;
}SCORE;

int select_menu(){
	int menu;
	printf("\n===SCORE MANAGER===\n\n");
	printf("1. read\n");
	printf("2. create\n");
	printf("3. update\n");
	printf("4. delete\n\n");
	printf("=> Select menu: ");
	scanf("%d", &menu);
	return menu;
}

int main(void){
	SCORE* slist[100];
	int menu, count=0, curcount=0;
	while(1){
		menu= select_menu();
		if(menu==0) break;
		else if(menu==1){
		}
		else if(menu==2){
		}
		else if(menu==3){
		}
		else if(menu==4){
		}


	}
	printf("=> program ended\n");
	return 0;

}
