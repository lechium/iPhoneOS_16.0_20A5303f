//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileWatcherObservations, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NSFileWatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CDStruct_4c969caf _auditToken;	// 16 = 0x10
    NSURL *_url;	// 48 = 0x30
    CDUnknownBlockType _observer;	// 56 = 0x38
    _Bool _isWatching;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_eventSource;	// 72 = 0x48
    unsigned long long _lastObservedEventID;	// 80 = 0x50
    struct __FSEventStream *_eventStream;	// 88 = 0x58
    _Bool _eventsAreAboutDirectory;	// 96 = 0x60
    _Bool _isUnsettled;	// 97 = 0x61
    NSFileWatcherObservations *_itemObservations;	// 104 = 0x68
    NSMutableDictionary *_subitemObservationsByEventPath;	// 112 = 0x70
    NSURL *_fileReferenceURL;	// 120 = 0x78
    NSString *_formerPath;	// 128 = 0x80
    NSURL *_formerURL;	// 136 = 0x88
}

- (void)stop;	// IMP=0x000000000066177a
- (void)settle;	// IMP=0x00000000006610dc
- (void)_coalesceSubitemObservations;	// IMP=0x0000000000660e78
- (void)unsettle;	// IMP=0x0000000000660d90
- (void)start;	// IMP=0x0000000000660d7a
- (void)setObserver:(CDUnknownBlockType)arg1;	// IMP=0x0000000000660d45
- (void)setLastObservedEventID:(unsigned long long)arg1;	// IMP=0x0000000000660d3b
- (void)setURL:(id)arg1;	// IMP=0x0000000000660c80
- (void)watchItem;	// IMP=0x000000000065fd67
- (void)handleFSEventPath:(id)arg1 flags:(unsigned int)arg2 id:(unsigned long long)arg3;	// IMP=0x000000000065facf
- (void)dealloc;	// IMP=0x000000000065f9c8
- (id)initWithQueue:(id)arg1 auditToken:(CDStruct_4c969caf)arg2;	// IMP=0x000000000065f913

@end
