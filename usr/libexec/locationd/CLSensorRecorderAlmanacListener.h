//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CLSensorRecorderAlmanacListener : NSObject
{
    int _subscriptionType;	// 8 = 0x8
    MISSING_TYPE *_notifier;	// 16 = 0x10
}

@property int subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property void *notifier; // @synthesize notifier=_notifier;
- (void)sensorWriter:(id)arg1 didReceiveUpdateToConfigurationRequests:(id)arg2;	// IMP=0x00100000009b6e85
- (id)classNameForSensorIdentifier:(id)arg1;	// IMP=0x00100000009b6e05
- (void)sensorWriterWillStartMonitoring:(id)arg1;	// IMP=0x00100000009b6aa2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
