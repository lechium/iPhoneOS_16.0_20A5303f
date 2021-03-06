//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADDrawableProperties;
@protocol OADClient, OADDrawableContainer;

__attribute__((visibility("hidden")))
@interface OADDrawable : NSObject
{
    _Bool mHidden;	// 8 = 0x8
    unsigned int mId;	// 12 = 0xc
    unsigned int mAltId;	// 16 = 0x10
    OADDrawableProperties *mDrawableProperties;	// 24 = 0x18
    id <OADClient> mClientData;	// 32 = 0x20
    OADDrawable<OADDrawableContainer> *mParent;	// 40 = 0x28
}

+ (unsigned int)generateOADDrawableId:(id)arg1;	// IMP=0x006000000030f177
- (void).cxx_destruct;	// IMP=0x000000000030f1cb
@property __weak OADDrawable<OADDrawableContainer> *parent; // @synthesize parent=mParent;
- (id)description;	// IMP=0x000000000030f18d
- (id)createOrientedBoundsWithBounds:(struct CGRect)arg1;	// IMP=0x000000000030efc1
- (void)removeUnnecessaryOverrides;	// IMP=0x0000000000033102
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;	// IMP=0x000000000030edee
- (void)setParentTextListStyle:(id)arg1;	// IMP=0x000000000030ec1b
- (id)ensureClientDataOfClass:(Class)arg1;	// IMP=0x00000000001cc0a4
- (id)clientData;	// IMP=0x000000000002e5cc
- (void)setClientData:(id)arg1;	// IMP=0x000000000002de34
- (void)setDrawableProperties:(id)arg1;	// IMP=0x00000000000299dc
- (id)drawableProperties;	// IMP=0x0000000000028ee4
- (void)setAltId:(unsigned int)arg1;	// IMP=0x000000000030ec12
- (unsigned int)altId;	// IMP=0x000000000030ec09
- (void)setId:(unsigned int)arg1;	// IMP=0x000000000002909a
- (unsigned int)id;	// IMP=0x000000000015a83a
- (void)setHidden:(_Bool)arg1;	// IMP=0x000000000002df24
- (_Bool)hidden;	// IMP=0x00000000000a5e2c
- (id)initWithPropertiesClass:(Class)arg1;	// IMP=0x0000000000028d0e
- (id)createWordClientDataWithTextType:(int)arg1;	// IMP=0x00000000003e983f

@end

