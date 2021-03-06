//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface TSURemotePropertyList : NSObject
{
    NSURL *_remoteURL;	// 8 = 0x8
    NSURL *_localURL;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_accessQueue;	// 24 = 0x18
    NSDictionary *_propertyList;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_checkQueue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_updateTimer;	// 48 = 0x30
    _Bool _didUpdateAtLeastOnce;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002cd48c
- (void)processPropertyList:(id)arg1;	// IMP=0x00000000002cd35b
- (id)deserializePropertyListData:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000002cd33a
- (void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3;	// IMP=0x00000000002ccfeb
- (id)URLRequest;	// IMP=0x00000000002ccdb6
- (double)timeIntervalUntilNextUpdate;	// IMP=0x00000000002ccc62
- (id)validateUserDefaultsDownloadURL:(id)arg1;	// IMP=0x00000000002ccc4c
- (void)checkForUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002cc97a
- (id)arrayForKey:(id)arg1;	// IMP=0x00000000002cc8ee
- (id)dictionaryForKey:(id)arg1;	// IMP=0x00000000002cc862
- (id)URLForKey:(id)arg1;	// IMP=0x00000000002cc7a3
- (id)stringForKey:(id)arg1;	// IMP=0x00000000002cc717
- (id)objectForKey:(id)arg1;	// IMP=0x00000000002cc53a
- (void)updateIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002cc449
- (void)processDidResume:(id)arg1;	// IMP=0x00000000002cc42e
- (void)processWillSuspend:(id)arg1;	// IMP=0x00000000002cc3f8
- (void)startUpdateTimer;	// IMP=0x00000000002cc29b
- (void)dealloc;	// IMP=0x00000000002cc21d
- (id)initWithRemoteURL:(id)arg1 localURL:(id)arg2;	// IMP=0x00000000002cbef5
- (id)init;	// IMP=0x00000000002cbdcc

@end

