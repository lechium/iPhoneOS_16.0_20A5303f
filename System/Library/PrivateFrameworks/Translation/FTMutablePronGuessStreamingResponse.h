//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTPronGuessResponse, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutablePronGuessStreamingResponse
{
}

+ (long long)content_typeForObject:(id)arg1;	// IMP=0x006000000017b116
+ (long long)content_typeForMutableObject:(id)arg1;	// IMP=0x006000000017b0bc
+ (Class)content_mutableClassForType:(long long)arg1;	// IMP=0x006000000017b08e
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content; // @dynamic content;
@property(copy, nonatomic) FTPronGuessResponse *contentAsFTPronGuessResponse;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017ad60
- (id)init;	// IMP=0x000000000017acd2

@end
