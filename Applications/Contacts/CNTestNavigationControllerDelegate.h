//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol UINavigationControllerDelegate;

@interface CNTestNavigationControllerDelegate : NSObject
{
    id <UINavigationControllerDelegate> _delegate;	// 8 = 0x8
    CDUnknownBlockType _willShow;	// 16 = 0x10
    CDUnknownBlockType _didShow;	// 24 = 0x18
}

+ (id)delegateWithDelegate:(id)arg1 willShowViewControllerHandler:(CDUnknownBlockType)arg2 didShowViewControllerHandler:(CDUnknownBlockType)arg3;	// IMP=0x00200000000092a3
- (void).cxx_destruct;	// IMP=0x00200000000095c1
@property(copy, nonatomic) CDUnknownBlockType didShow; // @synthesize didShow=_didShow;
@property(copy, nonatomic) CDUnknownBlockType willShow; // @synthesize willShow=_willShow;
@property(retain, nonatomic) id <UINavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00100000000094f1
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x001000000000948d
- (_Bool)_selfReallyRespondsToSelector:(SEL)arg1;	// IMP=0x0010000000009453
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000000093d3
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000009353

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

