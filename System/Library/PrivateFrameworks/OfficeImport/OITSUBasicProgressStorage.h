//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUBasicProgressStorage : NSObject
{
    double mValue;	// 8 = 0x8
    double mMaxValue;	// 16 = 0x10
    _Bool mIndeterminate;	// 24 = 0x18
}

@property(getter=isIndeterminate) _Bool indeterminate; // @synthesize indeterminate=mIndeterminate;
@property double maxValue; // @synthesize maxValue=mMaxValue;
@property double value; // @synthesize value=mValue;

@end
