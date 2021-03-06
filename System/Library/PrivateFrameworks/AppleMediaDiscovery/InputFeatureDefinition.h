//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMDFeatureProvider, NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface InputFeatureDefinition : NSObject
{
    NSArray *_featureValues;	// 8 = 0x8
    NSString *_featureId;	// 16 = 0x10
    NSString *_mapOp;	// 24 = 0x18
    NSNumber *_size;	// 32 = 0x20
    NSArray *_shape;	// 40 = 0x28
    NSString *_remapDictionaryId;	// 48 = 0x30
    AMDFeatureProvider *_featureProvider;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000b0470
@property(retain, nonatomic) AMDFeatureProvider *featureProvider; // @synthesize featureProvider=_featureProvider;
@property(retain, nonatomic) NSString *remapDictionaryId; // @synthesize remapDictionaryId=_remapDictionaryId;
@property(retain, nonatomic) NSArray *shape; // @synthesize shape=_shape;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *mapOp; // @synthesize mapOp=_mapOp;
@property(retain, nonatomic) NSString *featureId; // @synthesize featureId=_featureId;
@property(retain, nonatomic) NSArray *featureValues; // @synthesize featureValues=_featureValues;
- (_Bool)isValid;	// IMP=0x00000000000b0140
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000afe60

@end

