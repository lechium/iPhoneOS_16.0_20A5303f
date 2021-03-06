//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol UIScrollViewDelegate;

@interface ScrollViewDelegateForwarder : NSObject
{
    _Bool _respondsTo_scrollViewDidEndScrollingAnimation;	// 8 = 0x8
    id <UIScrollViewDelegate> _originalDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000005646db
@property(nonatomic) __weak id <UIScrollViewDelegate> originalDelegate; // @synthesize originalDelegate=_originalDelegate;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x0010000000564622
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x001000000056460c
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x001000000056458e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

