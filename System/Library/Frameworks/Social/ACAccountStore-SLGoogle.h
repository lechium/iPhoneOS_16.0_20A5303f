//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (SLGoogle)
+ (_Bool)SLDuplicateAccountExistsForAccount:(id)arg1 withTypeIdentifier:(id)arg2 andAccountPropertyIDKey:(id)arg3;	// IMP=0x006000000004729a
- (void)sl_openGoogleAuthenticationSheetForAccount:(id)arg1 shouldConfirm:(_Bool)arg2 delegateClassName:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001812c
- (void)sl_openYouTubeAuthenticationSheetWithUsername:(id)arg1 accountDescription:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000017ebc
- (void)sl_openYouTubeAuthenticationSheetWithAccountDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017c73
- (void)sl_openGoogleAuthenticationSheetForAccount:(id)arg1 shouldConfirm:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000017c57
- (void)sl_openGoogleAuthenticationSheetWithAccountDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017a4b
@end

