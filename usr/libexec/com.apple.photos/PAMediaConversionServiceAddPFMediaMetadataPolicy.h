//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PAMediaConversionServiceAddPFMediaMetadataPolicy
{
    unsigned char _type;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000003463
+ (id)policyWithType:(unsigned char)arg1 value:(id)arg2;	// IMP=0x00100000000033fb
- (void).cxx_destruct;	// IMP=0x00200000000037cd
@property(retain) id value; // @synthesize value=_value;
@property unsigned char type; // @synthesize type=_type;
- (id)processMetadata:(id)arg1;	// IMP=0x00100000000035de
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x00100000000035d6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000003539
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000346b

@end

