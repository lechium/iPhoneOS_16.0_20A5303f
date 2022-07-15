//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet, NSString, PUPhotoPickerResizeTaskDescriptor, UIBarButtonItem, UILabel, UITableViewController;
@protocol PUPhotoPickerFileSizeToolbarProviderDelegate, PUPhotosGridViewSupplementalToolbarDataSource;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerFileSizeToolbarProvider : NSObject
{
    id <PUPhotosGridViewSupplementalToolbarDataSource> _dataSource;	// 8 = 0x8
    UIBarButtonItem *_sizePickerItem;	// 16 = 0x10
    UILabel *_sizePickerDescriptionLabel;	// 24 = 0x18
    UITableViewController *_sizePickerViewController;	// 32 = 0x20
    _Bool _preparingToPresentSizePickerViewController;	// 40 = 0x28
    NSArray *_toolbarItems;	// 48 = 0x30
    NSArray *_resizeTaskDescriptors;	// 56 = 0x38
    NSSet *_cachedAssetSet;	// 64 = 0x40
    PUPhotoPickerResizeTaskDescriptor *_selectedTaskDescriptor;	// 72 = 0x48
    NSMutableDictionary *_taskDescriptorsToCachedLabels;	// 80 = 0x50
    id <PUPhotoPickerFileSizeToolbarProviderDelegate> _delegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000036ab9f
@property(nonatomic) __weak id <PUPhotoPickerFileSizeToolbarProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_computeSelectedIndexPath;	// IMP=0x000000000036aae5
- (void)_updateTableViewSelection;	// IMP=0x000000000036a99b
- (void)_updateSizePickerItemIfNeeded;	// IMP=0x000000000036a8e2
- (id)_localizedLabelForResizeTaskDescriptor:(id)arg1;	// IMP=0x000000000036a776
- (void)_presentSizePicker:(id)arg1;	// IMP=0x000000000036a5c3
- (id)_orderedResizeTaskDescriptorsForCurrentlySelectedAssets;	// IMP=0x000000000036a1b2
- (id)_orderedResizeTaskDescriptors;	// IMP=0x000000000036a07d
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000369f32
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000369e13
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000369dcf
- (id)_sizePickerItem;	// IMP=0x0000000000369ae5
@property(readonly, copy, nonatomic) NSArray *toolbarItems;
@property(readonly, nonatomic) _Bool shouldShowToolbar;
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000369595

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
