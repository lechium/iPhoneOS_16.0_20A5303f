//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WebBundleConfiguration;
@protocol WebBundleManagerDelegate;

@interface WebBundleSchemaHandler : NSObject
{
    id <WebBundleManagerDelegate> _delegate;	// 8 = 0x8
    WebBundleConfiguration *_configuration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000005893cd
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;	// IMP=0x00100000005893c7
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;	// IMP=0x0010000000589011
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;	// IMP=0x0010000000588f7f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

