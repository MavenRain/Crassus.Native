//
//  TextFieldDelegate.c
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#include "TextFieldDelegate.h"

void* CreateTextField(Frame frame, ViewCreator function)
{
    return (*function)(frame);
}

void SetTextFieldText(void* textField, void* text, DoubleObjectAction action)
{
    (*action)(textField, text);
}

void SetPlaceholder(void* textField, void* placeholder, DoubleObjectAction action)
{
    (*action)(textField, placeholder);
}

void SetTextFieldBorderColor(void* textField, Rgb color, ViewShortColorAction action)
{
    (*action)(textField, color);
}

void SetTextFieldBorderWidth(void* textField, float width, ObjectDecimalAction action)
{
    (*action)(textField, width);
}

void SetTextFieldCornerRadius(void* textField, float radius, ObjectDecimalAction action)
{
    (*action)(textField, radius);
}

void SetTextFieldLeftView(void* textField, void* view, DoubleObjectAction action)
{
    (*action)(textField, view);
}

void SetTextFieldViewMode(void* textField, TextFieldViewMode mode, ViewModeAction action)
{
    (*action)(textField, mode);
}