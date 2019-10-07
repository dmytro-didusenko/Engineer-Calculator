#ifndef PSEUDOGRAPH_H
#define PSEUDOGRAPH_H

/*procedure displays the menu with programm options. 
�alled from function main()*/
void mainMenuList();

/*procedure displays the menu of the metal list. 
�alled from functions metalWeightCalc() and metalLengthCalc()*/	
void materialList();

/*procedure displays the menu of the metal rolling type list. 
�alled from functions metalWeightCalc() and metalLengthCalc()*/	
void metaltypeList();

/*procedure displays the list of standard values of equal angle rolling metal. 
�alled from functions equalAngleMetalCalc() and equalAngleMetalLengthCalc()*/	
void equalAngleMetalAssortment();	

/*procedure displays the list of standard values of channel rolling metal. 
�alled from functions channelShapedMetalCalc() and channelShapedMetalLengthCalc()*/
void channelMetalAssortment();	

/*procedure displays the list of standard values of I beam rolling metal. 
�alled from functions IBeamMetalCalc() and IBeamMetalLengthCalc()*/
void IbeamMetalAssortment();

/*procedure displays the list of standard values of square section pipes. 
�alled from functions squareSectionPipeCalc() and circularPipeLengthCalc()*/
void squareSectionPipeAssortment();	

/*procedure displays the list of standard values of gear moduls. 
�alled from function gearsCalc()*/
void modulList(); 

#endif
