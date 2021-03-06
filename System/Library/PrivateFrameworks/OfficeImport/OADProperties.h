//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADProperties : NSObject
{
    OADProperties *mParent;	// 8 = 0x8
    unsigned int mIsMerged:1;	// 16 = 0x10
    unsigned int mIsMergedWithParent:1;	// 16 = 0x10
}

+ (id)defaultProperties;	// IMP=0x006000000002b6eb
- (void).cxx_destruct;	// IMP=0x000000000031d804
- (id)description;	// IMP=0x000000000031d7c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031d63d
- (unsigned long long)hash;	// IMP=0x0000000000102931
- (void)removeUnnecessaryOverrides;	// IMP=0x000000000003026b
- (_Bool)isAnythingOverridden;	// IMP=0x000000000031d635
- (void)flatten;	// IMP=0x000000000031d5ef
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;	// IMP=0x000000000031d5e9
- (void)changeParentPreservingEffectiveValues:(id)arg1;	// IMP=0x000000000031d548
- (_Bool)isMergedPropertyForSelector:(SEL)arg1;	// IMP=0x00000000000239e3
- (id)possiblyInexistentOverrideForSelector:(SEL)arg1;	// IMP=0x000000000031d534
- (id)overrideForSelector:(SEL)arg1;	// IMP=0x0000000000023227
- (id)overrideForSelector:(SEL)arg1 mustExist:(_Bool)arg2;	// IMP=0x000000000031d47d
- (void)setMergedWithParent:(_Bool)arg1;	// IMP=0x0000000000023831
- (_Bool)isMergedWithParent;	// IMP=0x0000000000023814
- (void)setMerged:(_Bool)arg1;	// IMP=0x0000000000023821
- (_Bool)isMerged;	// IMP=0x0000000000023809
- (void)setParent:(id)arg1;	// IMP=0x000000000000aadf
- (void)p_setParent:(id)arg1;	// IMP=0x000000000000aba4
- (id)parent;	// IMP=0x000000000000abaa
- (id)initWithDefaults;	// IMP=0x000000000000a83a
- (id)init;	// IMP=0x000000000000a872

@end

