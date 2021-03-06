//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSUUID;

__attribute__((visibility("hidden")))
@interface COAlarmDeleteEvent : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000c186
- (void).cxx_destruct;	// IMP=0x000000000000c233
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (long long)compare:(id)arg1;	// IMP=0x000000000000c18e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000c0d8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000bffe
- (id)initWithIdentifier:(id)arg1 date:(id)arg2;	// IMP=0x000000000000bf65

@end

