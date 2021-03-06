//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSURLSession;
@protocol AMSMediaTokenServiceProtocol;

__attribute__((visibility("hidden")))
@interface AMSMediaSharedProperties : NSObject
{
    AMSURLSession *_session;	// 8 = 0x8
    id <AMSMediaTokenServiceProtocol> _tokenService;	// 16 = 0x10
}

+ (id)sharedPropertiesMapTable;	// IMP=0x00400000001cf3a2
+ (id)accessQueue;	// IMP=0x00400000001cf346
+ (id)_propertiesForClientIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3 clientInfo:(id)arg4 URLKnownToBeTrusted:(_Bool)arg5;	// IMP=0x00400000001cef48
+ (id)propertiesForUserNotificationSettingsTask:(id)arg1;	// IMP=0x00400000001cec83
+ (id)propertiesForStorefrontsTask:(id)arg1;	// IMP=0x00400000001cebce
+ (id)propertiesForRatingsTask:(id)arg1;	// IMP=0x00400000001ceb19
+ (id)propertiesForMercuryCacheFetchTask:(id)arg1;	// IMP=0x00400000001cea17
+ (id)propertiesForMediaTask:(id)arg1;	// IMP=0x00400000001ce900
+ (id)propertiesForMarketingItemTask:(id)arg1;	// IMP=0x00400000001ce7fe
- (void).cxx_destruct;	// IMP=0x00000000001cf4bd
@property(readonly, nonatomic) id <AMSMediaTokenServiceProtocol> tokenService; // @synthesize tokenService=_tokenService;
@property(readonly, nonatomic) AMSURLSession *session; // @synthesize session=_session;
- (void)dealloc;	// IMP=0x00000000001cf43e
- (id)_initWithClientIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3 clientInfo:(id)arg4 URLKnownToBeTrusted:(_Bool)arg5;	// IMP=0x00000000001ced85

@end

