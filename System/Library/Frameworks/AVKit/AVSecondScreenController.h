//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface AVSecondScreenController : NSObject
{
    _Bool _allowsUpdatingActiveConnection;	// 8 = 0x8
    AVObservationController *_observationController;	// 16 = 0x10
    NSMutableOrderedSet *_secondScreens;	// 24 = 0x18
    NSMutableOrderedSet *_connections;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00600000000258af
- (void).cxx_destruct;	// IMP=0x00000000000251ec
@property(nonatomic) _Bool allowsUpdatingActiveConnection; // @synthesize allowsUpdatingActiveConnection=_allowsUpdatingActiveConnection;
@property(readonly, nonatomic) NSMutableOrderedSet *connections; // @synthesize connections=_connections;
@property(readonly, nonatomic) NSMutableOrderedSet *secondScreens; // @synthesize secondScreens=_secondScreens;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
- (void)_insertConnection:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000250b2
- (void)_updateActiveConnection;	// IMP=0x0000000000024e3a
- (id)_targetScreen;	// IMP=0x0000000000024c53
- (id)_connectionForPlayer:(id)arg1;	// IMP=0x0000000000024ab2
- (id)activeConnection;	// IMP=0x0000000000024a99
- (void)removeSecondScreen:(id)arg1;	// IMP=0x0000000000024995
- (void)addSecondScreen:(id)arg1;	// IMP=0x0000000000024858
- (void)setPreferredConnection:(id)arg1;	// IMP=0x0000000000024610
- (id)preferredConnection;	// IMP=0x00000000000245c0
- (id)connectionPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000002442e
- (void)removeConnection:(id)arg1;	// IMP=0x0000000000024315
- (void)addConnection:(id)arg1;	// IMP=0x0000000000024194
- (id)addConnectionForPlayer:(id)arg1 playerLayer:(id)arg2;	// IMP=0x000000000002409d
- (void)dealloc;	// IMP=0x0000000000024047
- (id)init;	// IMP=0x0000000000023c89

@end

