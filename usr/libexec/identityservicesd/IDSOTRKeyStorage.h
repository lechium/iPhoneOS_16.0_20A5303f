//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMTimer, MISSING_TYPE, NSMutableDictionary, NSRecursiveLock;

@interface IDSOTRKeyStorage : NSObject
{
    NSRecursiveLock *_lock;	// 8 = 0x8
    NSMutableDictionary *_sessionKeyStorage;	// 16 = 0x10
    IMTimer *_purgeTimer;	// 24 = 0x18
    MISSING_TYPE *_saveTimer;	// 32 = 0x20
    CDUnknownBlockType _saveCancelBlock;	// 40 = 0x28
    CDUnknownBlockType _saveEnqueueBlock;	// 48 = 0x30
    CDUnknownBlockType _purgeCancelBlock;	// 56 = 0x38
    CDUnknownBlockType _purgeEnqueueBlock;	// 64 = 0x40
    _Bool _isClassDStoreAvailable;	// 72 = 0x48
    _Bool _isClassCStoreAvailable;	// 73 = 0x49
    _Bool _isClassAStoreAvailable;	// 74 = 0x4a
    _Bool _changedSinceLastSave;	// 75 = 0x4b
}

+ (id)sharedInstance;	// IMP=0x0040000000432e90
- (void).cxx_destruct;	// IMP=0x00200000004382d0
- (void)removeSessionKeyForAllTokenFromMainQueue;	// IMP=0x0010000000437e80
- (void)removeSessionKeyForToken:(id)arg1;	// IMP=0x0010000000437c10
- (void)storeSessionKey:(id)arg1 token:(id)arg2;	// IMP=0x0010000000437920
- (void)_purgeMap;	// IMP=0x0010000000437910
- (void)_setSaveTimer;	// IMP=0x00100000004378c0
- (void)_saveNow;	// IMP=0x0010000000437700
- (id)sessionKeyForToken:(id)arg1;	// IMP=0x0010000000437280
- (void)_daemonWillShutdown:(id)arg1;	// IMP=0x0010000000437220
- (void)unlock;	// IMP=0x00100000004371f0
- (void)lock;	// IMP=0x00100000004371c0
- (void)dealloc;	// IMP=0x0010000000437140
- (void)_purgeTimerFiredOnMain;	// IMP=0x0010000000437070
- (void)_saveTimerFiredOnMain;	// IMP=0x0010000000436fa0
- (id)init;	// IMP=0x00100000004367b0
- (void)_removeObjectForKey:(id)arg1;	// IMP=0x0010000000436360
- (id)_objectForKey:(id)arg1;	// IMP=0x0010000000435cc0
- (void)_setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000435580
- (_Bool)isSessionStoreAvailableForDataProtectionClass:(unsigned int)arg1;	// IMP=0x00100000004354c0
- (void)loadStoreForDataProtectionClass:(unsigned int)arg1;	// IMP=0x0010000000434090
- (void)_loadIfNeeded;	// IMP=0x0010000000434000
- (_Bool)__saveStoreForDataProtectionClass:(unsigned int)arg1;	// IMP=0x0010000000433a10
- (void)_save;	// IMP=0x00100000004335e0
- (void)systemDidEnterDataProtectionLock;	// IMP=0x0010000000433450
- (void)systemDidLeaveDataProtectionLock;	// IMP=0x00100000004331a0
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x0010000000433010
- (_Bool)isUnderLock;	// IMP=0x0010000000432fb0
- (_Bool)_isUnderFirstDataProtectionLock;	// IMP=0x0010000000432f50

@end

