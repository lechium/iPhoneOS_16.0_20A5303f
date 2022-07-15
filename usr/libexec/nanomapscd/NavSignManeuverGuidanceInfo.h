//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GuidanceManeuverArtwork, MKServerFormattedString, NSArray, NSHashTable, NSUUID, NavSignShieldInfo;

@interface NavSignManeuverGuidanceInfo : NSObject
{
    _Bool _willNotify;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    NSUUID *_signID;	// 24 = 0x18
    GuidanceManeuverArtwork *_maneuverArtwork;	// 32 = 0x20
    NSArray *_majorTextAlternatives;	// 40 = 0x28
    NSArray *_minorTextAlternatives;	// 48 = 0x30
    NavSignShieldInfo *_shieldInfo;	// 56 = 0x38
}

+ (id)updatedGuidanceWithPreviousGuidance:(id)arg1 currentGuidance:(id)arg2;	// IMP=0x004000000003020c
- (void).cxx_destruct;	// IMP=0x00200000000313e7
@property(retain, nonatomic) NavSignShieldInfo *shieldInfo; // @synthesize shieldInfo=_shieldInfo;
@property(copy, nonatomic) NSArray *minorTextAlternatives; // @synthesize minorTextAlternatives=_minorTextAlternatives;
@property(copy, nonatomic) NSArray *majorTextAlternatives; // @synthesize majorTextAlternatives=_majorTextAlternatives;
@property(retain, nonatomic) GuidanceManeuverArtwork *maneuverArtwork; // @synthesize maneuverArtwork=_maneuverArtwork;
@property(readonly, nonatomic) NSUUID *signID; // @synthesize signID=_signID;
- (void)_setNeedsChangeNotification;	// IMP=0x0010000000031103
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000030fcc
- (id)description;	// IMP=0x00100000000309ea
- (void)removeGuidanceObserver:(id)arg1;	// IMP=0x00100000000309d4
- (void)addGuidanceObserver:(id)arg1;	// IMP=0x00100000000309be
- (_Bool)matchesManeuver:(int)arg1 minorTextAlternatives:(id)arg2;	// IMP=0x00100000000308b6
- (_Bool)matchesManeuver:(int)arg1 minorTextAlternatives:(id)arg2 shieldInfo:(id)arg3;	// IMP=0x0010000000030720
@property(retain, nonatomic) MKServerFormattedString *minorText;
@property(retain, nonatomic) MKServerFormattedString *majorText;
- (id)initWithSignID:(id)arg1 maneuverArtwork:(id)arg2 majorTextAlternatives:(id)arg3 minorTextAlternatives:(id)arg4 shieldInfo:(id)arg5;	// IMP=0x0010000000030392

@end
