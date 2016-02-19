//
//  TableViewSource.h
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#ifndef TableViewSource_h
#define TableViewSource_h

#include <stdio.h>
#include "GlobalDefinitions.h"

typedef struct TableViewSource
{
    ObjectNumberNumberFunction rowsInSection;
    DoubleObjectObjectFunction getCell;
    ObjectNumberFunction numberOfSections;
    ObjectNumberObjectFunction getViewForHeader;
    ObjectNumberObjectFunction getViewForFooter;
    DoubleObjectAction accessoryButtonTapped;
    DoubleObjectDecimalFunction getHeightForRow;
    ObjectWholeNumberDecimalFunction getHeightForHeader;
    ObjectWholeNumberObjectFunction titleForHeader;
    DoubleObjectAction rowSelected;
    
} TableViewSource;

typedef void*(*TableViewSourceCreator)(TableViewSource);

int ObjectNumberNumberFunctionBinder(ObjectNumberNumberFunction function, void* object, int number);
void* DoubleObjectObjectFunctionBinder(DoubleObjectObjectFunction function, void* object1, void* object2);
int ObjectNumberFunctionBinder(ObjectNumberFunction function, void* object);
void* ObjectNumberObjectFunctionBinder(ObjectNumberObjectFunction function, void* object, int number);
void DoubleObjectActionBinder(DoubleObjectAction action, void* object1, void* object2);
float DoubleObjectDecimalFunctionBinder(DoubleObjectDecimalFunction function, void* object1, void* object2);
float ObjectWholeNumberDecimalFunctionBinder(ObjectWholeNumberDecimalFunction function, void* object, uint wholeNumber);
void* ObjectWholeNumberObjectFunctionBinder(ObjectWholeNumberObjectFunction function, void* object, uint wholeNumber);

#endif /* TableViewSource_h */

