//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CHRecognitionSessionVersion : NSObject
{
    long long _sessionVersion;	// 8 = 0x8
    long long _sessionResultVersion;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000014ddc0
@property(readonly, nonatomic) long long sessionResultVersion; // @synthesize sessionResultVersion=_sessionResultVersion;
@property(readonly, nonatomic) long long sessionVersion; // @synthesize sessionVersion=_sessionVersion;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000014dd10
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000014dc90
- (_Bool)isValidSessionResultVersion;	// IMP=0x000000000014dc80
- (_Bool)isValidSessionVersion;	// IMP=0x000000000014dc70
- (id)initWithSessionVersion:(long long)arg1 sessionResultVersion:(long long)arg2;	// IMP=0x000000000014dc20

@end

