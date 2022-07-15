//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface BDSReadingHistoryStreakInfo : NSObject
{
    NSDate *_endDate;	// 8 = 0x8
    long long _length;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000309a2
- (void).cxx_destruct;	// IMP=0x0020000000030c17
@property(nonatomic) long long length; // @synthesize length=_length;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
- (id)description;	// IMP=0x0010000000030b6a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000030ae7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000030a4a
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000309aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000030825
- (id)initWithEndDate:(id)arg1 length:(long long)arg2;	// IMP=0x00100000000307af

@end
