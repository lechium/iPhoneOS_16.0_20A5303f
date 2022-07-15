//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueUnnestedProperty
{
    NSArray *_affectingProperties;	// 24 = 0x18
    _Bool _cachedIsaForAutonotifyingIsValid;	// 32 = 0x20
    Class _cachedIsaForAutonotifying;	// 40 = 0x28
}

- (_Bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;	// IMP=0x00000000004f919a
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672)arg5;	// IMP=0x00000000004f901a
- (_Bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;	// IMP=0x00000000004f8d76
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x00000000004f8c3f
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x00000000004f8b08
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;	// IMP=0x00000000004f89c2
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;	// IMP=0x00000000004f898f
- (id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;	// IMP=0x00000000004f881b
- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;	// IMP=0x00000000004f87e3
- (Class)isaForAutonotifying;	// IMP=0x00000000004f8693
- (Class)_isaForAutonotifying;	// IMP=0x00000000004f8642
- (void)_addDependentValueKey:(id)arg1;	// IMP=0x00000000004f863c
- (void)_givenPropertiesBeingInitialized:(struct __CFSet *)arg1 getAffectingProperties:(id)arg2;	// IMP=0x00000000004f8189
- (id)description;	// IMP=0x00000000004f808e
- (void)dealloc;	// IMP=0x00000000004f8029
- (id)_initWithContainerClass:(id)arg1 key:(id)arg2 propertiesBeingInitialized:(struct __CFSet *)arg3;	// IMP=0x00000000004f7e1c

@end
