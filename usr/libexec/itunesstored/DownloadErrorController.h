//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableOrderedSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DownloadErrorController : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableArray *_errors;	// 16 = 0x10
    NSMutableOrderedSet *_scheduledErrors;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_scheduledErrorTimer;	// 32 = 0x20
}

+ (id)sharedErrorController;	// IMP=0x004000000011280c
- (void)_scheduleErrorDisplay:(id)arg1;	// IMP=0x00200000001130c7
- (void)_displayScheduledErrors;	// IMP=0x0010000000112dce
- (void)_cancelErrorsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000112c7e
- (void)_networkTypeChangedNotification:(id)arg1;	// IMP=0x0010000000112bd0
- (void)showDownloadError:(id)arg1;	// IMP=0x001000000011294b
- (void)cancelDialogsWithDownloadIdentifier:(long long)arg1;	// IMP=0x0010000000112889
- (void)dealloc;	// IMP=0x001000000011276e
- (id)init;	// IMP=0x00100000001126c0

@end

