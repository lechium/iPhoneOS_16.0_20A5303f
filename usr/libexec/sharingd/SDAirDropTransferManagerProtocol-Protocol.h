//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SDXPCDaemonProtocol-Protocol.h"

@class SFAirDropAction, SFAirDropTransfer;

@protocol SDAirDropTransferManagerProtocol <SDXPCDaemonProtocol>
- (void)transfer:(SFAirDropTransfer *)arg1 actionTriggeredForAction:(SFAirDropAction *)arg2;
@end
