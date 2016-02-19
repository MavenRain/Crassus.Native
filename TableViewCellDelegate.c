//
//  TableViewCellDelegate.c
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#include "TableViewCellDelegate.h"

void* CreateDefaultCell(void* identifier, Exchanger function)
{
    return (*function)(identifier);
}

void* CreateValue1Cell(void* identifier, Exchanger function)
{
    return (*function)(identifier);
}

void SetCellTextLabel(void* cell, void* label, DoubleObjectAction action)
{
    (*action)(cell, label);
}

void SetImageForCell(void* cell, void* image, DoubleObjectAction action)
{
    (*action)(cell, image);
}

void SetAccessoryViewForCell(void* cell, void* accessory, DoubleObjectAction action)
{
    (*action)(cell, accessory);
}

void* CreateCellAccessory(CellAccessory accessoryValue, AccessoryProducer function)
{
    return (*function)(accessoryValue);
}

void* GetCellContentView(void* cell, Exchanger function)
{
    return (*function)(cell);
}

void* GetCellTextLabel(void* cell, Exchanger function)
{
    return (*function)(cell);
}

void SetSelectionStyle(void* cell, TableViewSelectionStyle style, SelectionStyleAction action)
{
    (*action)(cell, style);
}

void SetSeparationInsets(void* cell, EdgeInsets insets, InsetSetter action)
{
    (*action)(cell, insets);
}

void SetLayoutMargins(void* cell, LayoutMargins margins, MarginSetter action)
{
    (*action)(cell, margins);
}

void TogglePreservationOfSuperviewLayoutMargins(void* cell, Bools toggle, ObjectToggler action)
{
    (*action)(cell, toggle);
}



































