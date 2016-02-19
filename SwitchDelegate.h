//
//  SwitchDelegate.h
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#ifndef SwitchDelegate_h
#define SwitchDelegate_h

#include <stdio.h>
#include "GlobalDefinitions.h"

void* CreateSwitch(Frame frame, ViewCreator function);
void* ReTipCreateSwitch(Frame frame);
void AddSwitchValueChangedHandler(void* retipSwitch, SingleObjectAction handler, ObjectActionBlockAction action);
void ReTipAddSwitchValueChangedHandler(void* retipSwitch, SingleObjectAction handler);
Bools IsSwitchOn(void* retipSwitch, ObjectPredicate function);
Bools ReTipIsSwitchOn(void* retipSwitch);

#endif /* SwitchDelegate_h */
