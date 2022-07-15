//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVPresentationConfiguration : NSObject
{
    unsigned long long _transitionStyle;	// 8 = 0x8
    double _transitionDuration;	// 16 = 0x10
}

+ (id)configurationWithTransitionStyle:(unsigned long long)arg1 transitionDuration:(double)arg2;	// IMP=0x00600000000e39cc
@property(readonly, nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(readonly, nonatomic) unsigned long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;

@end
