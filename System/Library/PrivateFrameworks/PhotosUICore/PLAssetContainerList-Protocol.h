//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>
#import <PhotosUICore/PLDiagnosticsProvider-Protocol.h>

@class NSManagedObjectContext, NSOrderedSet, NSString, PLPhotoLibrary;

@protocol PLAssetContainerList <NSObject, PLDiagnosticsProvider>
@property(readonly, nonatomic) unsigned long long containersCount;
- (NSString *)containersRelationshipName;
- (PLPhotoLibrary *)photoLibrary;
- (NSManagedObjectContext *)managedObjectContext;
- (_Bool)canEditContainers;
- (_Bool)isEmpty;
- (NSOrderedSet *)containers;
@end

