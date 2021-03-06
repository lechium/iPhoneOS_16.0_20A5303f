//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/NSObject-Protocol.h>

@class CATSharingDevice, NSData, NSError;
@protocol CATSharingConnectionDelegate;

@protocol CATSharingConnection <NSObject>
@property(readonly, nonatomic) NSError *closedError;
@property(readonly, nonatomic, getter=isClosed) _Bool closed;
@property(nonatomic) __weak id <CATSharingConnectionDelegate> delegate;
@property(readonly, nonatomic) CATSharingDevice *remoteDevice;
- (void)close;
- (void)sendData:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
@end

