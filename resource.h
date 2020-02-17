#ifndef RESOURCE_H
#define RESOURCE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*function for selecting material from a binary file
Called from functions metalWeightCalc() and metalLengthCalc()*/
float materialSelection();

/*function for verifying the correctness of user input (floating point numbers)
Called from functions circularMetalCalc(), sheetMetalCalc(), hexagonalMetalCalc(), circularPipeCalc(), 
circularMetalLengthCalc(), sheetMetalLengthCalc(), hexagonalMetalLengthCalc and circularPipeLengthCalc()*/	
float userInputControl();

/*function for verifying the correctness of user input (equal angle rolling metal)	
Called from functions equalAngleMetalCalc() and equalAngleMetalLengthCalc()*/
int userInputEqualAngleControl(int assortment[], int arrSize);	

/*function for verifying the correctness of user input (channel rolling metal)
Called from functions channelShapedMetalCalc() and channelShapedMetalLengthCalc()*/
int userInputChannelControl(int assortment[], int arrSize);

/*function for verifying the correctness of user input (I bean rolling metal)
Called from functions IBeamMetalCalc() and IBeamMetalLengthCalc()*/
int userInputIBeanControl(int assortment[], int arrSize);

/*function for verifying the correctness of user input (square section pipe)
Called from functions squareSectionPipeCalc() and squareSectionPipeLengthCalc()*/	
int userInputSquareSectionPipeControl(int assortment[], int arrSize);

/*function for verifying the correctness of user input (integer numbers from 10 to 90)	
Called from function gearsCalc()*/
int checkGear();

/*function for verifying the correctness of user input (integer numbers - modul value)	
Called from function gearsCalc()*/
int checkModul();	

#endif 
