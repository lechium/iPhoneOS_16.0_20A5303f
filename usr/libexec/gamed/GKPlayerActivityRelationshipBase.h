//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKPlayerActivityRelationshipBase
{
    NSString *_name;	// 8 = 0x8
    NSString *_image;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0040000000090879
- (void).cxx_destruct;	// IMP=0x0020000000090bb1
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0010000000090a85
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000090973

@end

