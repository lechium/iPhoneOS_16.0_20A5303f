//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (Shared)
@property(readonly, nonatomic) NSString *ic_quotedString;
- (id)tombstone;	// IMP=0x00200000000777cc
- (void)realizeLocalChangesIn:(id)arg1;	// IMP=0x00200000000777c6
- (void)setDocument:(id)arg1;	// IMP=0x00200000000777c0
- (void)walkGraph:(CDUnknownBlockType)arg1;	// IMP=0x00200000000777ba
- (id)deltaSince:(id)arg1 in:(id)arg2;	// IMP=0x00200000000777b2
- (void)encodeWithCRCoder:(id)arg1;	// IMP=0x0020000000077790
- (id)initWithCRCoder:(id)arg1;	// IMP=0x0020000000077730
- (void)mergeWith:(id)arg1;	// IMP=0x00200000000776d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

