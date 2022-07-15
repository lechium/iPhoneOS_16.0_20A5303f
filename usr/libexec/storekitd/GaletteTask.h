//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSBundleRecord, NSString, NSURL, _TtC9storekitd6Client;

@interface GaletteTask
{
    _Bool _shouldPresentSheet;	// 8 = 0x8
    _Bool _isAllowed;	// 9 = 0x9
    NSString *_logKey;	// 16 = 0x10
    _TtC9storekitd6Client *_client;	// 24 = 0x18
    LSBundleRecord *_bundleRecord;	// 32 = 0x20
    long long _mode;	// 40 = 0x28
    NSURL *_targetURL;	// 48 = 0x30
}

+ (id)_unavailableInStorefrontErrorWithUnderlyingError:(id)arg1;	// IMP=0x00400000000395af
+ (id)taskWithClient:(id)arg1 bundleRecord:(id)arg2 mode:(long long)arg3 presentSheet:(_Bool)arg4;	// IMP=0x001000000003908e
- (void).cxx_destruct;	// IMP=0x002000000003a258
@property(readonly, nonatomic) _Bool isAllowed; // @synthesize isAllowed=_isAllowed;
@property(readonly, nonatomic) NSURL *targetURL; // @synthesize targetURL=_targetURL;
@property(readonly, nonatomic) _Bool shouldPresentSheet; // @synthesize shouldPresentSheet=_shouldPresentSheet;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) LSBundleRecord *bundleRecord; // @synthesize bundleRecord=_bundleRecord;
@property(readonly, nonatomic) _TtC9storekitd6Client *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
- (id)_countryCodesWithError:(id *)arg1;	// IMP=0x0010000000039cf1
- (id)_clientData;	// IMP=0x0010000000039a69
- (void)_presentSheetWithURL:(id)arg1;	// IMP=0x00100000000395d2
- (void)main;	// IMP=0x00100000000391a9

@end
