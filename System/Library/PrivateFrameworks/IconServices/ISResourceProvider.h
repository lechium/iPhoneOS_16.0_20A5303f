//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IFSymbol, ISCustomRecipe, NSArray, NSData, NSDictionary, NSMutableDictionary, NSString, NSUUID;
@protocol ISCompositorResource;

__attribute__((visibility("hidden")))
@interface ISResourceProvider : NSObject
{
    _Bool _isGenericProvider;	// 8 = 0x8
    _Bool _placeholder;	// 9 = 0x9
    _Bool _supportsGraphicIcons;	// 10 = 0xa
    _Bool _onlySupportsGraphicIcons;	// 11 = 0xb
    unsigned long long _lsDatabaseSequenceNumber;	// 16 = 0x10
    NSUUID *_lsDatabaseUUID;	// 24 = 0x18
    NSData *_resourceToken;	// 32 = 0x20
    id <ISCompositorResource> _templateIconResource;	// 40 = 0x28
    NSDictionary *_decorationResources;	// 48 = 0x30
    unsigned long long _iconShape;	// 56 = 0x38
    NSArray *_sourceRecordIdentifiers;	// 64 = 0x40
    unsigned long long _options;	// 72 = 0x48
    NSMutableDictionary *_resourcesByResourceKey;	// 80 = 0x50
    ISCustomRecipe *_customRecipe;	// 88 = 0x58
}

+ (id)resourceProviderWithTypeIdentifier:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0010000000024e0d
+ (id)resourceProviderWithLSIconReource:(id)arg1;	// IMP=0x0010000000024e05
+ (id)resourceProviderWithRecord:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0010000000024da9
+ (id)defaultIconResourceProvider;	// IMP=0x0010000000026098
+ (id)resourceWithTypeCode:(unsigned int)arg1 options:(unsigned long long)arg2;	// IMP=0x0010000000026090
+ (id)resourceWithTypeIdentifier:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0010000000026088
+ (id)resourceWithBundleURL:(id)arg1 iconDictionary:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0010000000025448
+ (id)resourceWithRecord:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00100000000252a7
- (void).cxx_destruct;	// IMP=0x0000000000025248
@property(retain) ISCustomRecipe *customRecipe; // @synthesize customRecipe=_customRecipe;
@property(readonly) NSMutableDictionary *resourcesByResourceKey; // @synthesize resourcesByResourceKey=_resourcesByResourceKey;
@property(readonly) _Bool onlySupportsGraphicIcons; // @synthesize onlySupportsGraphicIcons=_onlySupportsGraphicIcons;
@property(readonly) _Bool supportsGraphicIcons; // @synthesize supportsGraphicIcons=_supportsGraphicIcons;
@property _Bool placeholder; // @synthesize placeholder=_placeholder;
@property unsigned long long options; // @synthesize options=_options;
@property(retain) NSArray *sourceRecordIdentifiers; // @synthesize sourceRecordIdentifiers=_sourceRecordIdentifiers;
@property _Bool isGenericProvider; // @synthesize isGenericProvider=_isGenericProvider;
@property unsigned long long iconShape; // @synthesize iconShape=_iconShape;
@property(retain) NSDictionary *decorationResources; // @synthesize decorationResources=_decorationResources;
@property(readonly) id <ISCompositorResource> templateIconResource; // @synthesize templateIconResource=_templateIconResource;
@property(retain) NSData *resourceToken; // @synthesize resourceToken=_resourceToken;
@property(retain) NSUUID *lsDatabaseUUID; // @synthesize lsDatabaseUUID=_lsDatabaseUUID;
@property unsigned long long lsDatabaseSequenceNumber; // @synthesize lsDatabaseSequenceNumber=_lsDatabaseSequenceNumber;
- (_Bool)_isAppleResource;	// IMP=0x00000000000250ef
@property(readonly) IFSymbol *symbol; // @dynamic symbol;
@property(readonly) NSData *validationToken; // @dynamic validationToken;
- (id)resourceNamed:(id)arg1;	// IMP=0x0000000000024fc3
- (id)resourceForKey:(id)arg1;	// IMP=0x0000000000024fb1
@property(retain) id <ISCompositorResource> iconResource; // @dynamic iconResource;
- (id)initWithResources:(id)arg1;	// IMP=0x0000000000024f0c
- (id)initWithResource:(id)arg1 templateResource:(id)arg2;	// IMP=0x0000000000024e77
- (id)init;	// IMP=0x0000000000024e15
@property(readonly) _Bool isDocumentBadge;
@property(readonly) _Bool isPrecomposed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

