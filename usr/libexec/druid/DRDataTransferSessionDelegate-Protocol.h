//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class DRDataTransferSession;

@protocol DRDataTransferSessionDelegate <NSObject>

@optional
- (void)dataTransferSessionFinished:(DRDataTransferSession *)arg1;
- (void)dataTransferSessionBegan:(DRDataTransferSession *)arg1;
@end
