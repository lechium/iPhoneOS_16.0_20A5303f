//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SafariClearBrowsingDataController : NSObject
{
    NSArray *_availableIntervals;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000e7bce
@property(readonly) NSArray *availableIntervals; // @synthesize availableIntervals=_availableIntervals;
- (void)_clearBrowsingDataAddedAfterDate:(id)arg1;	// IMP=0x00000000000e7353
- (void)clearAllBrowsingData;	// IMP=0x00000000000e72b0
- (void)clearDataFromInterval:(id)arg1;	// IMP=0x00000000000e71af
- (id)init;	// IMP=0x00000000000e6d5b

@end

