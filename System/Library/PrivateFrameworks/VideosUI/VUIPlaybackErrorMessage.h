//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface VUIPlaybackErrorMessage : NSObject
{
    NSURL *_knownIssuesURL;	// 8 = 0x8
    NSDictionary *_deviceInfo;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x006000000024248a
- (void).cxx_destruct;	// IMP=0x0000000000243bf3
@property(retain, nonatomic) NSDictionary *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) NSURL *knownIssuesURL; // @synthesize knownIssuesURL=_knownIssuesURL;
- (void)_logMetricsWithMessageType:(id)arg1 withSession:(id)arg2 withDevice:(id)arg3 withLanguageCode:(id)arg4;	// IMP=0x00000000002439ed
- (id)_getSessionInfoFor:(id)arg1 withError:(id)arg2;	// IMP=0x00000000002437de
- (id)_createQueryItemsFor:(id)arg1 withDevice:(id)arg2 withLanguageCode:(id)arg3;	// IMP=0x0000000000243354
- (void)_getLocalizedErrorMessageFrom:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000243004
- (void)_getBaseURL:(CDUnknownBlockType)arg1;	// IMP=0x0000000000242da5
- (id)_getLanguageCode;	// IMP=0x0000000000242d1d
- (void)getLocalizedErrorMessageFor:(id)arg1 withError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002426aa
- (id)init;	// IMP=0x00000000002424df

@end
