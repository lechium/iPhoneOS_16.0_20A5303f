//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ASCTextOfferMetadata
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000016588
- (void).cxx_destruct;	// IMP=0x0020000000016ade
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isText;	// IMP=0x0010000000016ab4
- (id)description;	// IMP=0x00100000000169d8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000016845
- (unsigned long long)hash;	// IMP=0x0010000000016793
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000166bf
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000016590
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x00100000000164c1

@end

