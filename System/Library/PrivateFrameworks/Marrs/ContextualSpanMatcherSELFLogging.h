//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ContextualSpanMatcherSELFLogging : NSObject
{
}

+ (_Bool)emitContextualSpanMatcherEndedEventWithResponse:(id)arg1 WithNlId:(id)arg2 andWithResultCandidateId:(id)arg3 andWithRequester:(int)arg4;	// IMP=0x008000000004aef5
+ (id)createContextualSpanMatcherEndedTier1Event:(id)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;	// IMP=0x008000000004acdd
+ (id)createContextualSpanMatcherEndedEvent:(id)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;	// IMP=0x008000000004aa94
+ (_Bool)emitEvent:(id)arg1;	// IMP=0x008000000004a860

@end
