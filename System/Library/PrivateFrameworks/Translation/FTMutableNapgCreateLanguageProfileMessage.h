//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTCreateLanguageProfileRequest, FTCreateLanguageProfileResponse, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableNapgCreateLanguageProfileMessage
{
}

+ (long long)session_message_typeForObject:(id)arg1;	// IMP=0x00600000000a0efe
+ (long long)session_message_typeForMutableObject:(id)arg1;	// IMP=0x00600000000a0e71
+ (Class)session_message_mutableClassForType:(long long)arg1;	// IMP=0x00600000000a0e31
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message; // @dynamic session_message;
@property(copy, nonatomic) FTCreateLanguageProfileResponse *session_messageAsFTCreateLanguageProfileResponse;
@property(copy, nonatomic) FTCreateLanguageProfileRequest *session_messageAsFTCreateLanguageProfileRequest;
@property(nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a0a04
- (id)init;	// IMP=0x00000000000a0976

@end
