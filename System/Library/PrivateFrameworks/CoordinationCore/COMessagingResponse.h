//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshResponse.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface COMessagingResponse : COMeshResponse
{
    NSData *_payload;	// 8 = 0x8
    NSString *_payloadType;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000050dd
- (void).cxx_destruct;	// IMP=0x0000000000005129
@property(copy, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
@property(copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005009
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004eb1

@end

