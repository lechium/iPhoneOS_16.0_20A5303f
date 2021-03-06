//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnectionListener, NSString, WFBannerManager;

@interface WFUIPresentationServer : NSObject
{
    BSServiceConnectionListener *_listener;	// 8 = 0x8
    WFBannerManager *_bannerManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000020a2
@property(readonly, nonatomic) WFBannerManager *bannerManager; // @synthesize bannerManager=_bannerManager;
@property(readonly, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x0010000000001efc
- (id)concretePresenter;	// IMP=0x0010000000001eea
- (void)start;	// IMP=0x0010000000001e3a
- (void)dealloc;	// IMP=0x0010000000001d05
- (id)init;	// IMP=0x0010000000001c9d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

