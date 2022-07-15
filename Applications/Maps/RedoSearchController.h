//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RedoSearchMapState;

@interface RedoSearchController : NSObject
{
    RedoSearchMapState *_originalState;	// 8 = 0x8
    RedoSearchMapState *_currentState;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000052125e
@property(retain, nonatomic) RedoSearchMapState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) RedoSearchMapState *originalState; // @synthesize originalState=_originalState;
- (unsigned long long)numberOfVisibleSearchResults:(id)arg1;	// IMP=0x0010000000521061
- (_Bool)shouldTriggerSearchHereWithMinimumNumberOfVisiblePOIs:(unsigned long long)arg1 panDeltaThresholdInMeters:(double)arg2 zoomInPercentageThreshold:(double)arg3 zoomOutPercentageThreshold:(double)arg4 searchResults:(id)arg5;	// IMP=0x0010000000520ac0
- (_Bool)shouldTriggerAutoRedoWithThreshold:(id)arg1 searchResults:(id)arg2;	// IMP=0x00100000005209f6

@end
