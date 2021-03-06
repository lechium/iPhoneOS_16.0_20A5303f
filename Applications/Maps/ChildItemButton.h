//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapItemChildItem;
@protocol ChildItemButtonDelegate;

@interface ChildItemButton
{
    GEOMapItemChildItem *_childItem;	// 8 = 0x8
    id <ChildItemButtonDelegate> _delegate;	// 16 = 0x10
}

+ (id)buttonTitleWithChildAction:(id)arg1;	// IMP=0x0020000000969614
+ (id)buttonTitleWithChildItem:(id)arg1;	// IMP=0x001000000096941d
+ (id)buttonTitleFont;	// IMP=0x00100000009693df
+ (struct UIEdgeInsets)contentEdgeInsets;	// IMP=0x0010000000969035
+ (id)button;	// IMP=0x0010000000968fe0
- (void).cxx_destruct;	// IMP=0x0020000000969986
@property(nonatomic) __weak id <ChildItemButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GEOMapItemChildItem *childItem; // @synthesize childItem=_childItem;
- (void)_buttonAction;	// IMP=0x0010000000969276
- (void)updateTheme;	// IMP=0x0010000000969207
- (void)_setAttributes;	// IMP=0x0010000000969053

@end

