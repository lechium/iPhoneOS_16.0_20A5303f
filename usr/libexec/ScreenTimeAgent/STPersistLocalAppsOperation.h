//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSBackgroundActivityScheduler, NSNumber, NSSet;

@interface STPersistLocalAppsOperation
{
    NSSet *_predeterminedInstalledAppIdentifiers;	// 8 = 0x8
    NSBackgroundActivityScheduler *_backgroundActivity;	// 16 = 0x10
}

+ (_Bool)_shouldSkipApplicationWithParentURLResourceValues:(id)arg1;	// IMP=0x004000000005c45c
- (void).cxx_destruct;	// IMP=0x002000000005da08
@property(retain) NSBackgroundActivityScheduler *backgroundActivity; // @synthesize backgroundActivity=_backgroundActivity;
@property(retain, nonatomic) NSSet *predeterminedInstalledAppIdentifiers; // @synthesize predeterminedInstalledAppIdentifiers=_predeterminedInstalledAppIdentifiers;
- (void)main;	// IMP=0x001000000005cb43
- (void)_collectAppMetadata:(id)arg1;	// IMP=0x001000000005c4c0
- (id)_collectInstalledApps:(id)arg1;	// IMP=0x001000000005bd38
- (id)initWithPersistenceController:(id)arg1 installedApps:(id)arg2 backgroundActivity:(id)arg3;	// IMP=0x001000000005bc8e
- (id)initWithPersistenceController:(id)arg1 installedApps:(id)arg2;	// IMP=0x001000000005bc79
- (MISSING_TYPE *)initWithPersistenceController: /* Error: Ran out of types for this method. */;	// IMP=0x001000000005bc65

// Remaining properties
@property(readonly) NSNumber *resultObject; // @dynamic resultObject;

@end

