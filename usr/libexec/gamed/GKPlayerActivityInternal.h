//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface GKPlayerActivityInternal
{
    NSArray *_sections;	// 8 = 0x8
    NSString *_continuationToken;	// 16 = 0x10
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00400000000906c9
- (void).cxx_destruct;	// IMP=0x0020000000090848
@property(retain, nonatomic) NSString *continuationToken; // @synthesize continuationToken=_continuationToken;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (id)description;	// IMP=0x0010000000090636
- (id)initWithServerResponse:(id)arg1;	// IMP=0x00100000000903b5

@end
