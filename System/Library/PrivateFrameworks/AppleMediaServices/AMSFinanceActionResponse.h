//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSURLTaskInfo, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSFinanceActionResponse : NSObject
{
    _Bool _shouldRetry;	// 8 = 0x8
    _Bool _tidContinue;	// 9 = 0x9
    ACAccount *_account;	// 16 = 0x10
    NSString *_creditString;	// 24 = 0x18
    long long _kind;	// 32 = 0x20
    AMSURLTaskInfo *_taskInfo;	// 40 = 0x28
    NSURL *_URL;	// 48 = 0x30
}

+ (id)_URLForCommerceUIFromURL:(id)arg1 taskInfo:(id)arg2 tidContinue:(_Bool)arg3;	// IMP=0x001000000018a82c
+ (_Bool)_isModernURL:(id)arg1 taskInfo:(id)arg2;	// IMP=0x001000000018a577
+ (id)_deepLinkForURL:(id)arg1 taskInfo:(id)arg2 gotoType:(long long)arg3 isAccountURL:(_Bool)arg4 tidContinue:(_Bool)arg5;	// IMP=0x001000000018a482
+ (id)_presentEngagementForURL:(id)arg1 taskInfo:(id)arg2;	// IMP=0x001000000018999f
+ (id)_bodyObjectFromRequest:(id)arg1;	// IMP=0x0010000000188ed0
+ (id)handleGotoURL:(id)arg1 taskInfo:(id)arg2 gotoType:(long long)arg3 accountURL:(_Bool)arg4 tidContinue:(_Bool)arg5 retryOnSuccess:(_Bool)arg6;	// IMP=0x00100000001888b9
+ (void)handleExternalGotoURL:(id)arg1;	// IMP=0x0010000000188752
+ (id)actionWithUpdatedCreditString:(id)arg1 account:(id)arg2 taskInfo:(id)arg3;	// IMP=0x001000000018868b
+ (id)actionWithActionDictionary:(id)arg1 taskInfo:(id)arg2;	// IMP=0x00100000001881ca
- (void).cxx_destruct;	// IMP=0x000000000018abd0
@property(nonatomic) _Bool tidContinue; // @synthesize tidContinue=_tidContinue;
@property(nonatomic) _Bool shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) AMSURLTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(nonatomic) long long kind; // @synthesize kind=_kind;
@property(retain, nonatomic) NSString *creditString; // @synthesize creditString=_creditString;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_handleGotoAction;	// IMP=0x00000000001896fe
- (id)_performOpenStandardURL;	// IMP=0x0000000000189674
- (id)_performGotoURL;	// IMP=0x000000000018946c
- (id)_performCreditDisplayUpdate;	// IMP=0x0000000000189168
- (id)performWithTaskInfo:(id)arg1;	// IMP=0x0000000000188e69
- (id)initWithTaskInfo:(id)arg1;	// IMP=0x0000000000188138

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
