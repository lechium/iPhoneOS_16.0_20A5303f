//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaLookupItemArtwork : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
}

+ (id)colorForColorKind:(id)arg1 inColorDictionary:(id)arg2;	// IMP=0x006000000004dc32
- (void).cxx_destruct;	// IMP=0x000000000004dd05
- (id)URLWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4;	// IMP=0x000000000004d80b
- (id)colors;	// IMP=0x000000000004d5e8
@property(readonly, nonatomic) long long width;
@property(readonly, nonatomic) long long height;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000004d4a0

@end

