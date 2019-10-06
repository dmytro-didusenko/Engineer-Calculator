#include "engineercalc.h"

int main(int argc, char *argv[]){
	int choice;
	while(1){
		mainMenuList();
		printf("Please, make your choice\n");
		scanf("%i", &choice);
		switch(choice){
			case 1: metalWeightCalc(); break;
			case 2: metalLengthCalc(); break;
			case 3: gearsCalc(); break;
			default: printf("Wrong input. Try again\n");
		}
		
		printf("\nPress any key to continue or \"Esc\" button to exit \n");
	
		int exitCode = getch();
		if(exitCode == 27) break;
		
		system("cls");
	}
	return 0;
}


