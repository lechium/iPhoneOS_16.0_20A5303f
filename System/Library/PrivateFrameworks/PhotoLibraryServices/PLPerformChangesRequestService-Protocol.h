//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSPersistentStoreCoordinator, NSString, PLLibraryServicesManager;

@protocol PLPerformChangesRequestService <NSObject>
- (NSString *)clientDescription;
- (NSString *)clientDisplayName;
- (NSString *)clientBundleID;
- (PLLibraryServicesManager *)libraryServicesManager;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
@end

