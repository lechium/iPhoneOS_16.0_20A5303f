//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@interface INIntent (ACSCardRequesting)
- (unsigned long long)servicePriorityForCardRequest:(id)arg1;	// IMP=0x0020000000002b8e
- (void)requestCard:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0020000000002a39
- (_Bool)acs_needsTitleCardSection;	// IMP=0x00200000000029ef
- (id)acs_utteranceForCardService;	// IMP=0x0020000000008c58
@end
