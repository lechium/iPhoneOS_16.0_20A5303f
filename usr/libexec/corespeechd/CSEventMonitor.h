//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface CSEventMonitor : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000c2939
- (void)_stopMonitoring;	// IMP=0x00100000000c2916
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000c28ea
- (void)notifyObserver:(id)arg1;	// IMP=0x00100000000c2899
- (void)enumerateObservers:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c2763
- (void)enumerateObserversInQueue:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c26bb
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000c25d1
- (void)addObserver:(id)arg1;	// IMP=0x00100000000c24e2
- (unsigned long long)type;	// IMP=0x00100000000c24da
- (void)dealloc;	// IMP=0x00100000000c249c
- (id)init;	// IMP=0x00100000000c2415

@end

