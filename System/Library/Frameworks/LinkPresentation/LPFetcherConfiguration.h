//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPEvent, WKWebView;

__attribute__((visibility("hidden")))
@interface LPFetcherConfiguration : NSObject
{
    _Bool _loadingIsNonAppInitiated;	// 8 = 0x8
    WKWebView *_webViewForProcessSharing;	// 16 = 0x10
    long long _maximumResponseCount;	// 24 = 0x18
    LPEvent *_rootEvent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002ede5
@property(retain, nonatomic) LPEvent *rootEvent; // @synthesize rootEvent=_rootEvent;
@property(nonatomic) long long maximumResponseCount; // @synthesize maximumResponseCount=_maximumResponseCount;
@property(nonatomic) _Bool loadingIsNonAppInitiated; // @synthesize loadingIsNonAppInitiated=_loadingIsNonAppInitiated;
@property(retain, nonatomic) WKWebView *webViewForProcessSharing; // @synthesize webViewForProcessSharing=_webViewForProcessSharing;
- (void)dealloc;	// IMP=0x000000000002ec58
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002eb5f

@end
