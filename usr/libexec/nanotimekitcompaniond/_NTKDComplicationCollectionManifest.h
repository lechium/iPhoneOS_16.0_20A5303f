//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface _NTKDComplicationCollectionManifest : NSObject
{
    NSMutableSet *_clients;	// 8 = 0x8
    NSMutableDictionary *_clientToSampleTemplateFamilies;	// 16 = 0x10
    NSMutableDictionary *_clientToComplicationDescriptorIdentifiers;	// 24 = 0x18
}

+ (id)emptyManifest;	// IMP=0x004000000002ea99
- (void).cxx_destruct;	// IMP=0x002000000002fe7c
- (void)writeToFile:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x001000000002f96f
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x001000000002ef24
- (_Bool)removeSampleTemplatesForKey:(id)arg1;	// IMP=0x001000000002edba
- (void)setClientId:(id)arg1 supportForComplicationDescriptorIdentifiers:(id)arg2;	// IMP=0x001000000002ed06
- (_Bool)addKey:(id)arg1 supportForSampleTemplateForFamily:(long long)arg2;	// IMP=0x001000000002ebb6
- (id)complicationDescriptorIdentifiersForClientIdentifier:(id)arg1;	// IMP=0x001000000002eba0
- (id)familiesWithSampleTemplateForKey:(id)arg1;	// IMP=0x001000000002eb8a
- (id)clientIds;	// IMP=0x001000000002eb74
- (id)init;	// IMP=0x001000000002eab3

@end

