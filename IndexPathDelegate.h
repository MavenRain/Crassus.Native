//
//  IndexPathDelegate.h
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#ifndef IndexPathDelegate_h
#define IndexPathDelegate_h

#include <stdio.h>
#include "GlobalDefinitions.h"

long GetIndexPathSection(void* indexPath, ObjectLongNumberFunction function);
long ReTipGetIndexPathSection(void* indexPath);
long GetIndexPathRow(void* indexPath, ObjectLongNumberFunction function);
long ReTipGetIndexPathRow(void* indexPath);

#endif /* IndexPathDelegate_h */
