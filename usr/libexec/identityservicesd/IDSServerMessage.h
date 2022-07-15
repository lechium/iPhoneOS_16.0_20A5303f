//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSMessage.h>

@class NSDictionary;

@interface IDSServerMessage : IDSMessage
{
    long long _command;	// 264 = 0x108
    NSDictionary *_payload;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x002000000042f2c0
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(nonatomic) long long command; // @synthesize command=_command;
- (_Bool)wantsBinaryPush;	// IMP=0x001000000042f1f0
- (id)messageBody;	// IMP=0x001000000042eff0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000042ef30
- (id)initWithPayload:(id)arg1 command:(id)arg2;	// IMP=0x001000000042ee00

@end
