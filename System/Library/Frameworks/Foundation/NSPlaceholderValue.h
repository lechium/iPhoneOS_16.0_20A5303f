//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSNumber.h"

__attribute__((visibility("hidden")))
@interface NSPlaceholderValue : NSNumber
{
    struct _NSZone *zoneForInstance;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000005abc59
- (void)getValue:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x00000000005abd40
- (void)getValue:(void *)arg1;	// IMP=0x00000000005abcde
- (const char *)objCType;	// IMP=0x00000000005abc79
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005abc61
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;	// IMP=0x00000000005abc3b
- (id)init;	// IMP=0x00000000005abc33
- (void)dealloc;	// IMP=0x00000000005abc2d
- (_Bool)_tryRetain;	// IMP=0x00000000005abc25
- (_Bool)_isDeallocating;	// IMP=0x00000000005abc1d
- (oneway void)release;	// IMP=0x00000000005abc17
- (unsigned long long)retainCount;	// IMP=0x00000000005abc0a
- (id)retain;	// IMP=0x00000000005abc01
- (id)autorelease;	// IMP=0x00000000005abbf8

@end
