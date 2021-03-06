//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIPopoverController;

__attribute__((visibility("hidden")))
@interface SKUIPopoverObserver : NSObject
{
    UIPopoverController *_popoverController;	// 8 = 0x8
    SEL _selector;	// 16 = 0x10
    id _target;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000020a9eb
- (void)popoverControllerDidDismissPopover:(id)arg1;	// IMP=0x000000000020a97c
- (void)setTarget:(id)arg1 selector:(SEL)arg2;	// IMP=0x000000000020a945
- (void)dismissPopoverAnimated:(_Bool)arg1;	// IMP=0x000000000020a92f
- (void)dealloc;	// IMP=0x000000000020a8eb
- (id)initWithPopoverController:(id)arg1;	// IMP=0x000000000020a86c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

