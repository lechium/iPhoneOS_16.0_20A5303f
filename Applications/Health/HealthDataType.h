//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObject.h>

@class NSNumber;

@interface HealthDataType : INObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000055850
- (id)initWithCoder:(id)arg1;	// IMP=0x0040000000055b40
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;	// IMP=0x0010000000055a30

// Remaining properties
@property(nonatomic, retain) NSNumber *dataTypeCode; // @dynamic dataTypeCode;

@end
