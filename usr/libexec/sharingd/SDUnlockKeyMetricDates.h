//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface SDUnlockKeyMetricDates : NSObject
{
    NSDate *_started;	// 8 = 0x8
    NSDate *_keyExchangeResponseReceived;	// 16 = 0x10
    NSDate *_pillUpdated;	// 24 = 0x18
    NSDate *_confirmationReceived;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001df3be
@property(retain, nonatomic) NSDate *confirmationReceived; // @synthesize confirmationReceived=_confirmationReceived;
@property(retain, nonatomic) NSDate *pillUpdated; // @synthesize pillUpdated=_pillUpdated;
@property(retain, nonatomic) NSDate *keyExchangeResponseReceived; // @synthesize keyExchangeResponseReceived=_keyExchangeResponseReceived;
@property(retain, nonatomic) NSDate *started; // @synthesize started=_started;

@end
