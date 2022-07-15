//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebGeolocationPolicyListener : NSObject
{
    struct RefPtr<WebCore::Geolocation, WTF::RawPtrTraits<WebCore::Geolocation>, WTF::DefaultRefDerefTraits<WebCore::Geolocation>> _geolocation;	// 8 = 0x8
    struct RetainPtr<WebView> _webView;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000100bd0
- (void).cxx_destruct;	// IMP=0x0000000000100b70
- (_Bool)shouldClearCache;	// IMP=0x0000000000100b30
- (void)denyOnlyThisRequest;	// IMP=0x0000000000100ab0
- (void)deny;	// IMP=0x00000000001009e0
- (void)allow;	// IMP=0x0000000000100900
- (id)initWithGeolocation:(NakedPtr_331571b6)arg1 forWebView:(id)arg2;	// IMP=0x0000000000100850

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
