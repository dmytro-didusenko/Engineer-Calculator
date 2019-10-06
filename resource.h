#ifndef RESOURCE_H
#define RESOURCE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float materialSelection();
float userInputControl();
int userInputEqualAngleControl(int assortment[], int arrSize);
int userInputChannelControl(int assortment[], int arrSize);
int userInputIBeanControl(int assortment[], int arrSize);
int userInputSquareSectionPipeControl(int assortment[], int arrSize);
int checkGear();
int checkModul();

#endif 
