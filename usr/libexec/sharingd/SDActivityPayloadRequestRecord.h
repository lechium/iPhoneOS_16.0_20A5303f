//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, RPCompanionLinkClient;

@interface SDActivityPayloadRequestRecord
{
    NSData *_advertisementPayload;	// 64 = 0x40
    NSString *_command;	// 72 = 0x48
    RPCompanionLinkClient *_linkClient;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000000c761
@property(retain, nonatomic) RPCompanionLinkClient *linkClient; // @synthesize linkClient=_linkClient;
@property(copy, nonatomic) NSString *command; // @synthesize command=_command;
@property(copy, nonatomic) NSData *advertisementPayload; // @synthesize advertisementPayload=_advertisementPayload;
- (id)description;	// IMP=0x001000000000c5a7
- (void)dealloc;	// IMP=0x001000000000c55e

@end
