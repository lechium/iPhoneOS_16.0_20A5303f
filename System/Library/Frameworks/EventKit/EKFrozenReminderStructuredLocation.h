//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface EKFrozenReminderStructuredLocation
{
}

+ (id)uniqueIdentifierForREMObject:(id)arg1;	// IMP=0x0060000000037be9
+ (_Bool)canCommitSelf;	// IMP=0x0060000000037be1
+ (Class)meltedClass;	// IMP=0x0060000000037853
- (void)setLatitudeAndLongitudeFromAlternateUniverseObject:(id)arg1 inChangeSet:(id)arg2;	// IMP=0x0000000000038078
- (double)radius;	// IMP=0x0000000000037f7f
- (int)referenceFrame;	// IMP=0x0000000000037f77
- (double)longitude;	// IMP=0x0000000000037e7e
- (double)latitude;	// IMP=0x0000000000037d85
- (id)address;	// IMP=0x0000000000037ccf
- (id)mapKitHandle;	// IMP=0x0000000000037c19
- (id)updateParentToCommitSelf:(id)arg1;	// IMP=0x0000000000037bfe
- (id)title;	// IMP=0x0000000000037b2b
- (id)uuid;	// IMP=0x0000000000037b19
- (id)updatedStructuredLocation;	// IMP=0x000000000003793a
- (id)_structuredLocation;	// IMP=0x0000000000037922
- (id)remObjectID;	// IMP=0x000000000003791a
@property(readonly) NSString *uniqueIdentifier;
- (id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3;	// IMP=0x0000000000037651

@end

