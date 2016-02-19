//
//  TableViewSourceDelegate.c
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#include "TableViewSourceDelegate.h"

void* CreateTableViewSource(TableViewSource source, TableViewSourceCreator function)
{
    return (*function)(source);
}
