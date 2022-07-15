//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDDatabase;
@protocol PDUserNotificationTriggerDelegate;

@interface PDUserNotificationTrigger : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    PDDatabase *_database;	// 16 = 0x10
    id <PDUserNotificationTriggerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000012b6c7
@property(nonatomic) __weak id <PDUserNotificationTriggerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PDDatabase *database; // @synthesize database=_database;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (id)classIDFromHandout:(id)arg1;	// IMP=0x001000000012b51b
- (_Bool)isIncompleteHandout:(id)arg1;	// IMP=0x001000000012b369
- (void)fireTriggerWithNotificationData:(id)arg1;	// IMP=0x001000000012b2d6
- (id)initWithDatabase:(id)arg1;	// IMP=0x001000000012b26b

@end
