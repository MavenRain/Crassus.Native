//
//  StringDelegate.h
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#ifndef StringDelegate_h
#define StringDelegate_h

#include <stdio.h>
#include "GlobalDefinitions.h"

#endif /* StringDelegate_h */

void* MakePlatformStringArray(const char ** array, uint size, StringArrayProcessor function);
void* ReTipMakePlatformStringArray(const char ** array, uint size);
void* MakePlatformString(const char * text, StringProcessor function);
void* ReTipMakePlatformString(const char * text);
