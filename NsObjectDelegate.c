//
//  NsObjectDelegate.c
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#include "NsObjectDelegate.h"

void ReleaseObject(void* object, SingleObjectAction action)
{
    (*action)(object);
}

void* AutoReleaseObject(void* object, Exchanger function)
{
    return (*function)(object);
}

void* RetainObject(void* object, Exchanger function)
{
    return (*function)(object);
}