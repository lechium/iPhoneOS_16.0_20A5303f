//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface BackgroundTaskRequest : NSObject
{
    NSObject<OS_xpc_object> *_job;	// 8 = 0x8
    NSString *_requestIdentifier;	// 16 = 0x10
}

+ (id)wifiAvailableRequest;	// IMP=0x0040000000167631
+ (id)pluggedInRequest;	// IMP=0x0010000000167629
+ (id)networkAvailableRequest;	// IMP=0x0010000000167621
- (void).cxx_destruct;	// IMP=0x0020000000167682
@property(copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
- (id)valueForBackgroundTaskAgentKey:(const char *)arg1;	// IMP=0x0010000000167658
- (void)setValue:(id)arg1 forBackgroundTaskAgentKey:(const char *)arg2;	// IMP=0x0010000000167647
- (id)copyBackgroundTaskAgentJob;	// IMP=0x0010000000167639
- (id)initWithBackgroundTaskAgentJob:(id)arg1;	// IMP=0x00100000001675b6
- (id)init;	// IMP=0x0010000000167561

@end
