//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, OCFontMetadata;

__attribute__((visibility("hidden")))
@interface OCFontSubfamily : NSObject
{
    NSString *_name;	// 8 = 0x8
    OCFontMetadata *_metadata;	// 16 = 0x10
}

+ (id)fontSubfamilyWithName:(id)arg1 metadata:(id)arg2;	// IMP=0x006000000037499a
- (void).cxx_destruct;	// IMP=0x0000000000374a3b
@property(readonly, nonatomic) OCFontMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 metadata:(id)arg2;	// IMP=0x00000000003748cb

@end

