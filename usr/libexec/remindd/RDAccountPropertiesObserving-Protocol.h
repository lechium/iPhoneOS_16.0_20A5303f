//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID, OS_dispatch_queue;
@protocol _TtP7remindd20ObservingAccountInfo_;

@protocol RDAccountPropertiesObserving
- (void)notify:(id)arg1;
@property(nonatomic, readonly) NSString *propertyName;
@property(nonatomic, readonly) id <_TtP7remindd20ObservingAccountInfo_> account;
@property(nonatomic, readonly) OS_dispatch_queue *callbackQueue;
@property(nonatomic, readonly) NSUUID *uuid;
@end
