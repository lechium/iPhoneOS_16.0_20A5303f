//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@class CNUICoreRecentsManager, CNUIExternalComponentsFactory;

__attribute__((visibility("hidden")))
@interface CNContactDeleteContactAction : CNContactAction
{
    CNUIExternalComponentsFactory *_componentsFactory;	// 8 = 0x8
    CNUICoreRecentsManager *_recentsManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000075569
@property(readonly, nonatomic) CNUICoreRecentsManager *recentsManager; // @synthesize recentsManager=_recentsManager;
@property(readonly, nonatomic) CNUIExternalComponentsFactory *componentsFactory; // @synthesize componentsFactory=_componentsFactory;
- (void)showDeleteFailureAlert;	// IMP=0x0000000000075354
- (_Bool)deleteContact;	// IMP=0x000000000007512a
- (void)performActionWithSender:(id)arg1;	// IMP=0x0000000000074d84
- (id)initWithContact:(id)arg1 recentsManager:(id)arg2 componentsFactory:(id)arg3;	// IMP=0x0000000000074ccb

@end
