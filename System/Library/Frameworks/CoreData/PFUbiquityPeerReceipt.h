//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, PFUbiquityKnowledgeVector;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerReceipt
{
    PFUbiquityKnowledgeVector *_kv;	// 88 = 0x58
    NSDate *_writeDate;	// 96 = 0x60
}

- (_Bool)writeFileToLocation:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000303e24
- (_Bool)loadFileFromLocation:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003037ba
- (id)description;	// IMP=0x0000000000303757
- (void)dealloc;	// IMP=0x00000000003036ec
- (id)initWithLocalPeerID:(id)arg1 andReceiptFileLocation:(id)arg2;	// IMP=0x0000000000303695
- (id)initWithLocalPeerID:(id)arg1 andKnowledgeVector:(id)arg2 forPeerID:(id)arg3 storeName:(id)arg4 modelVersionHash:(id)arg5 andUbiquityRootLocation:(id)arg6;	// IMP=0x000000000030363d
- (id)initWithLocalPeerID:(id)arg1 receiptPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 andUbiquityRootLocation:(id)arg5;	// IMP=0x00000000003035de
- (id)init;	// IMP=0x000000000030357c

@end

