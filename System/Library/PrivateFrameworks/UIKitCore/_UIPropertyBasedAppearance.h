//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIPropertyBasedAppearance
{
    NSDictionary *_propertiesToMatch;	// 40 = 0x28
}

+ (id)_appearanceMatchingProperties:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3;	// IMP=0x0060000000868c52
+ (id)_appearanceObjectKeyForProperties:(id)arg1;	// IMP=0x0060000000868a9e
@property(retain, nonatomic, setter=_setPropertiesToMatch:) NSDictionary *_propertiesToMatch; // @synthesize _propertiesToMatch;
- (_Bool)_isRecordingInvocations;	// IMP=0x0000000000868f3b
- (_Bool)_isValidAppearanceForCustomizableObject:(id)arg1;	// IMP=0x0000000000868d89
- (void)dealloc;	// IMP=0x0000000000868d47

@end
