//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PAMediaConversionServiceSetCaptionImageMetadataPolicy
{
    NSString *_caption;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000043d9
+ (id)policyWithCaption:(id)arg1;	// IMP=0x0010000000004387
- (void).cxx_destruct;	// IMP=0x00200000000047e8
@property(copy) NSString *caption; // @synthesize caption=_caption;
- (id)processMetadata:(id)arg1;	// IMP=0x0010000000004605
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x00100000000044f2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000004479
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000043e1

@end

