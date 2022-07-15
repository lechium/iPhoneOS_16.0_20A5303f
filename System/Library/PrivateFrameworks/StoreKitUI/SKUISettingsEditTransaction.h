//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableSet, NSSet;
@protocol SKUISettingsEditTransactionDelegate;

__attribute__((visibility("hidden")))
@interface SKUISettingsEditTransaction : NSObject
{
    NSSet *_all;	// 8 = 0x8
    CDUnknownBlockType _commitBlock;	// 16 = 0x10
    NSLock *_lock;	// 24 = 0x18
    NSMutableSet *_pending;	// 32 = 0x20
    _Bool _success;	// 40 = 0x28
    id <SKUISettingsEditTransactionDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002b36dd
@property(nonatomic) __weak id <SKUISettingsEditTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_settingDescription:(id)arg1 completedWithSuccess:(_Bool)arg2;	// IMP=0x00000000002b360f
- (void)_finalizeCommit;	// IMP=0x00000000002b3588
- (void)_delegateWillCommitTransaction;	// IMP=0x00000000002b34ea
- (void)_delegateWillBeginTransaction;	// IMP=0x00000000002b344c
- (void)_delegateDidFailTransaction;	// IMP=0x00000000002b33ae
- (void)_delegateDidCompleteTransaction;	// IMP=0x00000000002b3310
- (void)rollbackTransaction;	// IMP=0x00000000002b3196
- (_Bool)isValid;	// IMP=0x00000000002b305b
- (_Bool)isCommiting;	// IMP=0x00000000002b3005
- (void)commitTransaction;	// IMP=0x00000000002b2d1d
- (void)cancelTransaction;	// IMP=0x00000000002b2ba3
- (void)beginTransaction;	// IMP=0x00000000002b2a5f
- (id)initWithSettingDescriptions:(id)arg1;	// IMP=0x00000000002b29b0

@end
