//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/NSObject-Protocol.h>

@class CATSharingDevice, NSString;

@protocol CATSharingDevicePairingTerminal <NSObject>
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;
@property(readonly, nonatomic) CATSharingDevice *device;
- (void)invalidate;
- (void)tryPIN:(NSString *)arg1;
- (void)beginPairing:(void (^)(unsigned long long))arg1 withCompletion:(void (^)(NSError *, id <CATSharingConnection>))arg2;
- (void)verifyPairingAndFetchStableIdentifierWithCompletion:(void (^)(NSError *, id <CATSharingConnection>))arg1;
@end
