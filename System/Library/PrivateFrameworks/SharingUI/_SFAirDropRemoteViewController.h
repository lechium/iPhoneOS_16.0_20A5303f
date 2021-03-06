//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSString;
@protocol SFAirDropViewServiceHostProtocol;

__attribute__((visibility("hidden")))
@interface _SFAirDropRemoteViewController : _UIRemoteViewController
{
    id <SFAirDropViewServiceHostProtocol> _airDropHost;	// 8 = 0x8
}

+ (id)exportedInterface;	// IMP=0x001000000002c1d2
+ (id)serviceViewControllerInterface;	// IMP=0x001000000002c1b2
- (void).cxx_destruct;	// IMP=0x000000000002c3ef
@property(nonatomic) __weak id <SFAirDropViewServiceHostProtocol> airDropHost; // @synthesize airDropHost=_airDropHost;
- (void)airDropViewServiceDidRequestDismissal;	// IMP=0x000000000002c385
- (void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c2ff
- (void)airDropViewServiceDidFinishTransferWithSuccess:(_Bool)arg1;	// IMP=0x000000000002c2b3
- (void)airDropViewServiceDidStartTransfer;	// IMP=0x000000000002c276
- (void)airDropViewServiceWillStartTransferToRecipient:(id)arg1;	// IMP=0x000000000002c204
- (id)airDropExtensionService;	// IMP=0x000000000002c1f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

