//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class DDUIAction, NSArray, NSString, UIImage, UIImageSymbolConfiguration, UIMenu, VKCBaseDataDetectorElement;
@protocol VKCActionInfoButtonDelegate;

__attribute__((visibility("hidden")))
@interface VKCActionInfoButton : UIButton
{
    VKCBaseDataDetectorElement *_representedElement;	// 8 = 0x8
    NSArray *_allUnfilteredElements;	// 16 = 0x10
    DDUIAction *_defaultDDAction;	// 24 = 0x18
    NSString *_text;	// 32 = 0x20
    UIImage *_image;	// 40 = 0x28
    id <VKCActionInfoButtonDelegate> _delegate;	// 48 = 0x30
    UIImageSymbolConfiguration *_preferredSymbolConfiguration;	// 56 = 0x38
}

+ (id)buttonWithImage:(id)arg1 text:(id)arg2;	// IMP=0x00600000000abc65
- (void).cxx_destruct;	// IMP=0x00000000000ad204
@property(retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration; // @synthesize preferredSymbolConfiguration=_preferredSymbolConfiguration;
@property(nonatomic) __weak id <VKCActionInfoButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) DDUIAction *defaultDDAction; // @synthesize defaultDDAction=_defaultDDAction;
@property(retain, nonatomic) NSArray *allUnfilteredElements; // @synthesize allUnfilteredElements=_allUnfilteredElements;
@property(retain, nonatomic) VKCBaseDataDetectorElement *representedElement; // @synthesize representedElement=_representedElement;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000000ad046
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000000acf93
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000000ace7d
- (id)translucentSelectedButtonConfiguration;	// IMP=0x00000000000acb15
- (long long)overrideUserInterfaceStyle;	// IMP=0x00000000000acb0a
- (id)translucentButtonConfiguration;	// IMP=0x00000000000ac812
- (id)filledButtonConfiguration;	// IMP=0x00000000000ac62e
- (id)dataDetectorContext;	// IMP=0x00000000000ac2dd
- (void)performDefaultElementAction;	// IMP=0x00000000000ac042
@property(retain, nonatomic) UIMenu *customMenu;
- (_Bool)hasAction:(SEL)arg1;	// IMP=0x00000000000abd97
- (void)vk_addTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000abd7f

@end

