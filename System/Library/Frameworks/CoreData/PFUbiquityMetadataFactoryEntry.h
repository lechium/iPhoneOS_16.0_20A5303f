//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersistentStore, NSPersistentStoreCoordinator, PFUbiquityLocation, PFUbiquityMetadataFactoryFilePresenter;

__attribute__((visibility("hidden")))
@interface PFUbiquityMetadataFactoryEntry : NSObject
{
    PFUbiquityLocation *_metadataStoreFileLocation;	// 8 = 0x8
    NSPersistentStoreCoordinator *_psc;	// 16 = 0x10
    NSPersistentStore *_store;	// 24 = 0x18
    PFUbiquityMetadataFactoryFilePresenter *_filePresenter;	// 32 = 0x20
}

- (id)description;	// IMP=0x0000000000322582
- (void)dealloc;	// IMP=0x0000000000322503
- (id)initWithMetadataStoreFileLocation:(id)arg1;	// IMP=0x000000000032248b
- (id)init;	// IMP=0x000000000032244c

@end
