//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTCreateLanguageProfileRequest, FTCreateLanguageProfileResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTNapgCreateLanguageProfileMessage : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct NapgCreateLanguageProfileMessage *_root;	// 24 = 0x18
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;	// IMP=0x001000000007dcab
+ (Class)session_message_immutableClassForType:(long long)arg1;	// IMP=0x001000000007dc6b
- (void).cxx_destruct;	// IMP=0x000000000007e01a
- (id)flatbuffData;	// IMP=0x000000000007dea2
- (Offset_0544be67)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000007dd38
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTCreateLanguageProfileResponse *session_messageAsFTCreateLanguageProfileResponse;
@property(readonly, nonatomic) FTCreateLanguageProfileRequest *session_messageAsFTCreateLanguageProfileRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007da0d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct NapgCreateLanguageProfileMessage *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000007d83f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct NapgCreateLanguageProfileMessage *)arg2;	// IMP=0x000000000007d829
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000007d80e
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000007d7f6

@end

