//
//  ViewControllerDelegate.h
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#ifndef ViewControllerDelegate_h
#define ViewControllerDelegate_h

#include <stdio.h>

#endif /* ViewControllerDelegate_h */
#include "GlobalDefinitions.h"

void* CreateViewController(SingleObjectAction viewDidLoad, ObjectActionBlockObjectFunction function);
void* ReTipCreateViewController(SingleObjectAction viewDidLoad);
void* GetView(void* viewController, Exchanger function);
void* ReTipGetView(void* viewController);
void ReleaseViewController(void* viewController, SingleObjectAction action);
void ReTipReleaseViewController(void* viewController);
void* AutoReleaseViewController(void* viewController, Exchanger function);
void* ReTipAutoReleaseViewController(void* viewController);
void* RetainViewController(void* viewController, Exchanger function);
void* ReTipRetainViewController(void* viewController);

