//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlacesKit/NSObject-Protocol.h>

@class NSSet;
@protocol PXPlacesGeotaggedItemDataSourceChange;

@protocol PXPlacesGeotaggedItemDataSourceChange <NSObject>
@property(readonly) NSSet *updatedItems;
@property(readonly) NSSet *removedItems;
@property(readonly) NSSet *addedItems;
- (_Bool)hasChanges;
- (void)updateWithChange:(id <PXPlacesGeotaggedItemDataSourceChange>)arg1;
@end
