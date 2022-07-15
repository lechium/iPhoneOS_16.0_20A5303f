//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIImageView, UIStatusBarLockItemView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarLockItemPadlockView : UIView
{
    UIImageView *_bodyView;	// 184 = 0xb8
    UIImageView *_shackleView;	// 192 = 0xc0
    CDUnknownBlockType _completionBlock;	// 200 = 0xc8
    UIStatusBarLockItemView *_owner;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000000ef7581
@property(nonatomic) __weak UIStatusBarLockItemView *owner; // @synthesize owner=_owner;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) UIImageView *shackleView; // @synthesize shackleView=_shackleView;
@property(retain, nonatomic) UIImageView *bodyView; // @synthesize bodyView=_bodyView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000ef7497
- (void)jiggleCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ef6f06
- (void)animateUnlockCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ef69aa
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000ef6994
- (void)reset;	// IMP=0x0000000000ef6938
- (id)initWithFrame:(struct CGRect)arg1 owner:(id)arg2;	// IMP=0x0000000000ef65ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
