//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAccount.h>

@class NSString;

@interface CNAccount (UIAdditions)
+ (_Bool)_cnui_isFacebookACAccount:(id)arg1;	// IMP=0x00200000001d4e60
+ (id)_cnui_displayNameForACAccount:(id)arg1;	// IMP=0x00200000001d4d56
+ (id)_cnui_displayNameForLocal;	// IMP=0x00200000001d4cff
+ (_Bool)_cnui_requestRefreshWithUserAction:(_Bool)arg1;	// IMP=0x00200000001d4bfb
+ (void)_cnui_canRequestRefreshWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00200000001d4b40
+ (id)_cnui_accountStore;	// IMP=0x00200000001d4b27
@property(readonly, nonatomic) NSString *_cnui_displayName;
@end
