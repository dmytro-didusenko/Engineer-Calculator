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
	printf("Max diametn (gear #2) - %g mm\n", maxDiametrGearTwo);
	printf("Min diametr (gear #1) - %g mm\n", minDiametrGearOne);
	printf("Min diametr (gear #2) - %g mm\n", minDiametrGearTwo);
	printf("Gear tooth height - %g mm\n", toothHeight);
	printf("Gear tooth thickness - %g mm\n", toothThickness);
}
