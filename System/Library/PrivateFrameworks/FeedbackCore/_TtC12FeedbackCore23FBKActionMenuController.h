//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12FeedbackCore23FBKActionMenuController : NSObject
{
    MISSING_TYPE *actions;	// 8 = 0x8
    MISSING_TYPE *title;	// 16 = 0x10
    MISSING_TYPE *subtitle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e2250
- (id)init;	// IMP=0x00000000000e2200
- (void)attachToBarButtonItem:(id)arg1;	// IMP=0x00000000000e2190
- (id)buildMenu;	// IMP=0x00000000000e2150
- (void)addAction:(id)arg1;	// IMP=0x00000000000e1c20
- (void)addActionWithTitle:(id)arg1 image:(id)arg2 actionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e1ab0
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 actions:(id)arg3;	// IMP=0x00000000000e19f0

@end
