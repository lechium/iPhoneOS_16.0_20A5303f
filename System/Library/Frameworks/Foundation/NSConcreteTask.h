//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSTask.h"

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NSConcreteTask : NSTask
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
    CDUnknownBlockType _terminationHandler;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_dsrc;	// 32 = 0x20
    long long _suspendCount;	// 40 = 0x28
    int _pid;	// 48 = 0x30
    _Atomic unsigned long long __exitRunningInfo;	// 56 = 0x38
    BOOL _qos;	// 64 = 0x40
    _Atomic _Bool _isSpawnedProcessDisclaimed;	// 65 = 0x41
}

- (void)setStartsNewProcessGroup:(_Bool)arg1;	// IMP=0x000000000058c93e
- (int)processIdentifier;	// IMP=0x000000000058c907
- (int)_procid;	// IMP=0x000000000058c8f5
- (void)dealloc;	// IMP=0x000000000058c7d0
- (id)init;	// IMP=0x000000000058c75f
- (long long)suspendCount;	// IMP=0x000000000058c728
- (_Bool)resume;	// IMP=0x000000000058c6ff
- (_Bool)suspend;	// IMP=0x000000000058c6d6
- (void)terminateTask;	// IMP=0x000000000058c6c4
- (void)terminate;	// IMP=0x000000000058c6ba
- (void)interrupt;	// IMP=0x000000000058c63d
- (id)taskDictionary;	// IMP=0x000000000058c4dd
- (void)setTaskDictionary:(id)arg1;	// IMP=0x000000000058c41d
- (void)setStandardError:(id)arg1;	// IMP=0x000000000058c406
- (void)setStandardOutput:(id)arg1;	// IMP=0x000000000058c3ef
- (void)setStandardInput:(id)arg1;	// IMP=0x000000000058c2dc
- (id)standardError;	// IMP=0x000000000058c2cb
- (id)standardOutput;	// IMP=0x000000000058c2ba
- (id)standardInput;	// IMP=0x000000000058c16e
- (id)currentDirectoryPath;	// IMP=0x000000000058c15d
- (id)preferredArchitectures;	// IMP=0x000000000058c14c
- (id)arguments;	// IMP=0x000000000058c13b
- (id)environment;	// IMP=0x000000000058c12a
- (id)launchPath;	// IMP=0x000000000058bfd5
- (void)setLaunchPath:(id)arg1;	// IMP=0x000000000058bfb7
- (void)setEnvironment:(id)arg1;	// IMP=0x000000000058bf75
- (void)setCurrentDirectoryPath:(id)arg1;	// IMP=0x000000000058bf57
- (void)setPreferredArchitectures:(id)arg1;	// IMP=0x000000000058bf39
- (void)setArguments:(id)arg1;	// IMP=0x000000000058bdbc
- (void)_withTaskDictionary:(CDUnknownBlockType)arg1;	// IMP=0x000000000058bd2b
- (void)waitUntilExit;	// IMP=0x000000000058bb4f
- (_Bool)launchWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000058a2dd
- (_Bool)launchAndReturnError:(id *)arg1;	// IMP=0x000000000058a269
- (void)launch;	// IMP=0x000000000058a218
- (_Bool)isRunning;	// IMP=0x000000000058a1f4
- (long long)terminationReason;	// IMP=0x000000000058a146
- (long long)_platformExitInformation;	// IMP=0x000000000058a0ae
- (int)terminationStatus;	// IMP=0x000000000058a000
- (void)setTerminationHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000589fee
- (void)_setTerminationHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000589eb0
- (CDUnknownBlockType)terminationHandler;	// IMP=0x0000000000589e4c
- (_Bool)isSpawnedProcessDisclaimed;	// IMP=0x0000000000589e3a
- (void)setSpawnedProcessDisclaimed:(_Bool)arg1;	// IMP=0x0000000000589e2a
- (void)setQualityOfService:(long long)arg1;	// IMP=0x0000000000589dab
- (long long)qualityOfService;	// IMP=0x0000000000589d68

@end

