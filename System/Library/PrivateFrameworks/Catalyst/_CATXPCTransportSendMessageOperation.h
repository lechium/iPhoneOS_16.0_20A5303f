//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CATOperation.h"

@class CATMessage, CATXPCTransport;

__attribute__((visibility("hidden")))
@interface _CATXPCTransportSendMessageOperation : CATOperation
{
    CATXPCTransport *_transport;	// 8 = 0x8
    CATMessage *_message;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000046aa5
@property(retain, nonatomic) CATMessage *message; // @synthesize message=_message;
@property(nonatomic) __weak CATXPCTransport *transport; // @synthesize transport=_transport;
- (void)didFailWithError:(id)arg1;	// IMP=0x0000000000046a09
- (void)didProcessMessage;	// IMP=0x00000000000469d0
- (void)main;	// IMP=0x00000000000468f2
- (_Bool)isAsynchronous;	// IMP=0x00000000000468ea

@end

