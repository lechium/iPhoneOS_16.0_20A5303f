//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSPersistentHistoryToken, RMInternalStatusPublisher;

@protocol RMInternalStatusPublisherDelegate <NSObject>
- (void)internalStatusPublisher:(RMInternalStatusPublisher *)arg1 didChangeCommandAndDeclarationsPersistentHistoryToken:(NSPersistentHistoryToken *)arg2;
- (void)internalStatusPublisher:(RMInternalStatusPublisher *)arg1 didChangeDeviceStatusByKeyPath:(NSDictionary *)arg2;
@end
