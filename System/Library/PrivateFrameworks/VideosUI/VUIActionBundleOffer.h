//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIActionBundleOffer
{
    NSString *_offerURLString;	// 8 = 0x8
    NSString *_offerDomain;	// 16 = 0x10
    NSString *_notificationTitle;	// 24 = 0x18
    NSString *_notificationBundleTitle;	// 32 = 0x20
    NSString *_notificationBody;	// 40 = 0x28
    NSDictionary *_offerMetrics;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000132f8
@property(retain, nonatomic) NSDictionary *offerMetrics; // @synthesize offerMetrics=_offerMetrics;
@property(retain, nonatomic) NSString *notificationBody; // @synthesize notificationBody=_notificationBody;
@property(retain, nonatomic) NSString *notificationBundleTitle; // @synthesize notificationBundleTitle=_notificationBundleTitle;
@property(retain, nonatomic) NSString *notificationTitle; // @synthesize notificationTitle=_notificationTitle;
@property(retain, nonatomic) NSString *offerDomain; // @synthesize offerDomain=_offerDomain;
@property(retain, nonatomic) NSString *offerURLString; // @synthesize offerURLString=_offerURLString;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012e51
- (_Bool)isAccountRequired;	// IMP=0x0000000000012e49
- (id)initWithContextData:(id)arg1;	// IMP=0x0000000000012ccf

@end
