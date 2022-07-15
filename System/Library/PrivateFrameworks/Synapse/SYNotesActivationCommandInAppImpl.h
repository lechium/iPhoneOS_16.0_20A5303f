//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SYNotesActivationCommandInAppImpl : NSObject
{
}

+ (void)_launchNotesWithUserActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000203dc
+ (void)_activateWithActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001feed
+ (void)activateWithDomainIdentifier:(id)arg1 noteIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001fdae
+ (void)activateWithMetaActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001fd9c
+ (void)setFetchPresenterViewControllerInvocationBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001fd13
+ (CDUnknownBlockType)fetchPresenterViewControllerInvocationBlock;	// IMP=0x001000000001fccf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
