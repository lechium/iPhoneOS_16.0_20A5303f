//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebFetchCardDataAction
{
    NSString *_merchantID;	// 8 = 0x8
    NSString *_storeFrontCountryCode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000083cf8
@property(retain, nonatomic) NSString *storeFrontCountryCode; // @synthesize storeFrontCountryCode=_storeFrontCountryCode;
@property(retain, nonatomic) NSString *merchantID; // @synthesize merchantID=_merchantID;
- (id)runAction;	// IMP=0x00000000000831c0
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000008307c

@end

