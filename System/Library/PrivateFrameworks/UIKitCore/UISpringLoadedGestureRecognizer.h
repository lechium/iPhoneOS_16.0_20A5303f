//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface UISpringLoadedGestureRecognizer
{
}

- (void)spring;	// IMP=0x000000000061d631
- (void)_draggingEndedWithEvent:(id)arg1;	// IMP=0x000000000061d5f3
- (void)_draggingExitedWithEvent:(id)arg1;	// IMP=0x000000000061d5b5
- (void)_draggingUpdatedWithEvent:(id)arg1;	// IMP=0x000000000061d59e
- (void)_draggingEnteredWithEvent:(id)arg1;	// IMP=0x000000000061d587
- (_Bool)shouldReceiveEvent:(id)arg1;	// IMP=0x000000000061d505
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x000000000061d43e
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x000000000061d3cb
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x000000000061d358

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
