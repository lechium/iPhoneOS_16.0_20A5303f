//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAIntentGroupResolveAppForIntent.h>

@interface SAIntentGroupResolveAppForIntent (INSExtensionService)
- (_Bool)ins_shouldUseExtendedFlowTimeout;	// IMP=0x00600000000027fb
- (long long)ins_analyticsEndEventType;	// IMP=0x00600000000027f0
- (long long)ins_analyticsBeginEventType;	// IMP=0x00600000000027e5
- (void)ins_resolveAppForIntent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0060000000002607
- (void)ins_setJSONEncodedIntent:(id)arg1;	// IMP=0x00600000000025f5
- (void)ins_setProtobufEncodedIntent:(id)arg1;	// IMP=0x00600000000025e3
- (id)ins_protobufEncodedIntent;	// IMP=0x00600000000025d1
- (id)ins_jsonEncodedIntent;	// IMP=0x00600000000025bf
@end

