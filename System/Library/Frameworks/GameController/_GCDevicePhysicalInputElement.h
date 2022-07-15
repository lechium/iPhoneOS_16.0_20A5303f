//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputElement
{
    NSString *_identifier;	// 8 = 0x8
    NSSet *_aliases;	// 16 = 0x10
    NSString *_localizedName;	// 24 = 0x18
    NSString *_sfSymbolsName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d91e5
@property(readonly) NSString *sfSymbolsName; // @synthesize sfSymbolsName=_sfSymbolsName;
@property(readonly) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly) NSSet *aliases; // @synthesize aliases=_aliases;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d90d5
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToElement:(id)arg1;	// IMP=0x00000000000d8dbd
- (id)init;	// IMP=0x00000000000d8d9a
- (id)initWith:(id)arg1 context:(id)arg2;	// IMP=0x00000000000d8c83
- (id)initWithIdentifier:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000000d8a53
- (void)onCommitInvokeCallbacks:(unsigned long long)arg1;	// IMP=0x00000000000d9240
- (unsigned long long)handleGamepadEvent:(id)arg1 withTimestamp:(double)arg2;	// IMP=0x00000000000d9238

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
