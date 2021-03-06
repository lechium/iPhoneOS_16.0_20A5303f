//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKViewController.h>

@class BKSApplicationStateMonitor, HKAuthorizationStore, NSError, UIAlertController;

@interface HKHealthPrivacyServiceRecalibrateEstimatesViewController : HKViewController
{
    HKAuthorizationStore *_authorizationStore;	// 8 = 0x8
    UIAlertController *_alertViewController;	// 16 = 0x10
    NSError *_transactionError;	// 24 = 0x18
    CDUnknownBlockType _requestCompletion;	// 32 = 0x20
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 40 = 0x28
}

+ (id)_exportedInterface;	// IMP=0x0020000000002104
+ (id)_remoteViewControllerInterface;	// IMP=0x00100000000020fa
- (void).cxx_destruct;	// IMP=0x00200000000021c4
@property(retain, nonatomic) BKSApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property(copy, nonatomic) CDUnknownBlockType requestCompletion; // @synthesize requestCompletion=_requestCompletion;
@property(retain, nonatomic) NSError *transactionError; // @synthesize transactionError=_transactionError;
@property(retain, nonatomic) UIAlertController *alertViewController; // @synthesize alertViewController=_alertViewController;
@property(retain, nonatomic) HKAuthorizationStore *authorizationStore; // @synthesize authorizationStore=_authorizationStore;
- (id)_healthPrivacyHostViewController;	// IMP=0x00100000000020e8
- (void)_finishWithError:(id)arg1;	// IMP=0x001000000000206d
- (void)_finishRequestWithError:(id)arg1;	// IMP=0x0010000000002011
- (void)_configureAlertControllerWithSourceName:(id)arg1 sampleType:(id)arg2 effectiveDate:(id)arg3;	// IMP=0x0010000000001987
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000001905
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000000187a
- (void)_hostDidTerminate;	// IMP=0x00100000000017fa
- (void)_configureApplicationStateMonitor;	// IMP=0x00100000000015d4
- (void)_hostApplicationStateDidChange:(unsigned int)arg1;	// IMP=0x0010000000001506
- (void)setRequestRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001352

@end

