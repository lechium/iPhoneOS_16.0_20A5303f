//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface LiveServiceResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x00600000001763f0
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x0060000000176370
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x00600000001762f0
+ (id)confirmationRequiredWithLiveServiceToConfirm:(id)arg1;	// IMP=0x0060000000176260
+ (id)disambiguationWithLiveServicesToDisambiguate:(id)arg1;	// IMP=0x00600000001761f0
+ (id)successWithResolvedLiveService:(id)arg1;	// IMP=0x00600000001761a0
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x0000000000176560

@end

