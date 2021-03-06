//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APClientInfo, APContext, NSString, NSUUID;
@protocol APIDAccount_Private;

@interface APAdRequester : NSObject
{
    _Bool _cancelled;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    APContext *_context;	// 32 = 0x20
    APClientInfo *_clientInfo;	// 40 = 0x28
    id <APIDAccount_Private> _idAccount;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000004d517
@property _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain) id <APIDAccount_Private> idAccount; // @synthesize idAccount=_idAccount;
@property(retain) APClientInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain) APContext *context; // @synthesize context=_context;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) NSUUID *identifier; // @synthesize identifier=_identifier;
- (_Bool)_handleAdValidationErrorDomainWithJourneyMetricsHelper:(id)arg1 code:(long long)arg2 internalContent:(id)arg3;	// IMP=0x001000000004d21b
- (void)checkForDiscards:(id)arg1;	// IMP=0x001000000004ce43
- (void)cancelRequest;	// IMP=0x001000000004cd7d
- (void)_updateAdsInCache:(id)arg1;	// IMP=0x001000000004cd77
- (void)_evictAllAdsFromCache;	// IMP=0x001000000004cd71
- (void)_evictAdsFromCache:(id)arg1;	// IMP=0x001000000004cd6b
- (void)requestAdsOfType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004cbcf
- (void)_handleAdType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004c306
- (id)initWithContext:(id)arg1 identifier:(id)arg2 andBundleID:(id)arg3 clientInfo:(id)arg4 idAccount:(id)arg5;	// IMP=0x001000000004c202

@end

