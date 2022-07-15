//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, ICContentTastePendingChangesCoordinator, NSDate, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface ICContentTasteRequestHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    ICConnectionConfiguration *_configuration;	// 24 = 0x18
    ICContentTastePendingChangesCoordinator *_pendingChangesCoordinator;	// 32 = 0x20
    NSDate *_responseExpirationDate;	// 40 = 0x28
    long long _backOffIndex;	// 48 = 0x30
    NSString *_defaultContentTasteRefreshIdentifier;	// 56 = 0x38
    _Bool _isHandlerValid;	// 64 = 0x40
    long long _retryState;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000082b54
- (void)_postContentTasteChanges:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000081f62
- (void)_postPendingContentTasteChangesByAddingChange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000081e6b
- (void)_schedulePostingContentTasteForFailedItems;	// IMP=0x0010000000081cda
- (void)_scheduleUpdatingContentTasteWithNewExpirationDate;	// IMP=0x0010000000081b7a
- (id)description;	// IMP=0x0010000000081ab4
- (void)cancelAllOperationsAndClearPendingChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000081a29
- (void)updateContentTasteForItem:(id)arg1 invalidatingLocalCache:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000081966
- (void)updateContentTasteForReason:(long long)arg1 invalidatingLocalCache:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000818c8
- (id)initWithConfiguration:(id)arg1;	// IMP=0x001000000008164f

@end
