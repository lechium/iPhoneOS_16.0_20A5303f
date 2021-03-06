//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollections : NSObject
{
    NSMutableDictionary *_rules;	// 8 = 0x8
    NSMutableArray *_supportedPayloads;	// 16 = 0x10
    int _payload;	// 24 = 0x18
    unsigned char _transportType;	// 28 = 0x1c
    unsigned char _encodingType;	// 29 = 0x1d
}

+ (id)newCorrectedVideoRules:(id)arg1 payload:(int)arg2;	// IMP=0x00600000003f001c
@property(readonly) NSDictionary *rules; // @synthesize rules=_rules;
@property(readonly) NSArray *supportedPayloads; // @synthesize supportedPayloads=_supportedPayloads;
- (id)videoRulesCollectionsByRemovingPayload:(int)arg1 andPayload:(int)arg2 removeCellular:(_Bool)arg3;	// IMP=0x00000000003f15f1
@property(readonly, nonatomic) _Bool isDecodeSupported;
@property(readonly, nonatomic) _Bool isEncodeSupported;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f0fbd
- (_Bool)isPayloadSupported:(int)arg1;	// IMP=0x00000000003f0f5e
- (void)addSupportedPayload:(int)arg1;	// IMP=0x00000000003f0f06
- (void)limitVideoRulesToMaxWidth:(int)arg1 maxHeight:(int)arg2 transportType:(unsigned char)arg3;	// IMP=0x00000000003f0ba2
- (void)limitRulesFromVideoRules:(int)arg1 frameHeight:(int)arg2 videoRules:(id)arg3;	// IMP=0x00000000003f09fb
- (void)removeVideoRulesWithWidth:(int)arg1 height:(int)arg2 transportType:(unsigned char)arg3 encodingType:(unsigned char)arg4;	// IMP=0x00000000003f06a7
- (void)appendVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;	// IMP=0x00000000003f0458
- (void)addVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;	// IMP=0x00000000003f0316
@property(readonly, nonatomic) NSSet *supportedTransportTypes;
- (id)supportedVideoRulesForBitrate:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;	// IMP=0x00000000003efe1f
- (id)supportedVideoRulesSizesForBitrate:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;	// IMP=0x00000000003efd79
- (id)getVideoRulesForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3;	// IMP=0x00000000003efd05
- (id)description;	// IMP=0x00000000003efa03
- (id)supportedVideoSizesForKey:(id)arg1;	// IMP=0x00000000003ef7c4
- (id)supportedVideoRulesSyncForTransportType:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3;	// IMP=0x00000000003ef741
- (id)filterRules:(id)arg1 byBitrateRule:(id)arg2;	// IMP=0x00000000003ef475
- (void)dealloc;	// IMP=0x00000000003ef408
- (id)init;	// IMP=0x00000000003ef2d8

@end

