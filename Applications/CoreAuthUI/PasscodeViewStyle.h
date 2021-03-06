//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PasscodeViewStyle : NSObject
{
    long long _rawValue;	// 8 = 0x8
    long long _backgroundStyle;	// 16 = 0x10
}

+ (id)lightStyleWithBackgroundStyle:(long long)arg1;	// IMP=0x004000000001fd56
+ (id)darkStyleWithBackgroundStyle:(long long)arg1;	// IMP=0x001000000001fd1e
+ (id)defaultStyleWithBackgroundStyle:(long long)arg1;	// IMP=0x001000000001fd0c
@property(readonly, nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(readonly, nonatomic) long long rawValue; // @synthesize rawValue=_rawValue;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001fd91
- (id)initWithRawValue:(long long)arg1 backgroundStyle:(long long)arg2;	// IMP=0x001000000001fcc4

@end

