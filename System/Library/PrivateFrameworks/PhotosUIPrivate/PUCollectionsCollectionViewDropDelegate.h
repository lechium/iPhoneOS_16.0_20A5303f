//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PUCollectionsCollectionViewDropDataProvider;

__attribute__((visibility("hidden")))
@interface PUCollectionsCollectionViewDropDelegate : NSObject
{
    _Bool _dataProviderImplementsAllowDrop;	// 8 = 0x8
    id <PUCollectionsCollectionViewDropDataProvider> _dropDataProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002fe00d
@property(nonatomic) __weak id <PUCollectionsCollectionViewDropDataProvider> dropDataProvider; // @synthesize dropDataProvider=_dropDataProvider;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x00000000002fdeb2
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x00000000002fdd1f
- (_Bool)collectionView:(id)arg1 canHandleDropSesson:(id)arg2;	// IMP=0x00000000002fdc31
- (_Bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;	// IMP=0x00000000002fdb8d
- (void)_handleDrop:(id)arg1 forItemAtIndexPath:(id)arg2;	// IMP=0x00000000002fd9cd
- (_Bool)_canHandleDropSession:(id)arg1;	// IMP=0x00000000002fd94a
- (id)_collectionAtIndexPath:(id)arg1;	// IMP=0x00000000002fd8c4
- (_Bool)_allowDrop;	// IMP=0x00000000002fd864

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
