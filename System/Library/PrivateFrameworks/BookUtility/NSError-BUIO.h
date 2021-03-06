//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (BUIO)
+ (id)bu_fileWritePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;	// IMP=0x0020000000007222
+ (id)bu_fileWriteUnknownErrorWithUserInfo:(id)arg1;	// IMP=0x00200000000071a6
+ (id)bu_fileReadPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;	// IMP=0x0020000000007126
+ (id)bu_fileReadCorruptedFileErrorWithUserInfo:(id)arg1;	// IMP=0x00200000000070ad
+ (id)bu_fileReadUnknownErrorWithUserInfo:(id)arg1;	// IMP=0x0020000000007034
+ (id)bu_userInfoWithErrorType:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0020000000006f69
+ (id)bu_IOErrorWithCode:(long long)arg1;	// IMP=0x0020000000006e99
+ (id)bu_errorWithError:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 additionalUserInfo:(id)arg4;	// IMP=0x002000000000ef31
+ (id)bu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;	// IMP=0x002000000000ee22
+ (id)bu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;	// IMP=0x002000000000ec9d
+ (id)bu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;	// IMP=0x002000000000ec7a
+ (id)bu_errorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x002000000000ec5b
+ (id)bu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;	// IMP=0x002000000000eb51
@property(readonly, nonatomic) _Bool bu_isWriteError;
@property(readonly, nonatomic) _Bool bu_isCorruptedError;
@property(readonly, nonatomic) _Bool bu_isReadError;
- (_Bool)bu_isErrorPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fad2
- (void)bu_enumerateErrorUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f8a0
@property(readonly, nonatomic) _Bool bu_isNoPermissionError;
@property(readonly, nonatomic) _Bool bu_isFileExistsError;
@property(readonly, nonatomic) _Bool bu_isNoSuchFileError;
@property(readonly, nonatomic) _Bool bu_isCancelError;
@property(readonly, nonatomic) _Bool bu_isOutOfSpaceError;
- (id)bu_localizedAlertMessage;	// IMP=0x001000000000f477
- (id)bu_localizedAlertTitle;	// IMP=0x001000000000f3dc
- (id)bu_errorPreservingCancel;	// IMP=0x001000000000f27b
- (id)bu_errorPreservingAlertTitle;	// IMP=0x001000000000f0fe
@end

