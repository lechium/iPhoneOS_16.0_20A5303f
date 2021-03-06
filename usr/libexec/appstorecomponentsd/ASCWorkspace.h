//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSRecursiveLock;

@interface ASCWorkspace : NSObject
{
    _Bool _extension;	// 8 = 0x8
    NSMutableDictionary *_pendingResults;	// 16 = 0x10
    NSOperationQueue *_openApplicationOperationQueue;	// 24 = 0x18
    NSRecursiveLock *_stateLock;	// 32 = 0x20
}

+ (void)withSharedWorkspace:(id)arg1 perform:(CDUnknownBlockType)arg2;	// IMP=0x002000000001f67e
+ (id)sharedWorkspace;	// IMP=0x001000000001f5ae
+ (id)log;	// IMP=0x001000000001f552
- (void).cxx_destruct;	// IMP=0x001000000001fd2b
@property(readonly, nonatomic) NSRecursiveLock *stateLock; // @synthesize stateLock=_stateLock;
@property(retain, nonatomic) NSOperationQueue *openApplicationOperationQueue; // @synthesize openApplicationOperationQueue=_openApplicationOperationQueue;
@property(readonly) NSMutableDictionary *pendingResults; // @synthesize pendingResults=_pendingResults;
@property(readonly, nonatomic, getter=isExtension) _Bool extension; // @synthesize extension=_extension;
- (id)popPendingResultForOperationName:(id)arg1;	// IMP=0x001000000001fbca
- (void)enqueueOpenApplicationOperation:(id)arg1 pendingResult:(id)arg2;	// IMP=0x001000000001f9bf
- (id)openSensitiveURL:(id)arg1;	// IMP=0x001000000001f894
- (id)openURL:(id)arg1 frontBoardOptions:(id)arg2;	// IMP=0x001000000001f750
- (id)openURL:(id)arg1;	// IMP=0x001000000001f73c
- (id)_init;	// IMP=0x001000000001f628
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x001000000001f45a
- (void)openResourceOperationDidComplete:(id)arg1;	// IMP=0x001000000001f362
- (id)openProductURL:(id)arg1;	// IMP=0x001000000001f34e
- (void)openApplicationWithBundleIdentifier:(id)arg1 configuration:(id)arg2 pendingResult:(id)arg3;	// IMP=0x001000000001f17d
- (void)openApplicationWithBundleIdentifier:(id)arg1 usingOpenResourceOperationWithPayloadURL:(id)arg2 options:(id)arg3 pendingResult:(id)arg4;	// IMP=0x001000000001f005
- (id)openApplicationWithBundleIdentifier:(id)arg1 payloadURL:(id)arg2;	// IMP=0x001000000001e92a

@end

