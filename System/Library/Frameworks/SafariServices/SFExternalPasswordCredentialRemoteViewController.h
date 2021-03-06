//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol SFExternalPasswordCredentialRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFExternalPasswordCredentialRemoteViewController
{
}

+ (id)serviceViewControllerInterface;	// IMP=0x0010000000153d7e
+ (id)exportedInterface;	// IMP=0x0010000000153d5e
+ (id)passwordServiceViewControllerName;	// IMP=0x0010000000153d45
- (void)presentExternalPasswordCredentialRemoteViewController;	// IMP=0x0000000000153cf9
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000153cf1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SFExternalPasswordCredentialRemoteViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

