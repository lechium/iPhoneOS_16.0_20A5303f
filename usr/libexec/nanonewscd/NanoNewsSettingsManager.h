//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NanoNewsSettingsManager : NSObject
{
}

+ (void)resetSaved;	// IMP=0x0040000000005d47
+ (void)resetSeen;	// IMP=0x0010000000005d03
+ (void)setSavedIdentifiers:(id)arg1;	// IMP=0x00100000000058ea
+ (void)setPreferredRefreshDates:(id)arg1;	// IMP=0x0010000000005808
+ (id)preferredRefreshDates;	// IMP=0x0010000000005491
+ (_Bool)_validDateArray:(id)arg1;	// IMP=0x001000000000534f
+ (void)removeSeenIdentifier:(id)arg1;	// IMP=0x00100000000052d9
+ (void)removeSavedIdentifier:(id)arg1;	// IMP=0x0010000000005256
+ (void)addSavedIdentifier:(id)arg1;	// IMP=0x00100000000051d3
+ (void)addSeenIdentifier:(id)arg1;	// IMP=0x001000000000515d
+ (id)gizmoSavedHeadlineIdentifiers;	// IMP=0x0010000000005106
+ (id)articleIdentifiersOnGizmo;	// IMP=0x001000000000506a
+ (id)savedHeadlineIdentifiers;	// IMP=0x0010000000005013
+ (id)seenHeadlineIdentifiers;	// IMP=0x0010000000004fbc
+ (void)synchronizeSeenHeadlineIdentifiers;	// IMP=0x0010000000004f78

@end

