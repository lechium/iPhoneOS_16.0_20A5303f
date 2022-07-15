//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVScrubbingGesturePlatformConfiguration : NSObject
{
    float _magnitude;	// 8 = 0x8
    float _nonLinearity;	// 12 = 0xc
}

+ (id)configurationWithMagnitude:(float)arg1 nonLinearity:(float)arg2;	// IMP=0x0060000000005650
+ (id)defaultConfiguration;	// IMP=0x006000000000562c
@property(readonly, nonatomic) float nonLinearity; // @synthesize nonLinearity=_nonLinearity;
@property(readonly, nonatomic) float magnitude; // @synthesize magnitude=_magnitude;

@end
