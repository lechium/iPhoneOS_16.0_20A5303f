//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAIntentGroupLaunchAppWithIntent.h>

@interface SAIntentGroupLaunchAppWithIntent (INSExtensionService)
- (long long)ins_analyticsEndEventType;	// IMP=0x0060000000004f22
- (long long)ins_analyticsBeginEventType;	// IMP=0x0060000000004f17
- (void)ins_launchAppWithConnection:(id)arg1 delegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0060000000004b04
- (id)ins_protobufEncodedIntentResponse;	// IMP=0x0060000000004af2
- (id)ins_jsonEncodedIntentResponse;	// IMP=0x0060000000004ae0
- (void)ins_setJSONEncodedIntent:(id)arg1;	// IMP=0x0060000000004ace
- (void)ins_setProtobufEncodedIntent:(id)arg1;	// IMP=0x0060000000004abc
- (id)ins_protobufEncodedIntent;	// IMP=0x0060000000004aaa
- (id)ins_jsonEncodedIntent;	// IMP=0x0060000000004a98
@end

