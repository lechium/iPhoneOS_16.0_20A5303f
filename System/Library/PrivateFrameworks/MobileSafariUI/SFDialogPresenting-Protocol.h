//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class SFDialog, WBSPermissionDialogThrottler;

@protocol SFDialogPresenting <NSObject>
- (WBSPermissionDialogThrottler *)permissionDialogThrottler;
- (void)presentDialog:(SFDialog *)arg1 sender:(id)arg2;
@end
