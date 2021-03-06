//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface InteractiveRequestPresenter : NSObject
{
}

- (void)presentEngagementRequest:(id)arg1 withClientInfo:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00200000001b0456
- (void)presentDialogRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b010c
- (void)presentAuthenticateRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001afda0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

