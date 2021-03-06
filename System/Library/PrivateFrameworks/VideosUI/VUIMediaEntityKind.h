//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaEntityKind : NSObject
{
    NSString *_mediaEntityClassName;	// 8 = 0x8
    NSArray *_propertyDescriptors;	// 16 = 0x10
    NSDictionary *_propertyDescriptorsByName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000077dda
@property(copy, nonatomic) NSDictionary *propertyDescriptorsByName; // @synthesize propertyDescriptorsByName=_propertyDescriptorsByName;
@property(copy, nonatomic) NSArray *propertyDescriptors; // @synthesize propertyDescriptors=_propertyDescriptors;
@property(readonly, copy, nonatomic) NSString *mediaEntityClassName; // @synthesize mediaEntityClassName=_mediaEntityClassName;
- (id)description;	// IMP=0x0000000000077c06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000077ba8
- (id)sortingPropertyDescriptorForName:(id)arg1;	// IMP=0x0000000000077ae2
- (id)propertyDescriptorForName:(id)arg1;	// IMP=0x0000000000077a5f
- (id)initWithMediaEntityClassName:(id)arg1;	// IMP=0x00000000000777bd
- (id)init;	// IMP=0x000000000007774e

@end

