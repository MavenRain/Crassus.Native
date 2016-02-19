//
//  LabelDelegate.h
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#ifndef LabelDelegate_h
#define LabelDelegate_h

#include <stdio.h>
#include "GlobalDefinitions.h"

void* CreateLabel(Frame frame, void* text, uint fontSize, LabelCreator function);
void* ReTipCreateLabel(Frame frame, void* text, uint fontSize);
void CenterLabelText(void* label, SingleObjectAction action);
void ReTipCenterLabelText(void* label);
void SetLabelTextColor(void* label, Rgba color, ViewColorAction action);
void ReTipSetLabelTextColor(void* label, Rgba color);
void* CreateBoldLabel(Frame frame, void* text, uint fontSize, LabelCreator function);
void* ReTipCreateBoldLabel(Frame frame, void* text, uint fontSize);
#endif /* LabelDelegate_h */
