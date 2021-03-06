//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKEntity, IMCollaborationNotice, NSString;
@protocol CKCollaborationNoticeSuggestionDelegate, SGSuggestionDelegate;

__attribute__((visibility("hidden")))
@interface CKCollaborationNoticeSuggestion : NSObject
{
    _Bool _wantsInlineReplyStyle;	// 8 = 0x8
    id <SGSuggestionDelegate> suggestionDelegate;	// 16 = 0x10
    IMCollaborationNotice *_notice;	// 24 = 0x18
    CKEntity *_senderEntity;	// 32 = 0x20
    id <CKCollaborationNoticeSuggestionDelegate> _delegate;	// 40 = 0x28
}

+ (id)suggestionWithNotice:(id)arg1 delegate:(id)arg2 wantsInlineReplyStyle:(_Bool)arg3;	// IMP=0x00100000004e810c
- (void).cxx_destruct;	// IMP=0x00000000004ea780
@property(nonatomic) _Bool wantsInlineReplyStyle; // @synthesize wantsInlineReplyStyle=_wantsInlineReplyStyle;
@property(nonatomic) __weak id <CKCollaborationNoticeSuggestionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CKEntity *senderEntity; // @synthesize senderEntity=_senderEntity;
@property(readonly, nonatomic) IMCollaborationNotice *notice; // @synthesize notice=_notice;
@property(nonatomic) __weak id <SGSuggestionDelegate> suggestionDelegate; // @synthesize suggestionDelegate;
- (long long)suggestionActionButtonType;	// IMP=0x00000000004ea704
- (id)suggestionCategoryTitleForItems:(id)arg1;	// IMP=0x00000000004e9a2c
- (id)suggestionCategoryTitle;	// IMP=0x00000000004e99d0
- (id)suggestionCategorySubtitleForItems:(id)arg1;	// IMP=0x00000000004e99c8
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;	// IMP=0x00000000004e9883
- (id)suggestionCategoryImage;	// IMP=0x00000000004e986a
- (id)suggestionCategoryId;	// IMP=0x00000000004e9858
- (id)suggestionTitle;	// IMP=0x00000000004e913f
- (id)suggestionImageSGView;	// IMP=0x00000000004e8d19
- (id)suggestionSubtitle;	// IMP=0x00000000004e8b37
- (id)suggestionDivider;	// IMP=0x00000000004e8a71
- (id)suggestionBackgroundVisualEffectView;	// IMP=0x00000000004e8900
- (id)suggestionDismissAction;	// IMP=0x00000000004e879c
- (id)suggestionPrimaryAction;	// IMP=0x00000000004e827d
- (id)suggestionCategory;	// IMP=0x00000000004e8274
- (id)initWithNotice:(id)arg1 wantsInlineReplyStyle:(_Bool)arg2;	// IMP=0x00000000004e819e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

