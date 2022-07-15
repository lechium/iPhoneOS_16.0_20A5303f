//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueUnnestedProperty, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueNestedProperty
{
    NSString *_relationshipKey;	// 24 = 0x18
    NSString *_keyPathFromRelatedObject;	// 32 = 0x20
    NSKeyValueUnnestedProperty *_relationshipProperty;	// 40 = 0x28
    NSString *_keyPathWithoutOperatorComponents;	// 48 = 0x30
    _Bool _isAllowedToResultInForwarding;	// 56 = 0x38
    id _dependentValueKeyOrKeys;	// 64 = 0x40
    _Bool _dependentValueKeyOrKeysIsASet;	// 72 = 0x48
}

- (_Bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;	// IMP=0x00000000004f9fe8
- (id)dependentValueKeyOrKeysIsASet:(_Bool *)arg1;	// IMP=0x00000000004f9fcb
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672)arg5;	// IMP=0x00000000004f9c16
- (_Bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;	// IMP=0x00000000004f9b0d
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x00000000004f9849
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x00000000004f9676
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;	// IMP=0x00000000004f9641
- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;	// IMP=0x00000000004f9602
- (Class)_isaForAutonotifying;	// IMP=0x00000000004f95e5
- (void)_addDependentValueKey:(id)arg1;	// IMP=0x00000000004f951d
- (void)_givenPropertiesBeingInitialized:(struct __CFSet *)arg1 getAffectingProperties:(id)arg2;	// IMP=0x00000000004f9500
- (id)description;	// IMP=0x00000000004f949f
- (void)dealloc;	// IMP=0x00000000004f93fa
- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 firstDotIndex:(unsigned long long)arg3 propertiesBeingInitialized:(struct __CFSet *)arg4;	// IMP=0x00000000004f91ba

@end
