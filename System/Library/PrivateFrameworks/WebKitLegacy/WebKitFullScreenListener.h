//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebKitFullScreenListener : NSObject
{
    struct RefPtr<WebCore::Element, WTF::RawPtrTraits<WebCore::Element>, WTF::DefaultRefDerefTraits<WebCore::Element>> _element;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000000010d8e0
- (void).cxx_destruct;	// IMP=0x000000000010d8b0
- (void)webkitDidExitFullScreen;	// IMP=0x000000000010d880
- (void)webkitWillExitFullScreen;	// IMP=0x000000000010d850
- (void)webkitDidEnterFullScreen;	// IMP=0x000000000010d820
- (void)webkitWillEnterFullScreen;	// IMP=0x000000000010d7f0
- (id)initWithElement:(void *)arg1;	// IMP=0x000000000010d780

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
