#include<stdio.h>

int masu[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int player=0;

void masuf(void);

void main(void){
	int i=0;
	int put=0;
	int tate=0;
	int yoko=0;

	for(i=0;i<=9;i++){
		masuf();

		player=i%2+1;

		while(1){
			if(scanf("%d",&put)!=1){
				scanf("%*s");
				if(feof(stdin)){
				}
					continue;
			}
			if(put<10 || put>0){
				break;
			}
		}
	    yoko=(put-1)/3;
		tate=(put-1)%3;

		if(masu[yoko][tate]>'9'){
			printf("³‚µ‚­“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");

		}while(put<0 || put>9 || masu[yoko][tate]>'9');

		masu[yoko][tate]=(player==2)?'X':'O';

	}

	printf("\nŒ‹‰Ê\n");
	masuf();
}

	void masuf(void){
		printf("%2c|%2c|%2c\n",masu[0][0],masu[0][1],masu[0][2]);
		printf("-----------\n");
		printf("%2c|%2c|%2c\n",masu[1][0],masu[1][1],masu[1][2]);
		printf("-----------\n");
		printf("%2c|%2c|%2c\n",masu[2][0],masu[2][1],masu[2][2]);
	}