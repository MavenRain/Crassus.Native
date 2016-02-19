//
//  WindowDelegate.c
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#include "WindowDelegate.h"

void SetRootViewController(void* window, void* viewController, DoubleObjectAction action)
{
    (*action)(window, viewController);
}