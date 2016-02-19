//
//  LabelDelegate.c
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#include "LabelDelegate.h"

void* CreateLabel(Frame frame, void* text, uint fontSize, LabelCreator function)
{
    return (*function)(frame, text, fontSize);
}

void CenterLabelText(void* label, SingleObjectAction action)
{
    (*action)(label);
}

void SetLabelTextColor(void* label, Rgba color, ViewColorAction action)
{
    (*action)(label, color);
}

void* CreateBoldLabel(Frame frame, void* text, uint fontSize, LabelCreator function)
{
    return (*function)(frame, text, fontSize);
}