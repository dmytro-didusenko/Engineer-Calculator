#include "resource.h"
#include "pseudograph.h"

typedef struct{
	int id;
	char name[20];
	float value;
}Material;

float materialSelection(); 
float userInputControl();
int userInputEqualAngleControl(int assortment[], int arrSize);
int userInputChannelControl(int assortment[], int arrSize);
int userInputIBeanControl(int assortment[], int arrSize);
int userInputSquareSectionPipeControl(int assortment[], int arrSize);
int checkGear();
int checkModul();

float materialSelection(){
	Material mat;
	int choice;
	
	materialList();
	FILE* database_file;
	
	if ((database_file = fopen("mat_database.dat", "rb")) == NULL){
		printf("It is impossible to open file \n");
	}
	else{
		printf("Please, make your choice\n");
		scanf("%i", &choice);
	
		fseek(database_file, choice*sizeof(Material), SEEK_SET);
		fread(&mat.id, sizeof(int), 1, database_file);
		fread(mat.name, sizeof(char)*20, 1, database_file);
		fread(&mat.value, sizeof(float), 1, database_file);
	
		fclose(database_file);
		system("cls");
		return mat.value;	
	}
 }

float userInputControl(){
	while(1){
		char tempArray[10];
		int i, flag = 0, dotCounter = 0;
		scanf("%s", tempArray);
		for(i=0; i<strlen(tempArray); i++){
			if(tempArray[i] >= '0' && tempArray[i] <= '9' || tempArray[i] == '.'){
				flag++;
				if(tempArray[i] == '.'){
					dotCounter++;
				}				
			} 
		}
		if(flag == strlen(tempArray) && dotCounter <= 1) return atof(tempArray);
		printf("Wrong input. Try again\n");			
	}
}  

int userInputEqualAngleControl(int assortment[], int arrSize){
	while(1){
		char input[10];
		int i, flag = 0, num;
		printf("Height, mm: ");
		scanf("%s", input);
		for(i=0; i<strlen(input); i++){
			if(input[i] >= '0' && input[i] <= '9'){
				flag++;
			}				
		}
		if(flag == strlen(input)) num  = atoi(input);
		else{
			printf("Wrong input. Try again\n");
			continue;	
		}
		flag = 0;
		for(i=0; i<arrSize; i++){
			if(assortment[i] == num) return i;
			else flag++;
		}
		if(flag != 0){
			printf("Choose the rolled metal height using the following assortment\n");
			equalAngleMetalAssortment();
		}	
	} 
}

int userInputChannelControl(int assortment[], int arrSize){
	while(1){
		char input[10];
		int i, flag = 0, num;
		printf("Height, mm: ");
		scanf("%s", input);
		for(i=0; i<strlen(input); i++){
			if(input[i] >= '0' && input[i] <= '9'){
				flag++;
			}				
		}
		if(flag == strlen(input)) num  = atoi(input);
		else{
			printf("Wrong input. Try again\n");
			continue;	
		}
		flag = 0;
		for(i=0; i<arrSize; i++){
			if(assortment[i] == num) return i;
			else flag++;
		}
		if(flag != 0){
			printf("Choose the rolled metal height using the following assortment\n");
			channelMetalAssortment();
		}	
	} 
}

int userInputIBeanControl(int assortment[], int arrSize){
	while(1){
		char input[10];
		int i, flag = 0, num;
		printf("Height, mm: ");
		scanf("%s", input);
		for(i=0; i<strlen(input); i++){
			if(input[i] >= '0' && input[i] <= '9'){
				flag++;
			}				
		}
		if(flag == strlen(input)) num  = atoi(input);
		else{
			printf("Wrong input. Try again\n");
			continue;	
		}
		flag = 0;
		for(i=0; i<arrSize; i++){
			if(assortment[i] == num) return i;
			else flag++;
		}
		if(flag != 0){
			printf("Choose the rolled metal height using the following assortment\n");
			IbeamMetalAssortment();
		}	
	} 
}

int userInputSquareSectionPipeControl(int assortment[], int arrSize){
	while(1){
		char input[10];
		int i, flag = 0, num;
		printf("Height, mm: ");
		scanf("%s", input);
		for(i=0; i<strlen(input); i++){
			if(input[i] >= '0' && input[i] <= '9'){
				flag++;
			}				
		}
		if(flag == strlen(input)) num  = atoi(input);
		else{
			printf("Wrong input. Try again\n");
			continue;	
		}
		flag = 0;
		for(i=0; i<arrSize; i++){
			if(assortment[i] == num) return i;
			else flag++;
		}
		if(flag != 0){
			printf("Choose the rolled metal height using the following assortment\n");
			squareSectionPipeAssortment();
		}	
	} 
}

int checkGear(){
	while(1){
		int i, flag = 0, number;
		char input[10];	
		scanf("%s", input);
		for(i=0; i<strlen(input); i++){
			if(input[i] >= '0' && input[i] <= '9'){
				flag++;
			}
		}
		if(flag == strlen(input) && atoi(input) >= 10 && atoi(input) <= 90) return atoi(input);
		else{
			printf("Wrong input. Try again\n");
			continue;	
		}
	}
}

int checkModul(){
	int assortment[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 25, 28, 32, 36, 40};
	int modul, i, modulListSize = 20;
	while(1){
		char input[10];
		int flag = 0;
		scanf("%s", input);
		for(i=0; i<strlen(input); i++){
			if(input[i] >= '0' && input[i] <= '9'){
				flag++;
			}
		}
		if(flag == strlen(input)) modul  = atoi(input);
		else{
			printf("Wrong input. Try again\n");
			continue;	
		}
		flag = 0;
		for(i=0; i<modulListSize; i++){
			if(assortment[i] == modul) return modul;
			else flag++;
		}
		if(flag != 0){
			printf("Choose modul value using the following modul list\n");
			modulList();
		}
	}
}
