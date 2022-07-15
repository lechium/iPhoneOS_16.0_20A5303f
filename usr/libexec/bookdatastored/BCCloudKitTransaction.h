//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BDSOSTransaction, BUCoalescingCallBlock, NSString;
@protocol BCCloudKitTransactionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface BCCloudKitTransaction : NSObject
{
    NSString *_entityName;	// 8 = 0x8
    BUCoalescingCallBlock *_coalescedNotification;	// 16 = 0x10
    BDSOSTransaction *_osTransaction;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_lifecycleAccessQueue;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_transactionLifetime;	// 40 = 0x28
    id <BCCloudKitTransactionDelegate> _delegate;	// 48 = 0x30
    long long _clientCount;	// 56 = 0x38
}

+ (id)transactionNameForEntityName:(id)arg1;	// IMP=0x004000000003104c
- (void).cxx_destruct;	// IMP=0x0020000000031699
@property(nonatomic) long long clientCount; // @synthesize clientCount=_clientCount;
@property(nonatomic) __weak id <BCCloudKitTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (void);	// IMP=0x001000000003164d
@property(retain, nonatomic) NSObject<OS_dispatch_source> *transactionLifetime; // @synthesize transactionLifetime=_transactionLifetime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lifecycleAccessQueue; // @synthesize lifecycleAccessQueue=_lifecycleAccessQueue;
@property(retain, nonatomic) BDSOSTransaction *osTransaction; // @synthesize osTransaction=_osTransaction;
@property(retain, nonatomic) BUCoalescingCallBlock *coalescedNotification; // @synthesize coalescedNotification=_coalescedNotification;
@property(copy, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
- (void)laq_scheduleTransactionLifetime;	// IMP=0x00100000000313f6
- (void)signal;	// IMP=0x0010000000031222
- (void)clientConnected;	// IMP=0x0010000000031116
- (double)transactionLifetimeTimout;	// IMP=0x0010000000031108
- (double)coalescingDelay;	// IMP=0x00100000000310fa
- (void)performWorkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000310cf
- (id)transactionName;	// IMP=0x0010000000031065
- (id)initWithEntityName:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000030c27

@end
