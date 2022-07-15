//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APXPCConnection, NSString, Protocol;

@interface APMetricReceiver : NSObject
{
    APXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000ca229
@property(retain, nonatomic) APXPCConnection *connection; // @synthesize connection=_connection;
- (void)connectionInterrupted;	// IMP=0x00100000000ca13d
- (void)connectionInvalidated;	// IMP=0x00100000000ca06c
- (void)extendCollectionClassesForExportedInterface:(id)arg1;	// IMP=0x00100000000c9fce
@property(readonly) id exportedObject;
@property(readonly) Protocol *exportedInterface;
- (void)terminateConnection;	// IMP=0x00100000000c9f2a
- (void)receivedMetric:(id)arg1;	// IMP=0x00100000000c9bfc
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000c9b91

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
