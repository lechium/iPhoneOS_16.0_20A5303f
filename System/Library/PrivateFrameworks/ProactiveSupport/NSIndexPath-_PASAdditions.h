//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSIndexPath.h>

@class NSString;

@interface NSIndexPath (_PASAdditions)
+ (id)_pas_fromVersionString:(id)arg1 withExceptions:(_Bool)arg2;	// IMP=0x001000000001b0b1
+ (id)_pas_fromVersionStringIfPossible:(id)arg1;	// IMP=0x001000000001b081
+ (id)_pas_fromVersionString:(id)arg1;	// IMP=0x001000000001b06a
- (_Bool)_pas_isGreaterThanVersionString:(id)arg1;	// IMP=0x001000000001b00b
- (_Bool)_pas_isGreaterThanOrEqualToVersionString:(id)arg1;	// IMP=0x001000000001afac
- (_Bool)_pas_isEqualToVersionString:(id)arg1;	// IMP=0x001000000001af4e
- (_Bool)_pas_isLessThanOrEqualToVersionString:(id)arg1;	// IMP=0x001000000001aeef
- (_Bool)_pas_isLessThanVersionString:(id)arg1;	// IMP=0x001000000001ae90
- (id)_pas_asVersionString;	// IMP=0x001000000001aa6d
- (id)_pas_revivedString;	// IMP=0x0010000000034ca8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

