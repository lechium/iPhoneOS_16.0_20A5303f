//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSAttSiriRequestContext : NSObject
{
    unsigned long long _reqSrc;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000006e5d
@property(nonatomic) unsigned long long reqSrc; // @synthesize reqSrc=_reqSrc;
- (id)description;	// IMP=0x0010000000006f40
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000006ed0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000006ead
- (id)initWithRequestSource:(unsigned long long)arg1;	// IMP=0x0010000000006e70
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000006e65

@end

