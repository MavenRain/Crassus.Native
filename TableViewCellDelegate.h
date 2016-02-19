//
//  TableViewCellDelegate.h
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#ifndef TableViewCellDelegate_h
#define TableViewCellDelegate_h

#include <stdio.h>
#include "GlobalDefinitions.h"

void* CreateDefaultCell(void* identifier, Exchanger function);
void* ReTipCreateDefaultCell(void* identifier);
void* CreateValue1Cell(void* identifier, Exchanger function);
void* ReTipCreateValue1Cell(void* identifier);
void SetCellTextLabel(void* cell, void* label, DoubleObjectAction action);
void ReTipSetCellTextLabel(void* cell, void* label);
void SetImageForCell(void* cell, void* image, DoubleObjectAction action);
void ReTipSetImageForCell(void* cell, void* image);
void SetAccessoryViewForCell(void* cell, void* accessory, DoubleObjectAction action);
void ReTipSetAccessoryViewForCell(void* cell, void* accessory);
void* CreateCellAccessory(CellAccessory accessoryValue, AccessoryProducer function);
void* ReTipCreateCellAccessory(CellAccessory accessoryValue);
void* GetCellContentView(void* cell, Exchanger function);
void* ReTipGetCellContentView(void* cell);
void* GetCellTextLabel(void* cell, Exchanger function);
void* ReTipGetCellTextLabel(void* cell);
void SetSelectionStyle(void* cell, TableViewSelectionStyle style, SelectionStyleAction action);
void ReTipSetSelectionStyle(void* cell, TableViewSelectionStyle style);
void SetSeparationInsets(void* cell, EdgeInsets insets, InsetSetter action);
void ReTipSetSeparationInsets(void* cell, EdgeInsets insets);
void SetLayoutMargins(void* cell, LayoutMargins margins, MarginSetter action);
void ReTipSetLayoutMargins(void* cell, LayoutMargins margins);
void TogglePreservationOfSuperviewLayoutMargins(void* cell, Bools toggle, ObjectToggler action);
void ReTipTogglePreservationOfSuperviewLayoutMargins(void* cell, Bools toggle);
#endif /* TableViewCellDelegate_h */
