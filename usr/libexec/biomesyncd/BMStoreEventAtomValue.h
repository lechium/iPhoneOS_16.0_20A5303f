//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface BMStoreEventAtomValue : NSObject
{
    unsigned int _dataVersion;	// 8 = 0x8
    NSData *_eventData;	// 16 = 0x10
    double _dataTimestamp;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000027f47
- (void).cxx_destruct;	// IMP=0x002000000002817e
@property(readonly, nonatomic) double dataTimestamp; // @synthesize dataTimestamp=_dataTimestamp;
@property(readonly, nonatomic) unsigned int dataVersion; // @synthesize dataVersion=_dataVersion;
@property(readonly, nonatomic) NSData *eventData; // @synthesize eventData=_eventData;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002802a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000027f4f
- (id)proto;	// IMP=0x0010000000027ebb
- (id)initWithProto:(id)arg1;	// IMP=0x0010000000027d44
- (id)initWithEventData:(id)arg1 dataVersion:(unsigned int)arg2 dataTimestamp:(double)arg3;	// IMP=0x0010000000027cbf

@end
