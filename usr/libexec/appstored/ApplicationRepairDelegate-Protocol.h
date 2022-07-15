//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ApplicationProxy, NSError;
@protocol ApplicationRepair;

@protocol ApplicationRepairDelegate <NSObject>
- (void)repair:(id <ApplicationRepair>)arg1 wantsToRelaunchApplication:(ApplicationProxy *)arg2;
- (void)repair:(id <ApplicationRepair>)arg1 needsToReleaseBlockingCallerWithReason:(NSError *)arg2;
@end
