#ifndef ENGINEERWEIGTHCALC_H
#define ENGINEERWEIGTHCALC_H
#ifndef ENGINEERLENGTHCALC_H
#define ENGINEERLENGTHCALC_H
#ifndef GEARSCALC_H
#define GEARSCALC_H

#include <conio.h>
#include <math.h>
#define PI 3.14159

/*procedure allows to calculates the weight of metal rolling
Initial data depends on the type of metal, and its dimensions*/
void metalWeightCalc();

/*procedure allows to calculates the length of metal rolling
Initial data depends on the type of metal, its dimensions and weight*/
void metalLengthCalc();

/*procedure allows to calculates the geometrical options of gears
Initial data is gears' teeth number and modul value*/
void gearsCalc();

#endif
#endif
#endif
