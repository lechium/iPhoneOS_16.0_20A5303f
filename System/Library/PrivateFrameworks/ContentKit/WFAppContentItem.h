//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFAppContentItem : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
}

+ (id)countDescription;	// IMP=0x006000000005af79
+ (id)pluralTypeDescription;	// IMP=0x006000000005af61
+ (id)typeDescription;	// IMP=0x006000000005af50
+ (id)contentCategories;	// IMP=0x006000000005aee9
+ (id)outputTypes;	// IMP=0x006000000005ae26
+ (id)ownedTypes;	// IMP=0x006000000005adaa
- (void).cxx_destruct;	// IMP=0x000000000005af94
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;

@end

