//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQDWPLineSpacing : NSObject
{
    int mMode;	// 8 = 0x8
    float mAmount;	// 12 = 0xc
}

+ (const struct StateSpec *)stateForReading;	// IMP=0x001000000002062b
- (float)amount;	// IMP=0x0000000000020683
- (int)mode;	// IMP=0x000000000002067a
- (id)init;	// IMP=0x0000000000020638
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;	// IMP=0x000000000002068e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

