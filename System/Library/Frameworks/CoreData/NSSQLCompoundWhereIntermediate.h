//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLCompoundWhereIntermediate
{
    NSMutableArray *_subclauses;	// 24 = 0x18
    NSSQLEntity *_disambiguatingEntity;	// 32 = 0x20
    NSArray *_disambiguationKeypath;	// 40 = 0x28
    _Bool _disambiguationKeypathHasToMany;	// 48 = 0x30
}

- (_Bool)isOrScoped;	// IMP=0x0000000000161417
- (id)generateSQLStringInContext:(id)arg1;	// IMP=0x000000000016104b
- (void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(_Bool)arg3;	// IMP=0x000000000016100f
- (_Bool)disambiguationKeypathHasToMany;	// IMP=0x0000000000160fdf
- (id)disambiguationKeypath;	// IMP=0x0000000000160fb7
- (id)disambiguatingEntity;	// IMP=0x0000000000160f8f
- (void)dealloc;	// IMP=0x0000000000160f24
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;	// IMP=0x0000000000160c2b

@end

