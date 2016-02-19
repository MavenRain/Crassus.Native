//
//  ImageViewDelegate.h
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#ifndef ImageViewDelegate_h
#define ImageViewDelegate_h

#include <stdio.h>
#include "GlobalDefinitions.h"

void* CreateImageViewFromImage(void* image, Exchanger function);
void* ReTipCreateImageViewFromImage(void* image);
void SetUserInteraction(void* imageView, Bools enabled, ObjectToggler function);
void ReTipSetUserInteraction(void* imageView, Bools enabled);

#endif /* ImageViewDelegate_h */
