//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;
@protocol CSDFileTransferring;

@protocol CSDFileTransferringDelegate <NSObject>
- (void)fileTransferer:(id <CSDFileTransferring>)arg1 didTransferFileAtURL:(NSURL *)arg2 successfully:(_Bool)arg3;
- (void)fileTransferer:(id <CSDFileTransferring>)arg1 didReceiveResourcesAtURL:(NSURL *)arg2 withMetadata:(NSDictionary *)arg3 isZipped:(_Bool)arg4 fromIDSDestination:(NSString *)arg5;
@end
