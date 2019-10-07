#ifndef RESOURCE_H
#define RESOURCE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*function for selecting material from a binary file
�alled from functions metalWeightCalc() and metalLengthCalc()*/
float materialSelection();

/*function for verifying the correctness of user input (floating point numbers)
�alled from functions circularMetalCalc(), sheetMetalCalc(), hexagonalMetalCalc(), circularPipeCalc(), 
circularMetalLengthCalc(), sheetMetalLengthCalc(), hexagonalMetalLengthCalc and circularPipeLengthCalc()*/	
float userInputControl();

/*function for verifying the correctness of user input (equal angle rolling metal)	
�alled from functions equalAngleMetalCalc() and equalAngleMetalLengthCalc()*/
int userInputEqualAngleControl(int assortment[], int arrSize);	

/*function for verifying the correctness of user input (channel rolling metal)
�alled from functions channelShapedMetalCalc() and channelShapedMetalLengthCalc()*/
int userInputChannelControl(int assortment[], int arrSize);

/*function for verifying the correctness of user input (I bean rolling metal)
�alled from functions IBeamMetalCalc() and IBeamMetalLengthCalc()*/
int userInputIBeanControl(int assortment[], int arrSize);

/*function for verifying the correctness of user input (square section pipe)
�alled from functions squareSectionPipeCalc() and squareSectionPipeLengthCalc()*/	
int userInputSquareSectionPipeControl(int assortment[], int arrSize);

/*function for verifying the correctness of user input (integer numbers from 10 to 90)	
�alled from function gearsCalc()*/
int checkGear();

/*function for verifying the correctness of user input (integer numbers - modul value)	
�alled from function gearsCalc()*/
int checkModul();	

#endif 
