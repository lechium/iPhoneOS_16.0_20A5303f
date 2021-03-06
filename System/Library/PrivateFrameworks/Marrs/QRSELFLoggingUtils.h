//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface QRSELFLoggingUtils : NSObject
{
}

+ (id)convertUUID:(id)arg1;	// IMP=0x008000000007cd70
+ (int)convertRewriteType:(int)arg1;	// IMP=0x008000000007cd55
+ (int)convertRepetitionType:(int)arg1;	// IMP=0x008000000007cd44
+ (int)convertMarrsErrorCode:(long long)arg1;	// IMP=0x008000000007cd21
+ (_Bool)emitRDFailedEventWithMetadata:(id)arg1 andErrorCode:(long long)arg2;	// IMP=0x008000000007cc03
+ (_Bool)emitCCQRFailedEventWithMetadata:(id)arg1 andErrorCode:(long long)arg2;	// IMP=0x008000000007cae5
+ (_Bool)emitQueryRewriteFailedEventWithMetadata:(id)arg1 andErrorCode:(long long)arg2 byPredictorType:(int)arg3;	// IMP=0x008000000007ca28
+ (_Bool)emitRDEvaluatedEventWithResponse:(struct QRResponse)arg1 andNLXMetadata:(id)arg2;	// IMP=0x008000000007c959
+ (_Bool)emitCCQREvaluatedEventWithResponse:(struct QRResponse)arg1 andNLXMetadata:(id)arg2;	// IMP=0x008000000007c786
+ (_Bool)emitQueryRewriteEvaluatedEventWithResponse:(struct QRResponse)arg1 andNLXMetadata:(id)arg2 byPredictorType:(int)arg3;	// IMP=0x008000000007c633
+ (_Bool)emitRDStartedEventWithMetadata:(id)arg1;	// IMP=0x008000000007c528
+ (_Bool)emitCCQRStartedEventWithMetadata:(id)arg1;	// IMP=0x008000000007c41d
+ (_Bool)emitQueryRewriteStartedEventWithMetadata:(id)arg1 byPredictorType:(int)arg2;	// IMP=0x008000000007c369
+ (id)createCCQRContextEvaluatedTier1Event:(struct QRResponse)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;	// IMP=0x008000000007c14f
+ (id)createRDContextEvaluatedEvent:(struct QRResponse)arg1 withNLXMetadata:(id)arg2;	// IMP=0x008000000007c013
+ (id)createCCQRContextEvaluatedEvent:(struct QRResponse)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;	// IMP=0x008000000007be01
+ (id)createRDContextEventWrapper:(id)arg1 withMetaData:(id)arg2;	// IMP=0x008000000007bd58
+ (id)createCCQRContextEventWrapper:(id)arg1 withMetaData:(id)arg2;	// IMP=0x008000000007bcaf
+ (id)createEventMetadataWithNlId:(id)arg1 andWithResultCandidateId:(id)arg2 andWithRequester:(int)arg3;	// IMP=0x008000000007bbd6
+ (void)emitEvent:(id)arg1;	// IMP=0x008000000007b932

@end

