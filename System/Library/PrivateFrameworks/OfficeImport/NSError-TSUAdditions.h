//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (TSUAdditions)
+ (id)tsu_errorWithError:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 additionalUserInfo:(id)arg4;	// IMP=0x00200000002b7b05
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;	// IMP=0x00200000002b79f6
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;	// IMP=0x00200000002b7871
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;	// IMP=0x00200000002b784e
+ (id)tsu_errorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00200000002b7729
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;	// IMP=0x00200000002b761f
+ (id)tsu_fileWritePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;	// IMP=0x00200000002bd4c3
+ (id)tsu_fileWriteUnknownErrorWithUserInfo:(id)arg1;	// IMP=0x00200000002bd447
+ (id)tsu_fileReadPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;	// IMP=0x00200000002bd3c4
+ (id)tsu_fileReadCorruptedFileErrorWithUserInfo:(id)arg1;	// IMP=0x00200000002bd348
+ (id)tsu_fileReadUnknownErrorWithUserInfo:(id)arg1;	// IMP=0x00200000002bd2cc
+ (id)tsu_userInfoWithErrorType:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00200000002bd201
+ (id)tsu_errorWithWarning:(id)arg1;	// IMP=0x00200000002cdb8e
- (_Bool)tsu_isErrorPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b82ff
@property(readonly, nonatomic) _Bool tsu_isNoSuchFileError;
@property(readonly, nonatomic) _Bool tsu_isCancelError;
@property(readonly, nonatomic) _Bool tsu_isOutOfSpaceError;
- (id)tsu_localizedAlertMessage;	// IMP=0x00100000002b804b
- (id)tsu_localizedAlertTitle;	// IMP=0x00100000002b7fb0
- (id)tsu_errorPreservingCancel;	// IMP=0x00100000002b7e4f
- (id)tsu_errorPreservingAlertTitle;	// IMP=0x00100000002b7cd2
@property(readonly, nonatomic) _Bool tsu_isWriteError;
@property(readonly, nonatomic) _Bool tsu_isCorruptedError;
@property(readonly, nonatomic) _Bool tsu_isReadError;
@end

