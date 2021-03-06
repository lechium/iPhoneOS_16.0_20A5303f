//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKAttachmentMessagePartChatItem, CKMediaObjectAssetMenuBuilder, NSArray;

@protocol CKMediaObjectAssetMenuBuilderDelegate <NSObject>
- (_Bool)shouldHideInteractionsForMenuBuilder:(CKMediaObjectAssetMenuBuilder *)arg1;
- (void)menuBuilder:(CKMediaObjectAssetMenuBuilder *)arg1 deleteChatItems:(NSArray *)arg2;
- (void)menuBuilder:(CKMediaObjectAssetMenuBuilder *)arg1 forwardChatItems:(NSArray *)arg2;
- (void)menuBuilder:(CKMediaObjectAssetMenuBuilder *)arg1 copyChatItems:(NSArray *)arg2;
- (void)menuBuilder:(CKMediaObjectAssetMenuBuilder *)arg1 replyChatItem:(CKAttachmentMessagePartChatItem *)arg2;
- (void)menuBuilder:(CKMediaObjectAssetMenuBuilder *)arg1 tapbackChatItem:(CKAttachmentMessagePartChatItem *)arg2;
- (void)menuBuilder:(CKMediaObjectAssetMenuBuilder *)arg1 quickLookChatItem:(CKAttachmentMessagePartChatItem *)arg2;
@end

