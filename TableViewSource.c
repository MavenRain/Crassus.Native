//
//  TableViewSource.c
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/18/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#include "GlobalDefinitions.h"

int ObjectNumberNumberFunctionBinder(ObjectNumberNumberFunction function, void* object, int number)
{
    return (*function)(object, number);
}
void* DoubleObjectObjectFunctionBinder(DoubleObjectObjectFunction function, void* object1, void* object2)
{
    return (*function)(object1, object2);
}
int ObjectNumberFunctionBinder(ObjectNumberFunction function, void* object)
{
    return (*function)(object);
}
void* ObjectNumberObjectFunctionBinder(ObjectNumberObjectFunction function, void* object, int number)
{
    return (*function)(object, number);
}
void DoubleObjectActionBinder(DoubleObjectAction action, void* object1, void* object2)
{
    (*action)(object1, object2);
}
float DoubleObjectDecimalFunctionBinder(DoubleObjectDecimalFunction function, void* object1, void* object2)
{
    return (*function)(object1, object2);
}
float ObjectWholeNumberDecimalFunctionBinder(ObjectWholeNumberDecimalFunction function, void* object, unsigned int wholeNumber)
{
    return (*function)(object, wholeNumber);
}
void* ObjectWholeNumberObjectFunctionBinder(ObjectWholeNumberObjectFunction function, void* object, unsigned int wholeNumber)
{
    return (*function)(object, wholeNumber);
}