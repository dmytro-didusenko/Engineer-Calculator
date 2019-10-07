#include "engineercalc.h"

int main(int argc, char *argv[]){
	
	int choice;
	
	while(1){
		
		mainMenuList(); //procedure displays the menu with programm options
		
		printf("Please, make your choice\n");
		scanf("%i", &choice);
		
		switch(choice){                        //providing a choice between program options
			case 1: metalWeightCalc(); break;             //program transition to metal mass calculation
			case 2: metalLengthCalc(); break;             //program transition to metal length calculation
			case 3: gearsCalc(); break;                   //program transition to gear calculation
			default: printf("Wrong input. Try again\n");  //using default choice value
		}
		
		printf("\nPress any key to continue or \"Esc\" button to exit \n");
	
		int exitCode = getch();    //program continuation or
		if(exitCode == 27) break;  //termination condition
		
		system("cls"); //console cleaning
	}
	return 0;
}


