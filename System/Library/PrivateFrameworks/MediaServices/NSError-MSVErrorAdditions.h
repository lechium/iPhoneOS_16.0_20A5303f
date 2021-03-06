//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (MSVErrorAdditions)
+ (id)_msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 underlyingErrors:(id)arg4 userInfo:(id)arg5 debugDescriptionFormat:(id)arg6 arguments:(struct __va_list_tag [1])arg7;	// IMP=0x0020000000019216
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingErrors:(id)arg3 userInfo:(id)arg4 debugDescription:(id)arg5;	// IMP=0x0020000000019155
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingErrors:(id)arg3 debugDescription:(id)arg4;	// IMP=0x0020000000019098
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 userInfo:(id)arg4 debugDescription:(id)arg5;	// IMP=0x0020000000018fda
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 debugDescription:(id)arg4;	// IMP=0x0020000000018f1a
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 debugDescription:(id)arg4;	// IMP=0x0020000000018e60
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;	// IMP=0x0020000000018d9f
+ (id)MSVErrorWithMissingDependencies:(id)arg1;	// IMP=0x00200000000194b9
+ (id)MSVErrorWithMissingDependency:(id)arg1;	// IMP=0x00200000000193f9
- (id)msv_analyticSignature;	// IMP=0x0010000000018836
@property(readonly, nonatomic) NSError *msv_underlyingError;
- (id)msv_description;	// IMP=0x0010000000018246
- (id)msv_codeDescription;	// IMP=0x00100000000180a0
- (id)msv_errorByUnwrappingDomain:(id)arg1 code:(long long)arg2;	// IMP=0x0010000000018042
- (id)msv_errorByUnwrappingDomain:(id)arg1;	// IMP=0x0010000000017e4e
- (id)msv_errorByWrappingWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 debugDescription:(id)arg4;	// IMP=0x0010000000017d18
- (id)msv_errorByWrappingWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;	// IMP=0x0010000000017bf1
- (id)msv_errorByRemovingUnsafeUserInfo;	// IMP=0x0010000000017994
@end

