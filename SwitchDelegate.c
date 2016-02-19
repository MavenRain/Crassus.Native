//
//  SwitchDelegate.c
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#include "SwitchDelegate.h"

void* CreateSwitch(Frame frame, ViewCreator function)
{
    return (*function)(frame);
}

void AddSwitchValueChangedHandler(void* retipSwitch, SingleObjectAction handler, ObjectActionBlockAction action)
{
    (*action)(retipSwitch, handler);
}

Bools IsSwitchOn(void* retipSwitch, ObjectPredicate function)
{
    return (*function)(retipSwitch);
}