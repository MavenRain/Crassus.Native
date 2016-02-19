//
//  StringDelegate.c
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#include "StringDelegate.h"

void* MakePlatformStringArray(const char ** array, uint size, StringArrayProcessor function)
{
    return (*function)(array, size);
}

void* MakePlatformString(const char * text, StringProcessor function)
{
    return (*function)(text);
}