//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Messages/NSObject-Protocol.h>

@class MSSticker, MSStickerBrowserView;

@protocol MSStickerBrowserViewDataSource <NSObject>
- (MSSticker *)stickerBrowserView:(MSStickerBrowserView *)arg1 stickerAtIndex:(long long)arg2;
- (long long)numberOfStickersInStickerBrowserView:(MSStickerBrowserView *)arg1;
@end

