//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKScrollingNodeScrollViewDelegate : NSObject
{
    void *_scrollingTreeNodeDelegate;	// 8 = 0x8
    _Bool _inUserInteraction;	// 16 = 0x10
}

@property(nonatomic, getter=_isInUserInteraction) _Bool inUserInteraction; // @synthesize inUserInteraction=_inUserInteraction;
- (void)cancelPointersForGestureRecognizer:(id)arg1;	// IMP=0x00000000003d23ff
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;	// IMP=0x00000000003d23cb
- (void)_scrollView:(id)arg1 asynchronouslyHandleScrollEvent:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003d2374
- (struct CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint)arg2 translation:(struct CGPoint)arg3 startPoint:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5 horizontalVelocity:(inout double *)arg6 verticalVelocity:(inout double *)arg7;	// IMP=0x00000000003d222e
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000003d21ff
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000003d217e
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000000003d20f9
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000003d1d0c
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000003d1c93
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000003d1bc2
- (id)_actingParentScrollViewForScrollView:(id)arg1;	// IMP=0x00000000003d1b8c
- (id)initWithScrollingTreeNodeDelegate:(void *)arg1;	// IMP=0x00000000003d1b4f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

