#include "engineercalc.h"
#include "resource.h"

enum metalType{
	circularMetal = 1,
	sheetMetal,
	hexagonalMetal,
	equalAngle,
	channelShapedMetal,
	IBeamMetal,
	circularPipe,
	squareSectionPipe,
};

float circularMetalCalc(float density);
float sheetMetalCalc(float density);
float hexagonalMetalCalc(float density);
float equalAngleMetalCalc(float density);
float channelShapedMetalCalc(float density);
float IBeamMetalCalc(float density);
float circularPipeCalc(float density);
float squareSectionPipeCalc(float density);
void printWeightResult(float result);

void metalWeightCalc(){
	int choiceType;
	while(1){
		system("cls");
		
		metaltypeList();
		
		printf("Please, input your choice\n");
		scanf("%i", &choiceType);
		
		system("cls");
		
		switch(choiceType){
			case circularMetal: printWeightResult(circularMetalCalc(materialSelection())); break;
			case sheetMetal: printWeightResult(sheetMetalCalc(materialSelection())); break;
			case hexagonalMetal: printWeightResult(hexagonalMetalCalc(materialSelection())); break;
			case equalAngle: printWeightResult(equalAngleMetalCalc(materialSelection())); break;
			case channelShapedMetal: printWeightResult(channelShapedMetalCalc(materialSelection())); break;
			case IBeamMetal: printWeightResult(IBeamMetalCalc(materialSelection())); break;
			case circularPipe: printWeightResult(circularPipeCalc(materialSelection())); break;
			case squareSectionPipe: printWeightResult(squareSectionPipeCalc(materialSelection())); break;
			default: printf("Wrong input. Try again\n");
		}
		printf("\nPress any key to enter the main menu or \"Esc\" button to exit\n");
		int exitCode = getch();
		if(exitCode == 27) break;	
	}
}


float circularMetalCalc(float density){
	float diametr, length;
	printf("Input parameters\n");
	printf("Diametr, mm: ");
	diametr = userInputControl();
	printf("Length, m: ");
	length = userInputControl();
	return PI * pow(diametr, 2) * length * density / (4 * 1000);
}

float sheetMetalCalc(float density){
	float length, width, thickness;
	printf("Input parameters\n");
	printf("Length, mm: ");
	length = userInputControl();
	printf("Width, mm: ");
	width = userInputControl();
	printf("Thickness, mm: ");
	thickness = userInputControl();
	return (length * width * thickness * density) / 1000000;
}

float hexagonalMetalCalc(float density){
	float diametr, length;
	printf("Input parameters\n");
	printf("Diameter of the inscribed circle, mm: ");
	diametr = userInputControl();
	printf("Length, m: ");
	length = userInputControl();
	return 2 * sqrtf(3) * pow(diametr / 2, 2) * length * density / 1000;
}

float equalAngleMetalCalc(float density){
	int heightMetal, arrSize = 24, assortment[24] = {20, 25, 28, 30, 32, 35, 40, 45, 50, 56, 63, 70, 75, 80, 90, 100, 110, 125, 140, 160, 180, 200, 220, 250};
	float lengthMetal, crossSectionalArea[24] = {1.13, 1.43, 1.62, 1.74, 1.86, 2.04, 3.08, 3.48, 4.8, 5.41, 7.28, 9.42, 10.15, 10.85, 12.28, 15.6, 17.2, 24.33, 27.33, 37.39, 42.19, 61.98, 68.58, 96.96};
	printf("Input parameters\n");
	heightMetal = userInputEqualAngleControl(assortment, arrSize);
	printf("Length, m: ");
	lengthMetal = userInputControl();	
	return lengthMetal * crossSectionalArea[heightMetal] * density / 10;
}

float channelShapedMetalCalc(float density){
	int heightMetal, arrSize = 16, assortment[16] = {50, 65, 80, 100, 120, 140, 160, 180, 200, 220, 240, 270, 300, 330, 360, 400};
	float lengthMetal, crossSectionalArea[16] = {6.16, 7.51, 8.98, 10.9, 13.3, 15.6, 18.1, 20.7, 23.4, 26.7, 30.6, 35.2, 40.5, 46.5, 53.4, 61.5};
	printf("Input parameters\n");
	heightMetal = userInputChannelControl(assortment, arrSize);
	printf("Length, m: ");
	lengthMetal = userInputControl();	
	return lengthMetal * crossSectionalArea[heightMetal] * density / 10;
}

float IBeamMetalCalc(float density){
	int heightMetal, arrSize = 17, assortment[17] = {100, 120, 140, 160, 180, 200, 220, 240, 270, 300, 330, 360, 400, 450, 500, 550, 600};
	float lengthMetal, crossSectionalArea[17] = {12.0, 14.7, 17.4, 20.2, 23.4, 26.8, 30.6, 34.8, 40.2, 46.5, 53.8, 61.9, 72.6, 84.7, 100.0, 118.0, 138.0};
	printf("Input parameters\n");
	heightMetal = userInputIBeanControl(assortment, arrSize);
	printf("Length, m: ");
	lengthMetal = userInputControl();	
	return lengthMetal * crossSectionalArea[heightMetal] * density / 10;
}

float circularPipeCalc(float density){
	float outerDiametr, pipeThickness, length;
	printf("Input parameters\n");
	printf("Outer diametr, mm: ");
	outerDiametr = userInputControl();
	printf("Thickness, mm: ");
	pipeThickness = userInputControl();	
	printf("Length, m: ");
	length = userInputControl();
 	return PI * pow((outerDiametr / 2 - pipeThickness), 2) * length * density / 1000;
}

float squareSectionPipeCalc(float density){
	int heightMetal, arrSize = 24, assortment[20] = {10, 15, 20, 25, 30, 35, 40, 42, 45, 50, 60, 70, 80, 90, 100, 110, 120, 140, 150, 180};
	float lengthMetal, crossSectionalArea[24] = {0.343, 0.771, 1.37, 1.77, 2.17, 2.57, 2.97, 4.52, 4.88, 5.48, 8.68, 12.57, 14.57, 16.57, 21.94, 24.34, 26.74, 31.54, 44.34, 53.94};
	printf("Input parameters\n");
	heightMetal = userInputSquareSectionPipeControl(assortment, arrSize);
	printf("Length, m: ");
	lengthMetal = userInputControl();	
	return lengthMetal * crossSectionalArea[heightMetal] * density / 10;
}

void printWeightResult(float result){ 
	printf("\nResult = %g kg\n", result);
}

