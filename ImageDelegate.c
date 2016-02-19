//
//  ImageDelegate.c
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#include "ImageDelegate.h"

void* CreateImage(void* url, Exchanger function)
{
    return (*function)(url);
}