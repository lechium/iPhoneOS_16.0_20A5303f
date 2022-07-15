//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKUGCCallToActionViewAppearance, NSString, UIMenu;
@protocol MUDynamicButtonCellModelChangeDelegate;

__attribute__((visibility("hidden")))
@interface MUCallToActionItemCellModel : NSObject
{
    CDUnknownBlockType _actionBlock;	// 8 = 0x8
    id <MUDynamicButtonCellModelChangeDelegate> _changeDelegate;	// 16 = 0x10
    UIMenu *_menu;	// 24 = 0x18
    MKUGCCallToActionViewAppearance *_appearance;	// 32 = 0x20
}

+ (id)passiveAddPhotosCallToActionAppearance;	// IMP=0x00100000000e83da
+ (id)passiveRatingsCallToActionAppearance;	// IMP=0x00100000000e8377
- (void).cxx_destruct;	// IMP=0x00000000000e86fc
@property(retain, nonatomic) MKUGCCallToActionViewAppearance *appearance; // @synthesize appearance=_appearance;
@property(copy, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
@property(nonatomic) __weak id <MUDynamicButtonCellModelChangeDelegate> changeDelegate; // @synthesize changeDelegate=_changeDelegate;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(readonly, nonatomic) long long actionStyle;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (id)accessibilityIdentifierForAction;	// IMP=0x00000000000e867c
- (void)loadSubtitleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e85d7
@property(readonly, nonatomic) NSString *titleString;
@property(readonly, nonatomic) NSString *symbolName;
- (id)initWithCallToActionViewAppearance:(id)arg1;	// IMP=0x00000000000e843d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
