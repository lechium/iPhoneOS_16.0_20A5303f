//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UILabelStringContent
{
    NSString *_string;	// 16 = 0x10
    struct {
        unsigned int isWidthVariant:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000001359b61
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001359b27
- (unsigned long long)hash;	// IMP=0x0000000001359ad1
- (_Bool)_isContentEqualToContent:(id)arg1;	// IMP=0x0000000001359a5a
- (_Bool)isEqualToAttributedString:(id)arg1;	// IMP=0x00000000013599d8
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x00000000013599b2
- (id)attributedString;	// IMP=0x0000000001359965
- (id)string;	// IMP=0x0000000001359950
- (_Bool)isNil;	// IMP=0x000000000135993b
- (_Bool)isWidthVariant;	// IMP=0x0000000001359929
- (_Bool)isAttributed;	// IMP=0x0000000001359921
- (long long)length;	// IMP=0x0000000001359904
- (id)attributedStringContent;	// IMP=0x00000000013598a5
- (id)contentByApplyingAttribute:(id)arg1 value:(id)arg2 toRange:(struct _NSRange)arg3;	// IMP=0x00000000013596dc
- (id)contentWithAttributedString:(id)arg1;	// IMP=0x000000000135965b
- (id)contentWithString:(id)arg1;	// IMP=0x000000000135954a
- (id)initWithString:(id)arg1 defaultAttributes:(id)arg2;	// IMP=0x0000000001359428

@end
