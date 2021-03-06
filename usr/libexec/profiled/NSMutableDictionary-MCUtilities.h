//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (MCUtilities)
- (void)MCSanitizeRestrictions;	// IMP=0x0010000000016bec
- (void)MCFixUpRestrictionsDictionaryForMDMReporting;	// IMP=0x0010000000016562
- (void)MCFilterRestrictionPayloadKeys:(id)arg1;	// IMP=0x001000000001633e
- (void)MCSetUnionSetting:(id)arg1 values:(id)arg2;	// IMP=0x0010000000016029
- (void)MCSetIntersectionSetting:(id)arg1 values:(id)arg2;	// IMP=0x0010000000015d14
- (void)MCSetUnionRestriction:(id)arg1 values:(id)arg2;	// IMP=0x00100000000159ff
- (void)MCSetIntersectionRestriction:(id)arg1 values:(id)arg2;	// IMP=0x00100000000156ea
- (void)MCSetValueRestriction:(id)arg1 value:(id)arg2;	// IMP=0x00100000000153a2
- (void)MCDeleteBoolRestriction:(id)arg1;	// IMP=0x00100000000152f1
- (void)MCSetBoolRestriction:(id)arg1 value:(_Bool)arg2;	// IMP=0x0010000000015022
- (void)MCSetObjectIfNotNil:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000015009
- (void)MCDeepCopyMissingEntriesFromDictionary:(id)arg1;	// IMP=0x0010000000014d72
- (void)MCDeepCopyEntriesFromDictionary:(id)arg1;	// IMP=0x0010000000014ad6
@end

