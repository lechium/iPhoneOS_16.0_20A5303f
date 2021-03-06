//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FeedbackLogger/NSObject-Protocol.h>

@class NSDictionary, NSFileManager, NSObject, NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

@protocol FLLoggingContext <NSObject>
@property(readonly, nonatomic) NSUserDefaults *userDefaults;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property(readonly, nonatomic) NSFileManager *fileManager;
@property(readonly, copy, nonatomic) NSString *timestampReferenceIdentifier;
@property(readonly, nonatomic) unsigned long long now;
- (void)reportTelemetry:(NSString *)arg1 payload:(NSDictionary *)arg2;
@end

