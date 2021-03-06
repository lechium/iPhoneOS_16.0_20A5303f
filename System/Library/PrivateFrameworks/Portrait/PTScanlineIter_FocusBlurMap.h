//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PTScanlineMask_FocusBlurMap;

__attribute__((visibility("hidden")))
@interface PTScanlineIter_FocusBlurMap : NSObject
{
    PTScanlineMask_FocusBlurMap *_mask;	// 8 = 0x8
    unsigned long long _currentTileRow;	// 16 = 0x10
    unsigned long long _currentTile;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004212e
@property unsigned long long currentTile; // @synthesize currentTile=_currentTile;
@property unsigned long long currentTileRow; // @synthesize currentTileRow=_currentTileRow;
@property(readonly) PTScanlineMask_FocusBlurMap *mask; // @synthesize mask=_mask;
- (void)_advanceToNextTile;	// IMP=0x0000000000041fdf
- (void)_advanceToNextTileRow;	// IMP=0x0000000000041ec4
- (void)reset;	// IMP=0x0000000000041e6a
- (void)resetX;	// IMP=0x0000000000041e2f
- (struct _NSRange)nextRangeX;	// IMP=0x0000000000041d10
- (struct _NSRange)nextRangeY;	// IMP=0x0000000000041c77
- (id)initWithMask:(id)arg1;	// IMP=0x0000000000041bfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

