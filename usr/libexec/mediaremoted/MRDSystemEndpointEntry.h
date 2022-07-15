//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface MRDSystemEndpointEntry : NSObject
{
    NSString *_outputDeviceUID;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
    long long _event;	// 32 = 0x20
    NSString *_eventReason;	// 40 = 0x28
    NSString *_selectionReason;	// 48 = 0x30
    long long _changeType;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000001ecd
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(retain, nonatomic) NSString *selectionReason; // @synthesize selectionReason=_selectionReason;
@property(retain, nonatomic) NSString *eventReason; // @synthesize eventReason=_eventReason;
@property(nonatomic) long long event; // @synthesize event=_event;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *outputDeviceUID; // @synthesize outputDeviceUID=_outputDeviceUID;
- (id)description;	// IMP=0x0010000000001ce0

@end
