//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKReloadFrameErrorRecoveryAttempter : NSObject
{
    struct WeakObjCPtr<WKWebView> _webView;	// 8 = 0x8
    struct RetainPtr<_WKFrameHandle> _frameHandle;	// 16 = 0x10
    struct String _urlString;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000373ebc
- (id).cxx_construct;	// IMP=0x0000000000373f16
- (void).cxx_destruct;	// IMP=0x0000000000373ec4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000373e8d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000373e87
- (_Bool)attemptRecovery;	// IMP=0x0000000000373d86
- (id)initWithWebView:(id)arg1 frameHandle:(id)arg2 urlString:(const void *)arg3;	// IMP=0x0000000000373cfb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

