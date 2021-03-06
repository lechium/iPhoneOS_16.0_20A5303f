//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITapGestureRecognizer.h>

@class NSString;

@interface AKTapGestureRecognizer : UITapGestureRecognizer
{
    _Bool _penGestureDetected;	// 8 = 0x8
}

@property(nonatomic) _Bool penGestureDetected; // @synthesize penGestureDetected=_penGestureDetected;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000036879
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003684a
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000367c0
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000036736
- (void)_checkTouchesForStylus:(id)arg1;	// IMP=0x00000000000366d4
- (void)reset;	// IMP=0x0000000000036694

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

