//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SYNotesActivationCommandSynapseImpl : NSObject
{
}

+ (void)_activateWithActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007aec
+ (void)activateWithDomainIdentifier:(id)arg1 noteIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000079ad
+ (void)activateWithMetaActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000799b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
