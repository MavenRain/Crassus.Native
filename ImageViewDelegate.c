//
//  ImageViewDelegate.c
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#include "ImageViewDelegate.h"

void* CreateImageViewFromImage(void* image, Exchanger function)
{
    return (*function)(image);
}

void SetUserInteraction(void* imageView, Bools enabled, ObjectToggler function)
{
    (*function)(imageView, enabled);
}