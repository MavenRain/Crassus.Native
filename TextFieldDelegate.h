//
//  TextFieldDelegate.h
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#ifndef TextFieldDelegate_h
#define TextFieldDelegate_h

#include <stdio.h>
#import "GlobalDefinitions.h"

void* CreateTextField(Frame frame, ViewCreator function);

void* ReTipCreateTextField(Frame frame);

void SetTextFieldText(void* textField, void* text, DoubleObjectAction action);

void ReTipSetTextFieldText(void* textField, void* text);

void SetPlaceholder(void* textField, void* placeholder, DoubleObjectAction action);

void ReTipSetPlaceholder(void* textField, void* placeholder);

void SetTextFieldBorderColor(void* textField, Rgb color, ViewShortColorAction action);

void ReTipSetTextFieldBorderColor(void* textField, Rgb color);

void SetTextFieldBorderWidth(void* textField, float width, ObjectDecimalAction action);

void ReTipSetTextFieldBorderWidth(void* textField, float width);

void SetTextFieldCornerRadius(void* textField, float radius, ObjectDecimalAction action);

void ReTipSetTextFieldCornerRadius(void* textField, float radius);

void SetTextFieldLeftView(void* textField, void* view, DoubleObjectAction action);

void ReTipSetTextFieldLeftView(void* textField, void* view);

void SetTextFieldViewMode(void* textField, TextFieldViewMode mode, ViewModeAction action);

void ReTipSetTextFieldViewMode(void* textField, TextFieldViewMode mode);

#endif /* TextFieldDelegate_h */
