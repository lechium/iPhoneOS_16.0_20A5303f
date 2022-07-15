//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObject.h>

@class NSArray, NSString;

@interface INObject (WFNaming)
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)wf_initWithIdentifier:(id)arg1 displayString:(id)arg2;	// IMP=0x00200000000bf1c9
- (void)wf_transformUsingCodableAttribute:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x002000000020423a

// Remaining properties
@property(readonly, nonatomic) NSArray *alternativeSpeakableMatches;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *pronunciationHint;
@property(readonly, nonatomic) NSString *spokenPhrase;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *vocabularyIdentifier;
@end
