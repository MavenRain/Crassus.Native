//
//  NsObjectDelegate.h
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#ifndef NsObjectDelegate_h
#define NsObjectDelegate_h

#include <stdio.h>
#include "GlobalDefinitions.h"

void ReleaseObject(void* object, SingleObjectAction action);
void ReTipReleaseObject(void* object);
void* AutoReleaseObject(void* object, Exchanger function);
void* ReTipAutoReleaseObject(void* object);
void* RetainObject(void* object, Exchanger function);
void* ReTipRetainObject(void* object);

#endif /* NsObjectDelegate_h */
