//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUIGiftItemView, UIButton, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIGiftResultViewController
{
    UIButton *_giftAgainButton;	// 8 = 0x8
    UIImage *_itemImage;	// 16 = 0x10
    SKUIGiftItemView *_itemView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b0fc8
- (void)_setItemImage:(id)arg1 error:(id)arg2;	// IMP=0x00000000000b0f66
- (id)_itemView;	// IMP=0x00000000000b0c99
- (id)_itemImage;	// IMP=0x00000000000b0bbf
- (void)_giftAgainAction:(id)arg1;	// IMP=0x00000000000b0a4a
- (void)_doneButtonAction:(id)arg1;	// IMP=0x00000000000b0a33
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000b088b
- (void)loadView;	// IMP=0x00000000000b036d
- (void)dealloc;	// IMP=0x00000000000b0319
- (id)initWithGift:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000000b0211

@end

