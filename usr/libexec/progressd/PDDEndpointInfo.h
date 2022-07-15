//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDDPEndpointConfig;

@interface PDDEndpointInfo : NSObject
{
    double _lastSuccessTime;	// 8 = 0x8
    double _lastFailureTime;	// 16 = 0x10
    long long _failureCounter;	// 24 = 0x18
    PDDPEndpointConfig *_config;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000080b83
- (void).cxx_destruct;	// IMP=0x0020000000080be6
@property(retain, nonatomic) PDDPEndpointConfig *config; // @synthesize config=_config;
@property(nonatomic) long long failureCounter; // @synthesize failureCounter=_failureCounter;
@property(nonatomic) double lastFailureTime; // @synthesize lastFailureTime=_lastFailureTime;
@property(nonatomic) double lastSuccessTime; // @synthesize lastSuccessTime=_lastSuccessTime;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000080adc
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000080a04
- (_Bool)requiresMescal;	// IMP=0x00100000000808d4
- (_Bool)needsCooldown;	// IMP=0x0010000000080730
- (_Bool)isExpired;	// IMP=0x0010000000080604
- (id)dictionaryRepresentation;	// IMP=0x0010000000080201
- (id)identifier;	// IMP=0x00100000000801b1
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000007fc58
- (id)initWithEndpointConfig:(id)arg1;	// IMP=0x001000000007fbde

@end
