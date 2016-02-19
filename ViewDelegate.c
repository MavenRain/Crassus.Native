//
//  ViewDelegate.c
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#include "ViewDelegate.h"

void AddSubview(void* view, void* subview, DoubleObjectAction action)
{
    (*action)(view, subview);
}

float GetViewBoundsWidth(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

float GetViewBoundsHeight(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

void* CreateNewView(Frame frame, ViewCreator creator)
{
    return (*creator)(frame);
}

float GetViewFrameWidth(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

float GetViewFrameHeight(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

void* GetViewFrame(void* view, SingleObjectObjectFunction function)
{
    return (*function)(view);
}

float GetFrameX(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

float GetFrameY(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

void ResizeFrame(void* view, FrameSize size, Sizer action)
{
    return (*action)(view, size);
}

void AdjustFrameHeight(void* view, float height, ObjectDecimalAction action)
{
    (*action)(view, height);
}

void AdjustFrameWidth(void* view, float width, ObjectDecimalAction action)
{
    (*action)(view, width);
}

void SetBackgroundColor(void* view, Rgba color, ViewColorAction action)
{
    (*action)(view, color);
}

void SetViewFrame(void* view, Frame frame, ViewFramer action)
{
    (*action)(view, frame);
}

float GetViewFrameBottom(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

float GetViewFrameTop(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

float GetViewBoundsLeft(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

float GetViewBoundsRight(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

float GetViewBoundsTop(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

void SetContentMode(void* view, ViewContentMode mode, ViewContentModeSetter action)
{
    (*action)(view, mode);
}

void SetAutoresizingMask(void* view, AutoresizingMask mask, AutoresizingMasker action)
{
    (*action)(view, mask);
}

void Animate(float duration, Action animations, Action completion, DurationActivity action)
{
    (*action)(duration, animations, completion);
}

void* GetSubviews(void* view, Exchanger function)
{
    return (*function)(view);
}

void* GetSuperview(void* view, Exchanger function)
{
    return (*function)(view);
}

void AddSubviews(void* containingView, void* subviews, DoubleObjectAction action)
{
    (*action)(containingView, subviews);
}

void AnimateIntoView(void* view, float duration, ObjectDecimalAction action)
{
    (*action)(view, duration);
}

void AnimateOutOfView(void* view, float duration, ObjectDecimalAction action)
{
    (*action)(view, duration);
}

void StageWithinView(void* view, void* subview, DoubleObjectAction action)
{
    (*action)(view, subview);
}

void RemoveFromSuperview(void* view, SingleObjectAction action)
{
    (*action)(view);
}

void ReleaseView(void* view, SingleObjectAction action)
{
    (*action)(view);
}

void* AutoReleaseView(void* view, Exchanger function)
{
    return (*function)(view);
}

void* RetainView(void* view, Exchanger function)
{
    return (*function)(view);
}

void SetViewAlpha(void* view, float alpha, ObjectDecimalAction action)
{
    (*action)(view, alpha);
}

void BringSubviewToFront(void* view, void* subview, DoubleObjectAction action)
{
    (*action)(view, subview);
}

float GetViewBoundsBottom(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

void* CreateButton(Frame frame, void* selector, InteractiveControlCreator function)
{
    return (*function)(frame, selector);
}

void RemoveSubviews(void* view, SingleObjectAction action)
{
    (*action)(view);
}

void AnimateSubviewsOutOfView(void* view, float duration, ObjectDecimalAction action)
{
    (*action)(view, duration);
}

void* GetWindowFromView(void* view, Exchanger function)
{
    return (*function)(view);
}

















