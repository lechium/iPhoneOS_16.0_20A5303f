//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSFastEnumeration-Protocol.h>
#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSIndexSet;
@protocol PXPerson;

@protocol PXPeopleFetchResult <NSObject, NSFastEnumeration>
@property(readonly, nonatomic) long long count;
- (_Bool)containsObject:(id <PXPerson>)arg1;
- (NSArray *)objectsAtIndexes:(NSIndexSet *)arg1;
- (id <PXPerson>)objectAtIndex:(unsigned long long)arg1;
@end

