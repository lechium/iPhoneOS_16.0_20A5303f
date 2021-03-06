//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSMapTable;

@interface DynamicTypeWizard : NSObject
{
    NSMapTable *_labelToFontMap;	// 8 = 0x8
    NSMapTable *_constraintToValueMap;	// 16 = 0x10
    NSMapTable *_stackToValueMap;	// 24 = 0x18
    NSDictionary *_objectToSelectorStringMaps;	// 32 = 0x20
}

+ (id)_singletonInstance;	// IMP=0x0040000000a9e6ec
+ (void)unregisterObject:(id)arg1;	// IMP=0x0010000000a9e4f6
+ (void)makeObject:(id)arg1 performSelector:(SEL)arg2 whenSizeCategoryChangesWithOrder:(unsigned long long)arg3;	// IMP=0x0010000000a9e3ca
+ (void)stopAutoscalingStackView:(id)arg1;	// IMP=0x0010000000a9e339
+ (void)autoscaleStackView:(id)arg1 spacing:(double)arg2 withFontProvider:(CDUnknownBlockType)arg3;	// IMP=0x0010000000a9e222
+ (void)updateUnscaledConstantValue:(double)arg1 fontProvider:(CDUnknownBlockType)arg2 forConstraint:(id)arg3;	// IMP=0x0010000000a9e12c
+ (id)autoscaledConstraint:(id)arg1 constant:(double)arg2 withFontProvider:(CDUnknownBlockType)arg3;	// IMP=0x0010000000a9dee9
+ (void)autorefreshLabel:(id)arg1 withFontProvider:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a9ddee
- (void).cxx_destruct;	// IMP=0x0020000000a9f23f
@property(retain, nonatomic) NSDictionary *objectToSelectorStringMaps; // @synthesize objectToSelectorStringMaps=_objectToSelectorStringMaps;
@property(retain, nonatomic) NSMapTable *stackToValueMap; // @synthesize stackToValueMap=_stackToValueMap;
@property(retain, nonatomic) NSMapTable *constraintToValueMap; // @synthesize constraintToValueMap=_constraintToValueMap;
@property(retain, nonatomic) NSMapTable *labelToFontMap; // @synthesize labelToFontMap=_labelToFontMap;
- (void)_contentSizeCategoryDidChange;	// IMP=0x0010000000a9ea2f
- (MISSING_TYPE *)init;	// IMP=0x0010000000a9e771

@end

