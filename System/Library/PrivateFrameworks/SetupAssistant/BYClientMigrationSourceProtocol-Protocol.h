//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SetupAssistant/NSObject-Protocol.h>

@class MBDeviceTransferConnectionInfo, MBDeviceTransferProgress, NSError;

@protocol BYClientMigrationSourceProtocol <NSObject>
- (void)didChangeConnectionInformation:(MBDeviceTransferConnectionInfo *)arg1;
- (void)didFinishWithError:(NSError *)arg1;
- (void)didUpdateProgress:(MBDeviceTransferProgress *)arg1;
@end
