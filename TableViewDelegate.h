//
//  TableViewDelegate.h
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#ifndef TableViewDelegate_h
#define TableViewDelegate_h

#include <stdio.h>
#include "GlobalDefinitions.h"

void* DequeueReusableCell(void* tableView, void* identifier, DoubleObjectObjectFunction function);
void* ReTipDequeueReusableCell(void* tableView, void* identifier);
void* CreateTableViewWithSource(void* tableViewSource, Frame frame, TableViewStyle style, TableViewCreator function);
void* ReTipCreateTableViewWithSource(void* tableViewSource, Frame frame, TableViewStyle style);
void ReloadTableView(void* tableView, SingleObjectAction action);
void ReTipReloadTableView(void* tableView);
void* GetHeaderView(void* tableView, Exchanger function);
void* ReTipGetHeaderView(void* tableView);
void SetRowHeight(void* tableView, float height, ObjectDecimalAction action);
void ReTipSetRowheight(void* tableView, float height);
void TableViewSetScrollability(void* tableView, Bools scrollable, ObjectToggler action);
void ReTipTableViewSetScrollability(void* tableView, Bools scrollable);
void DeselectRow(void* tableView, void* indexPath, Bools animated, DoubleObjectConditionalAction action);
void ReTipDeselectRow(void* tableView, void* indexPath, Bools animated);
void SetSeparatorInsets(void* tableView, EdgeInsets insets, InsetSetter action);
void ReTipSetSeparatorInsets(void* tableView, EdgeInsets insets);
#endif /* TableViewDelegate_h */
