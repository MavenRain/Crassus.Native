//
//  TestView.c
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#include "TestView.h"
#include "ViewDelegate.h"
#include "LabelDelegate.h"
#include "StringDelegate.h"

void TestView(void* containingView)
{
    Frame labelFrame = { 50, 50, 150, 150 };
    void* hello = MakePlatformString("Hello world!", ReTipMakePlatformString);
    void* label = CreateLabel(labelFrame, hello, 17, ReTipCreateLabel);
    AddSubview(containingView, label, ReTipAddSubview);
    ReleaseView(label, ReTipReleaseView);
}

SingleObjectAction TestViewLoader()
{
    return TestView;
}