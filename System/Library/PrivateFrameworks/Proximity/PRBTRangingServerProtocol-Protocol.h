//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Proximity/PRServerProtocol-Protocol.h>

@class NSNumber, NSUUID;

@protocol PRBTRangingServerProtocol <PRServerProtocol>
- (void)stopOwnerRanging:(NSUUID *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)startOwnerRanging:(NSUUID *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)stopUTRanging:(NSUUID *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)startUTRanging:(NSUUID *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)fetchTxPower:(NSUUID *)arg1 isUT:(NSNumber *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
@end
