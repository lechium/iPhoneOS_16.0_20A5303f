//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, _OSLogEventSerializationMetadata;

__attribute__((visibility("hidden")))
@interface OSLogDeserializedMessagePlaceholder
{
    NSDictionary *_backingDict;	// 8 = 0x8
    _OSLogEventSerializationMetadata *_metadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000049cb1
@property(readonly, nonatomic) _OSLogEventSerializationMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDictionary *backingDict; // @synthesize backingDict=_backingDict;
- (id)type;	// IMP=0x0000000000049ad3
- (id)typeNamespace;	// IMP=0x000000000004990d
- (id)rawString;	// IMP=0x0000000000049747
- (id)tokens;	// IMP=0x0000000000049412
- (int)precision;	// IMP=0x00000000000492ec
- (int)width;	// IMP=0x00000000000491c6
- (id)initWithDict:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000049124

@end

