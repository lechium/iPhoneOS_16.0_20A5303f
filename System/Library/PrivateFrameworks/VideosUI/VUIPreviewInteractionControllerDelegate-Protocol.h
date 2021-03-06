//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSIndexPath, VUIPreviewInteractionController;

@protocol VUIPreviewInteractionControllerDelegate <NSObject>
- (void)interactionController:(VUIPreviewInteractionController *)arg1 didEndForIndexPath:(NSIndexPath *)arg2;
- (void)interactionController:(VUIPreviewInteractionController *)arg1 didBeginForIndexPath:(NSIndexPath *)arg2;
- (_Bool)interactionController:(VUIPreviewInteractionController *)arg1 shouldInteractionControllerBeginForIndexPath:(NSIndexPath *)arg2;
@end

