//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (KeyPathLookup)
+ (id)shortDescription;	// IMP=0x0010000000050d63
- (id)hmf_firstObjectWithCharacteristicType:(id)arg1;	// IMP=0x0010000000004df4
- (id)hmf_firstObjectWithInstanceID:(id)arg1;	// IMP=0x0010000000004ddb
- (id)hmf_firstObjectWithSPIUniqueIdentifier:(id)arg1;	// IMP=0x0010000000004dc2
- (id)hmf_firstObjectWithUniqueIdentifier:(id)arg1;	// IMP=0x0010000000004da9
- (id)hmf_firstObjectWithZoneID:(id)arg1;	// IMP=0x0010000000004d90
- (id)hmf_firstObjectWithUUID:(id)arg1;	// IMP=0x0010000000004d77
- (id)hmf_firstObjectWithName:(id)arg1;	// IMP=0x0010000000004d5e
- (id)hmf_firstObjectWithValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0010000000004a5b
- (id)hmf_objectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051435
- (id)hmf_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000005141e
- (id)hmf_objectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x001000000005139a
- (id)hmf_objectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000051383
- (_Bool)hmf_objectsAreKindOfClass:(Class)arg1;	// IMP=0x0010000000051262
@property(readonly, getter=hmf_isEmpty) _Bool hmf_empty;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)describeElements:(CDUnknownBlockType)arg1;	// IMP=0x00100000000518e3
- (id)secureDescriptionWithBlacklistKeys:(id)arg1;	// IMP=0x00100000000518ca
- (id)secureDescriptionWithIndent:(id)arg1 newLine:(_Bool)arg2 blacklistedKeys:(id)arg3;	// IMP=0x00100000000514e0

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@end

