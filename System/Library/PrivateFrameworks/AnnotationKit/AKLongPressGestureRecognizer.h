//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILongPressGestureRecognizer.h>

@class NSString;

@interface AKLongPressGestureRecognizer : UILongPressGestureRecognizer
{
    _Bool _penGestureDetected;	// 8 = 0x8
}

@property(nonatomic) _Bool penGestureDetected; // @synthesize penGestureDetected=_penGestureDetected;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000ca0a5
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000ca076
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000c9fec
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000c9f62
- (void)_checkTouchesForStylus:(id)arg1;	// IMP=0x00000000000c9f00
- (void)reset;	// IMP=0x00000000000c9ec0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
