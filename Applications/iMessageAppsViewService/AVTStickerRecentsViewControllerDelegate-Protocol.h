//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AVTStickerRecentsViewController, MSSticker;

@protocol AVTStickerRecentsViewControllerDelegate <NSObject>
- (void)stickerRecentsControllerDidRequestMemojiEditor:(AVTStickerRecentsViewController *)arg1;
- (void)stickerRecentsController:(AVTStickerRecentsViewController *)arg1 didTapSticker:(MSSticker *)arg2;
- (void)stickerRecentsControllerDidTapAppButton:(AVTStickerRecentsViewController *)arg1;
@end
