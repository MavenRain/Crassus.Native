//
//  GlobalDefinitions.h
//  ReTip.ByDesign
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 ReTip. All rights reserved.
//

#ifndef GlobalDefinitions_h
#define GlobalDefinitions_h

typedef struct Frame
{
    float x;
    float y;
    float width;
    float height;
} Frame;

typedef struct FrameSize
{
    float width;
    float height;
} FrameSize;

typedef struct Rgba
{
    float red;
    float green;
    float blue;
    float alpha;
} Rgba;

typedef struct Rgb
{
    float red;
    float green;
    float blue;
} Rgb;

typedef enum ViewContentMode
{
    ViewContentModeScaleAspectFit,
    ViewContentModeScaleAspectFill,
    ViewContentModeScaleToFill,
    ViewContentModeTopLeft,
    ViewContentModeTop,
    ViewContentModeTopRight,
    ViewContentModeLeft,
    ViewContentModeCenter,
    ViewContentModeRight,
    ViewContentModeBottomLeft,
    ViewContentModeBottom,
    ViewContentModeBottomRight,
    ViewContentModeRedraw
} ViewContentMode;

typedef enum AutoresizingMask
{
    AutoresizingMaskNone = 0,
    AutoresizingMaskFlexibleWidth = 1,
    AutoresizingMaskFlexibleHeight = 2,
    AutoresizingMaskFlexibleTopMargin = 4,
    AutoresizingMaskFlexibleRightMargin = 8,
    AutoresizingMaskFlexibleBottomMargin = 16,
    AutoresizingMaskFlexibleLeftMargin = 32,
    AutoresizingMaskFlexibleDimensions = AutoresizingMaskFlexibleWidth | AutoresizingMaskFlexibleHeight,
    AutoresizingMaskFlexibleMargins = AutoresizingMaskFlexibleLeftMargin | AutoresizingMaskFlexibleTopMargin | AutoresizingMaskFlexibleRightMargin | AutoresizingMaskFlexibleBottomMargin,
    AutoresizingMaskAll = AutoresizingMaskFlexibleDimensions | AutoresizingMaskFlexibleMargins
} AutoresizingMask;

typedef enum Bools
{
    BoolsYES,
    BoolsNO
} Bools;

typedef enum TextFieldViewMode
{
    TextFieldViewModeAlways,
    TextFieldViewModeNever,
    TextFieldViewModeUnlessEditing,
    TextFieldViewModeWhileEditing
} TextFieldViewMode;

typedef enum TableViewStyle
{
    TableViewStylePlain,
    TableViewStyleGrouped
} TableViewStyle;

typedef struct EdgeInsets
{
    float top;
    float left;
    float bottom;
    float right;
} EdgeInsets, LayoutMargins;

typedef enum CellAccessory
{
    CellAccessoryNone = 0,
    CellAccessoryCheckmark = 1,
    CellAccessoryDisclosureIndicator = 2,
    CellAccessoryDetailDisclosureButton = 4
} CellAccessory;

typedef enum TableViewSelectionStyle
{
    TableViewSelectionStyleNone = 0,
    TableViewSelectionStyleBlue = 1,
    TableViewSelectionStyleDefault = 2,
    TableViewSelectionStyleGray = 4
} TableViewSelectionStyle;

typedef enum LineBreakingMode
{
    LineBreakingModeCharacterWrap = 1,
    LineBreakingModeWordWrap = 2,
    LineBreakingModeClip = 4,
    LineBreakingModeHeadTruncation = 8,
    LineBreakingModeMiddleTruncation = 16,
    LineBreakingModeTailTruncation = 32
} LineBreakingMode;

typedef void(*DoubleObjectAction)(void*,void*);
typedef float(*SingleObjectDecimalFunction)(void*);
typedef void*(*ViewCreator)(Frame);
typedef void*(*SingleObjectObjectFunction)(void*);
typedef void(*Sizer)(void*, FrameSize);
typedef void(*ObjectDecimalAction)(void*, float);
typedef void(*ViewColorAction)(void*, Rgba);
typedef void(*ViewFramer)(void*, Frame);
typedef void(*ViewContentModeSetter)(void*, ViewContentMode);
typedef void(*AutoresizingMasker)(void*, AutoresizingMask);
typedef void(*Action)();
typedef void (*ConditionalAction)();
typedef void (*DurationActivity)(float, Action, Action);
typedef void*(*Exchanger)(void*);
typedef void(*ObjectDecimalAction)(void*, float);
typedef void(*SingleObjectAction)(void*);
typedef void*(*ObjectActionBlockObjectFunction)(SingleObjectAction);
typedef void(*ViewShortColorAction)(void*, Rgb);
typedef void(*ViewModeAction)(void*, TextFieldViewMode);
typedef float(*ObjectDecimalDecimalFunction)(void*, float);
typedef void*(*DoubleObjectObjectFunction)(void*, void*);
typedef void*(*ObjectDecimalObjectFunction)(void*, float);
typedef float(*DoubleObjectDecimalFunction)(void*, void*);
typedef int(*ObjectNumberNumberFunction)(void*, int);
typedef void*(*NumberObjectFunction)(int);
typedef void*(*ObjectNumberObjectFunction)(void*, int);
typedef float(*ObjectWholeNumberDecimalFunction)(void*, unsigned int);
typedef void*(*ObjectWholeNumberObjectFunction)(void*, unsigned int);
typedef int(*ObjectNumberFunction)(void*);
typedef void*(*DoubleObjectObjectFunction)(void*, void*);
typedef void*(*TableViewCreator)(void*, Frame, TableViewStyle);
typedef void(*ObjectToggler)(void*, Bools);
typedef void(*DoubleObjectConditionalAction)(void*, void*, Bools);
typedef void(*InsetSetter)(void*, EdgeInsets);
typedef void*(*AccessoryProducer)(CellAccessory);
typedef void(*SelectionStyleAction)(void*, TableViewSelectionStyle);
typedef void(*MarginSetter)(void*, LayoutMargins);
typedef void(*ObjectActionBlockAction)(void*, SingleObjectAction);
typedef Bools(*ObjectPredicate)(void*);
typedef void*(*LabelCreator)(Frame, void*, unsigned int);
typedef unsigned int(*ObjectWholeNumberFunction)(void*);
typedef long(*ObjectLongNumberFunction)(void*);
typedef void*(*CustomControlCreator)(Frame, SingleObjectAction);
typedef void(*LineBreakSetter)(void*, LineBreakingMode);
typedef void*(*Supplier)();
typedef void*(*StringProcessor)(const char *);
typedef void*(*StringArrayProcessor)(const char **, unsigned int);
typedef void(*DecimalAction)(float);
typedef void(*NativeEventDelegate)(SingleObjectAction, void*);
typedef void(*ObjectWholeNumberAction)(void*, unsigned int);
typedef void(*ReverseViewFramer)(Frame, void*);
typedef void*(*InteractiveControlCreator)(Frame, void*);

#endif /* GlobalDefinitions_h */


