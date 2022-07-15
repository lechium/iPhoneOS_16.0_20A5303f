//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class Caller, NSData;

@interface AllowedTransfer : NSObject
{
    Caller *_sender;	// 8 = 0x8
    NSData *_serverToken;	// 16 = 0x10
    NSData *_receiverAuditTokenData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000003181
- (_Bool)isReceiver:(id)arg1 allowedToConnectWithServerToken:(id)arg2 senderAuditTokenData:(id)arg3;	// IMP=0x00100000000030e1
- (id)description;	// IMP=0x0010000000002f84
- (id)initWithSender:(id)arg1;	// IMP=0x0010000000002f19
- (id)initWithServerToken:(id)arg1 sender:(id)arg2;	// IMP=0x0010000000002eba
- (id)initWithReceiverAuditTokenData:(id)arg1 sender:(id)arg2;	// IMP=0x0010000000002e5b

@end
