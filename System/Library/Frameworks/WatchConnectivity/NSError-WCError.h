//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (WCError)
+ (id)userInfoDictionaryWithErrorStringsForErrorCode:(long long)arg1;	// IMP=0x0060000000019270
+ (id)wcErrorFromInternalError:(id)arg1;	// IMP=0x00600000000191a1
+ (id)wcInternalErrorWithCode:(long long)arg1;	// IMP=0x006000000001917b
+ (id)wcErrorWithCode:(long long)arg1 underlyingWCErrorWithCode:(long long)arg2;	// IMP=0x0060000000019114
+ (id)wcErrorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0060000000019039
+ (id)wcErrorFromReceivedCode:(long long)arg1;	// IMP=0x0060000000018fb9
+ (id)wcErrorWithCode:(long long)arg1;	// IMP=0x0060000000018fa5
+ (id)wcErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0060000000018efe
@end

