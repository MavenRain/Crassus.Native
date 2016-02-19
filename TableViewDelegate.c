//
//  TableViewDelegate.c
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#include "TableViewDelegate.h"

void* DequeueReusableCell(void* tableView, void* identifier, DoubleObjectObjectFunction function)
{
    return (*function)(tableView, identifier);
}

void* CreateTableViewWithSource(void* tableViewSource, Frame frame, TableViewStyle style, TableViewCreator function)
{
    return (*function)(tableViewSource, frame, style);
}

void ReloadTableView(void* tableView, SingleObjectAction action)
{
    (*action)(tableView);
}

void* GetHeaderView(void* tableView, Exchanger function)
{
    return (*function)(tableView);
}

void SetRowHeight(void* tableView, float height, ObjectDecimalAction action)
{
    (*action)(tableView, height);
}

void TableViewSetScrollability(void* tableView, Bools scrollable, ObjectToggler action)
{
    (*action)(tableView, scrollable);
}

void DeselectRow(void* tableView, void* indexPath, Bools animated, DoubleObjectConditionalAction action)
{
    (*action)(tableView, indexPath, animated);
}

void SetSeparatorInsets(void* tableView, EdgeInsets insets, InsetSetter action)
{
    (*action)(tableView, insets);
}
