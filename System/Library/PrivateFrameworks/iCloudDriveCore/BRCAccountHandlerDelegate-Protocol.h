//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iCloudDriveCore/NSObject-Protocol.h>

@class BRCAccountHandler, BRCAccountSession;

@protocol BRCAccountHandlerDelegate <NSObject>
- (void)accountHandler:(BRCAccountHandler *)arg1 didChangeSessionTo:(BRCAccountSession *)arg2;
- (void)accountHandler:(BRCAccountHandler *)arg1 willChangeSessionFrom:(BRCAccountSession *)arg2;
@end
