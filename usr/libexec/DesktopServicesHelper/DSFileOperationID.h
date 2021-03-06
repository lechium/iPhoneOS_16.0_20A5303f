//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface DSFileOperationID : NSObject
{
    NSUUID *_uuid;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000025bcd
- (void).cxx_destruct;	// IMP=0x0020000000025df5
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000025d6b
- (unsigned long long)hash;	// IMP=0x0010000000025d55
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000025c60
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000025bd5
- (id)initWithUUID:(id)arg1;	// IMP=0x0010000000025b4e
- (id)init;	// IMP=0x0010000000025ada

@end

