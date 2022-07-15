//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IdenticallyOrderedDataSource : NSObject
{
    NSArray *_orderedObjects;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000035b12d
@property(copy, nonatomic) NSArray *orderedObjects; // @synthesize orderedObjects=_orderedObjects;
- (id)viewForHeaderInSection:(long long)arg1 isFirstNonEmptySection:(_Bool)arg2;	// IMP=0x001000000035b10c
- (id)titleForHeaderInSection:(long long)arg1;	// IMP=0x001000000035b104
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x001000000035b023
- (long long)numberOfRowsInSection:(long long)arg1;	// IMP=0x001000000035afdf
@property(readonly, nonatomic) long long numberOfSections;
- (id)initWithObjects:(id)arg1;	// IMP=0x001000000035af61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
