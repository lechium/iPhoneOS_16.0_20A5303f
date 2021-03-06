//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAP2SerializedOperationQueue;
@protocol HAP2AccessoryServerController, HAP2AccessoryServerEncoding, HAP2AccessoryServerSecureTransport;

@protocol HAP2AccessoryServerControllerFactory <NSObject>
- (id <HAP2AccessoryServerController>)createControllerWithEncoding:(id <HAP2AccessoryServerEncoding>)arg1 secureTransport:(id <HAP2AccessoryServerSecureTransport>)arg2 operationQueue:(HAP2SerializedOperationQueue *)arg3;
@end

