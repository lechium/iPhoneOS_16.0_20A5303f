//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSearchAttributionSource, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionInfo : NSObject
{
    GEOSearchAttributionSource *_source;	// 8 = 0x8
    NSArray *_logoPaths;	// 16 = 0x10
    NSArray *_snippetLogoPaths;	// 24 = 0x18
    NSString *_displayName;	// 32 = 0x20
    NSString *_captionDisplayName;	// 40 = 0x28
    unsigned int _attributionRequirementsMask;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000011fc8d5
- (void).cxx_destruct;	// IMP=0x00000000011fd516
@property(readonly, nonatomic) GEOSearchAttributionSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) unsigned int requirementsMask; // @synthesize requirementsMask=_attributionRequirementsMask;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *captionDisplayName; // @synthesize captionDisplayName=_captionDisplayName;
- (void)addLogoPath:(id)arg1;	// IMP=0x00000000011fd45e
- (id)snippetLogoPathForScale:(double)arg1;	// IMP=0x00000000011fd13a
- (id)logoPathForScale:(double)arg1;	// IMP=0x00000000011fce16
- (_Bool)hasAttributionRequirement:(int)arg1;	// IMP=0x00000000011fce07
- (id)description;	// IMP=0x00000000011fcd58
- (id)dictionaryRepresentation;	// IMP=0x00000000011fcb9f
- (_Bool)supportsActionURLs;	// IMP=0x00000000011fc8dd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000011fc7cf
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000011fc593
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000000011fc36a
@property(readonly, nonatomic) NSString *appAdamID;
@property(readonly, nonatomic) _Bool shouldOpenInAppStore;
@property(readonly, nonatomic) NSString *webBaseActionURL;
@property(readonly, nonatomic) NSArray *attributionApps;
@property(readonly, nonatomic) unsigned int version;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4;	// IMP=0x00000000011fc0f7

@end
