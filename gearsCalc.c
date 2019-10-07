#include "engineercalc.h"
#include "resource.h"

void gearsCalc(){
	int modul, teethNumGearOne, teethNumGearTwo;
	float axialDistance, dividingDiameterGearOne, dividingDiameterGearTwo, toothHeight; 
	float maxDiametrGearOne, maxDiametrGearTwo, minDiametrGearOne, minDiametrGearTwo, toothThickness;
	
	system("cls");
	
	printf("Input number of first gear teeth\n");
	teethNumGearOne = checkGear();
	printf("Input number of second gear teeth\n");
	teethNumGearTwo = checkGear();
	printf("Input modul\n");
	modul = checkModul();
	
	axialDistance = (teethNumGearOne + teethNumGearTwo) * modul / 2;
	dividingDiameterGearOne = teethNumGearOne * modul;
	dividingDiameterGearTwo = teethNumGearTwo * modul;
	toothHeight = modul * 2.25;
	maxDiametrGearOne = dividingDiameterGearOne + 2 * modul;
	maxDiametrGearTwo = dividingDiameterGearTwo + 2 * modul;
	minDiametrGearOne = dividingDiameterGearOne - 1.25 * modul;
	minDiametrGearTwo = dividingDiameterGearTwo - 1.25 * modul;
	toothThickness = (PI * modul)/2 + 2;
	
	system("cls");
	
	printf("Input parameters:\n");
	printf("Gear teeth number (gear #1) - %i\n", teethNumGearOne);
	printf("Gear teeth number (gear #2) - %i\n", teethNumGearTwo);
	printf("Gear modul - %i\n", modul);
	
	printf("\nOutput parameters:\n");
	printf("Axial distance - %g mm\n", axialDistance);
	printf("Dividing diameter (gear #1) - %g mm\n", dividingDiameterGearOne);
	printf("Dividing diameter (gear #1) - %g mm\n", dividingDiameterGearTwo);
	printf("Max diametr (gear #1) - %g mm\n", maxDiametrGearOne);
	printf("Max diametr (gear #2) - %g mm\n", maxDiametrGearTwo);
	printf("Min diametr (gear #1) - %g mm\n", minDiametrGearOne);
	printf("Min diametr (gear #2) - %g mm\n", minDiametrGearTwo);
	printf("Gear tooth height - %g mm\n", toothHeight);
	printf("Gear tooth thickness - %g mm\n", toothThickness);
	
	printf("\nPress key \"p\" to print output into file or or any key to continue\n");
	
	int exitCode = getch();
	
	if(exitCode == 112){
		FILE * output_file;
		if ((output_file = fopen("gears_result.txt", "w")) == NULL){
			printf("It is impossible to create file\n");
		}
		else{
			fprintf(output_file,"Input parameters:\n");
			fprintf(output_file,"Gear teeth number (gear #1) - %i\n", teethNumGearOne);
			fprintf(output_file,"Gear teeth number (gear #2) - %i\n", teethNumGearTwo);
			fprintf(output_file,"Gear modul - %i\n", modul);
		
			fprintf(output_file,"\nOutput parameters:\n");
			fprintf(output_file,"Axial distance - %g mm\n", axialDistance);
			fprintf(output_file,"Dividing diameter (gear #1) - %g mm\n", dividingDiameterGearOne);
			fprintf(output_file,"Dividing diameter (gear #2) - %g mm\n", dividingDiameterGearTwo);
			fprintf(output_file,"Max diametr (gear #1) - %g mm\n", maxDiametrGearOne);
			fprintf(output_file,"Max diametr (gear #2) - %g mm\n", maxDiametrGearTwo);
			fprintf(output_file,"Min diametr (gear #1) - %g mm\n", minDiametrGearOne);
			fprintf(output_file,"Min diametr (gear #1) - %g mm\n", minDiametrGearTwo);
			fprintf(output_file,"Gear tooth height - %g mm\n", toothHeight);	
			fprintf(output_file,"Gear tooth thickness - %g mm\n", toothThickness);	
	
			fclose(output_file);

			printf("\nOutput data was written into file \"gears_result.txt\"\n");
		}
	}
}
