//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIDictationScoredToken
{
    double _confidenceScore;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000ae8841
@property(readonly, nonatomic) double confidenceScore; // @synthesize confidenceScore=_confidenceScore;
- (id)_descriptionExtra;	// IMP=0x0000000000ae8a5b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ae89be
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000ae893f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000ae88ad
- (id)initWithText:(id)arg1 removeSpaceBefore:(_Bool)arg2 removeSpaceAfter:(_Bool)arg3 confidenceScore:(double)arg4;	// IMP=0x0000000000ae8849

@end

