//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSPersonaWithAttributes : NSObject
{
    NSString *_personaUniqueString;	// 8 = 0x8
    unsigned long long _personaType;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001680ef
- (void).cxx_destruct;	// IMP=0x000000000016811b
- (unsigned long long)hash;	// IMP=0x00000000001680ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000168045
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000167fd8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000167efa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000167eef

@end
