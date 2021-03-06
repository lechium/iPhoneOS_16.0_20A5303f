//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATOperationQueue, NSMutableArray, NSMutableDictionary;

@interface DMDUserNotificationController : NSObject
{
    CATOperationQueue *_queue;	// 8 = 0x8
    NSMutableArray *_notifications;	// 16 = 0x10
    NSMutableDictionary *_completionsByIdentifier;	// 24 = 0x18
}

+ (id);	// IMP=0x0020000000082de4
- (void).cxx_destruct;	// IMP=0x0020000000083e3d
@property(readonly, nonatomic) NSMutableDictionary *completionsByIdentifier; // @synthesize completionsByIdentifier=_completionsByIdentifier;
@property(readonly, nonatomic) NSMutableArray *notifications; // @synthesize notifications=_notifications;
@property(readonly, nonatomic) CATOperationQueue *queue; // @synthesize queue=_queue;
- (void)_notificationRef:(struct __CFUserNotification *)arg1 wasDismissedWithFlags:(unsigned long long)arg2;	// IMP=0x0010000000083b3d
- (void)_completeNotification:(id)arg1 response:(unsigned long long)arg2;	// IMP=0x0010000000083990
- (void)_showNextNotification;	// IMP=0x00100000000835b4
- (id)_dictFromNotification:(id)arg1;	// IMP=0x00100000000833b8
- (void)showNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000082f33
- (id)initPrivate;	// IMP=0x0010000000082e79

@end

