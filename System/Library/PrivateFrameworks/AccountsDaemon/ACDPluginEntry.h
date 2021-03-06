//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface ACDPluginEntry : NSObject
{
    id _principalObject;	// 8 = 0x8
    NSSet *_supportedAccountTypes;	// 16 = 0x10
    NSSet *_supportedDataclasses;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    struct {
        unsigned int principalObject:1;
        unsigned int supportedAccountTypes:1;
        unsigned int supportedDataclasses:1;
        unsigned int identifier:1;
    } _fetchedFlags;	// 40 = 0x28
    NSBundle *_bundle;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000859f0
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)debugDescription;	// IMP=0x00000000000858b6
- (id)description;	// IMP=0x0000000000085813
- (_Bool)principalObjectRespondsToSelector:(SEL)arg1;	// IMP=0x00000000000857de
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) id principalObject;
@property(readonly, nonatomic) NSSet *supportedDataclasses;
@property(readonly, nonatomic) NSSet *supportedAccountTypes;
- (id)initWithBundle:(id)arg1;	// IMP=0x00000000000853c7
- (id)init;	// IMP=0x000000000008539c

@end

