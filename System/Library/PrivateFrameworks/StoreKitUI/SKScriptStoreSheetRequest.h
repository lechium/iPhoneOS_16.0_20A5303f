//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, WebScriptObject;

__attribute__((visibility("hidden")))
@interface SKScriptStoreSheetRequest : SUScriptObject
{
    long long _pageStyle;	// 72 = 0x48
    WebScriptObject *_productParameters;	// 80 = 0x50
    NSString *_productURL;	// 88 = 0x58
}

+ (void)initialize;	// IMP=0x0060000000018924
+ (id)webScriptNameForSelector:(SEL)arg1;	// IMP=0x0060000000018820
+ (id)webScriptNameForKey:(const char *)arg1;	// IMP=0x006000000001877a
- (void).cxx_destruct;	// IMP=0x0000000000018a07
- (id)scriptAttributeKeys;	// IMP=0x000000000001889d
- (id)attributeKeys;	// IMP=0x000000000001888b
- (id)_safeValueForValue:(id)arg1;	// IMP=0x00000000000186fd
@property(readonly) long long productPageStylePhone;
@property(readonly) long long productPageStylePad;
@property(readonly) long long productPageStyleBanner;
@property(readonly) long long productPageStyleAutomatic;
@property(retain) NSString *productURL;
@property(retain) WebScriptObject *productParameters;
@property long long productPageStyle;
- (id)_className;	// IMP=0x00000000000183f6
- (id)newNativeStorePageRequest;	// IMP=0x00000000000182b1

@end

