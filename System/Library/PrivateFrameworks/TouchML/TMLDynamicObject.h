//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TMLDynamicObject : NSObject
{
    NSMutableDictionary *_properties;	// 8 = 0x8
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;	// IMP=0x006000000007b192
+ (id)dynamicPropertyType:(id)arg1;	// IMP=0x006000000007b18a
- (void).cxx_destruct;	// IMP=0x000000000007c068
@property(readonly, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;
- (id)init;	// IMP=0x000000000007b134

@end

