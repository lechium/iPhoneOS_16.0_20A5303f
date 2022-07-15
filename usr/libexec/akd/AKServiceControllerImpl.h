//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AKAuthHandler, AKURLRequestProvider;

@interface AKServiceControllerImpl : NSObject
{
    id <AKURLRequestProvider> _requestProvider;	// 8 = 0x8
    id <AKAuthHandler> _reauthHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000062d46
- (void)_executeRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000062aa5
- (void)executeRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000625f0
- (void)setAuthenticationDelegate:(id)arg1;	// IMP=0x00100000000625df
- (id)initWithRequestProvider:(id)arg1;	// IMP=0x0010000000062585

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
