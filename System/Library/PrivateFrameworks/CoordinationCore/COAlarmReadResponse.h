//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshResponse.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface COAlarmReadResponse : COMeshResponse
{
    _Bool _filtered;	// 8 = 0x8
    NSArray *_alarms;	// 16 = 0x10
    NSArray *_deletes;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000000befa
- (void).cxx_destruct;	// IMP=0x000000000000bf34
@property(readonly, copy, nonatomic) NSArray *deletes; // @synthesize deletes=_deletes;
@property(readonly, nonatomic, getter=isFiltered) _Bool filtered; // @synthesize filtered=_filtered;
@property(readonly, copy, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000bdf4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000bb03
- (id)initWithAlarms:(id)arg1 deletes:(id)arg2;	// IMP=0x000000000000ba90
- (id)initWithFilteredAlarms:(id)arg1;	// IMP=0x000000000000ba6d
- (id)initWithAlarms:(id)arg1;	// IMP=0x000000000000ba09
- (id)init;	// IMP=0x000000000000b9ac

@end

