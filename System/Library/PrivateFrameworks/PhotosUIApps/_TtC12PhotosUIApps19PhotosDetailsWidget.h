//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, PXPhotosDetailsContext, PXWidgetSpec;
@protocol PXAnonymousView, PXWidgetDelegate;

__attribute__((visibility("hidden")))
@interface _TtC12PhotosUIApps19PhotosDetailsWidget : NSObject
{
    MISSING_TYPE *widgetDelegate;	// 8 = 0x8
    MISSING_TYPE *_context;	// 16 = 0x10
    MISSING_TYPE *_viewModel;	// 24 = 0x18
    MISSING_TYPE *_spec;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000034d50
- (id)init;	// IMP=0x0000000000034cb0
@property(nonatomic, readonly) id <PXAnonymousView> contentView;
- (double)preferredContentHeightForWidth:(double)arg1;	// IMP=0x0000000000034bb0
@property(nonatomic, retain) PXWidgetSpec *spec;
@property(nonatomic, retain) PXPhotosDetailsContext *context;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate;

@end

