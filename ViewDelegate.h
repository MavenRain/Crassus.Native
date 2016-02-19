//
//  ViewDelegate.h
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#ifndef ViewDelegate_h
#define ViewDelegate_h

#include <stdio.h>

#endif /* ViewDelegate_h */

#include "GlobalDefinitions.h"

void AddSubview(void* view, void* subview, DoubleObjectAction action);

void ReTipAddSubview(void* view, void* subview);

float GetViewBoundsWidth(void* view, SingleObjectDecimalFunction function);

float ReTipGetViewBoundsWidth(void* view);

float GetViewBoundsHeight(void* view, SingleObjectDecimalFunction function);

float ReTipGetViewBoundsHeight(void* view);

void* CreateNewView(Frame frame, ViewCreator creator);

void* ReTipCreateNewView(Frame frame);

float GetViewFrameWidth(void* view, SingleObjectDecimalFunction function);

float ReTipGetViewFrameWidth(void* view);

float GetViewFrameHeight(void* view, SingleObjectDecimalFunction function);

float ReTipGetViewFrameHeight(void* view);

float GetFrameX(void* view, SingleObjectDecimalFunction function);

float ReTipGetFrameX(void* view);

float GetFrameY(void* view, SingleObjectDecimalFunction function);

float ReTipGetFrameY(void* view);

void ResizeFrame(void* view, FrameSize size, Sizer action);

void ReTipResizeFrame(void* view, FrameSize size);

void AdjustFrameHeight(void* view, float height, ObjectDecimalAction action);

void ReTipAdjustFrameHeight(void* view, float height);

void AdjustFrameWidth(void* view, float width, ObjectDecimalAction action);

void ReTipAdjustFrameWidth(void* view, float width);

void SetBackgroundColor(void* view, Rgba color, ViewColorAction action);

void ReTipSetBackgroundColor(void* view, Rgba color);

void SetViewFrame(void* view, Frame frame, ViewFramer action);

void ReTipSetViewFrame(void* view, Frame frame);

float GetViewFrameBottom(void* view, SingleObjectDecimalFunction function);

float ReTipGetViewFrameBottom(void* view);

float GetViewFrameTop(void* view, SingleObjectDecimalFunction function);

float ReTipGetViewFrameTop(void* view);

float GetViewBoundsLeft(void* view, SingleObjectDecimalFunction function);

float ReTipGetViewBoundsLeft(void* view);

float GetViewBoundsRight(void* view, SingleObjectDecimalFunction function);

float ReTipGetViewBoundsRight(void* view);

float GetViewBoundsTop(void* view, SingleObjectDecimalFunction function);

float ReTipGetViewBoundsTop(void* view);

void SetContentMode(void* view, ViewContentMode mode, ViewContentModeSetter action);

void ReTipSetContentMode(void* view, ViewContentMode mode);

void SetAutoresizingMask(void* view, AutoresizingMask mask, AutoresizingMasker action);

void ReTipSetAutoresizingMask(void* view, AutoresizingMask mask);

void Animate(float duration, Action animations, Action completion, DurationActivity action);

void ReTipAnimate(float duration, Action animations, Action completion);

void* GetSubviews(void* view, Exchanger function);

void* ReTipGetSubviews(void* view);

void* GetSuperview(void* view, Exchanger function);

void* ReTipGetSuperview(void* view);

void AddSubviews(void* containingView, void* subviews, DoubleObjectAction action);

void ReTipAddSubviews(void* containingView, void* subviews);

void AnimateIntoView(void* view, float duration, ObjectDecimalAction action);

void ReTipAnimateIntoView(void* view, float duration);

void AnimateOutOfView(void* view, float duration, ObjectDecimalAction action);

void ReTipAnimateOutOfView(void* view, float duration);

void StageWithinView(void* view, void* subview, DoubleObjectAction action);

void ReTipStageWithinView(void* view, void* subview);

void RemoveFromSuperview(void* view, SingleObjectAction action);

void ReTipRemoveFromSuperview(void* view);

void ReleaseView(void* view, SingleObjectAction action);

void ReTipReleaseView(void* view);

void* AutoReleaseView(void* view, Exchanger function);

void* ReTipAutoReleaseView(void* view);

void* RetainView(void* view, Exchanger function);

void* ReTipRetainView(void* view);

void SetViewAlpha(void* view, float alpha, ObjectDecimalAction action);

void ReTipSetViewAlpha(void* view, float alpha);

void BringSubviewToFront(void* view, void* subview, DoubleObjectAction action);

void ReTipBringSubviewToFront(void* view, void* subview);

float GetViewBoundsBottom(void* view, SingleObjectDecimalFunction function);

float ReTipGetViewBoundsBottom(void* view);

void* CreateButton(Frame frame, void* selector, InteractiveControlCreator function);

void* ReTipCreateButton(Frame frame, void* selector);

void RemoveSubviews(void* view, SingleObjectAction action);

void ReTipRemoveSubviews(void* view);

void AnimateSubviewsOutOfView(void* view, float duration, ObjectDecimalAction action);

void ReTipAnimateSubviewsOutOfView(void* view, float duration);

void* GetWindowFromView(void* view, Exchanger function);

void* ReTipGetWindowFromView(void* view);






























