//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSString, PHCollection, PUAlbumListCellContentView, PUAlbumListCellContentViewHelper, PXAssetCollectionActionManager, PXGadgetSpec;
@protocol PUAlbumGadgetDelegate, PXGadgetDelegate;

__attribute__((visibility("hidden")))
@interface PUAlbumGadget : NSObject
{
    _Bool _contentViewVisible;	// 8 = 0x8
    _Bool _needsUpdate;	// 9 = 0x9
    PXGadgetSpec *_gadgetSpec;	// 16 = 0x10
    id <PXGadgetDelegate> _delegate;	// 24 = 0x18
    PUAlbumListCellContentView *_albumListCellContentView;	// 32 = 0x20
    PXAssetCollectionActionManager *_actionManager;	// 40 = 0x28
    PHCollection *_collection;	// 48 = 0x30
    id <PUAlbumGadgetDelegate> _albumGadgetDelegate;	// 56 = 0x38
    NSIndexSet *_indexesOfHiddenStackItems;	// 64 = 0x40
    double _lastPreferredHeight;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000008b5a8
@property(nonatomic) double lastPreferredHeight; // @synthesize lastPreferredHeight=_lastPreferredHeight;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(nonatomic, getter=isContentViewVisible) _Bool contentViewVisible; // @synthesize contentViewVisible=_contentViewVisible;
@property(copy, nonatomic) NSIndexSet *indexesOfHiddenStackItems; // @synthesize indexesOfHiddenStackItems=_indexesOfHiddenStackItems;
@property(nonatomic) __weak id <PUAlbumGadgetDelegate> albumGadgetDelegate; // @synthesize albumGadgetDelegate=_albumGadgetDelegate;
@property(retain, nonatomic) PHCollection *collection; // @synthesize collection=_collection;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000000008b3ee
- (id)contextMenuWithSuggestedActions:(id)arg1;	// IMP=0x000000000008b361
- (id)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(id)arg2;	// IMP=0x000000000008b189
- (id)targetPreviewViewForLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000000008b177
@property(readonly, copy) NSString *description;
- (void)contentViewDidDisappear;	// IMP=0x000000000008b0db
- (void)contentViewWillAppear;	// IMP=0x000000000008b0a8
@property(readonly, nonatomic) PUAlbumListCellContentViewHelper *albumListCellContentViewHelper;
- (id)contentView;	// IMP=0x000000000008b037
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000008afdd
@property(readonly, nonatomic) unsigned long long gadgetCapabilities;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (long long)estimatedIndexInCollection:(id)arg1 ofAssetForStackItemAtIndex:(long long)arg2;	// IMP=0x000000000008aee9
- (struct CGRect)rectForStackItemAtIndex:(long long)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000000008ae35
@property(readonly, nonatomic) PUAlbumListCellContentView *albumListCellContentView; // @synthesize albumListCellContentView=_albumListCellContentView;
@property(readonly, nonatomic) PXAssetCollectionActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(readonly, nonatomic) NSString *title;
- (void)_updateContent;	// IMP=0x000000000008a75d
- (void)reconfigure;	// IMP=0x000000000008a713
- (id)initWithCollection:(id)arg1 albumGadgetDelegate:(id)arg2;	// IMP=0x000000000008a67a
- (id)init;	// IMP=0x000000000008a600

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, nonatomic) Class collectionViewItemClass;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(nonatomic) long long priority;
@property(readonly) Class superclass;
@property(nonatomic) struct CGRect visibleContentRect;
@property(readonly, nonatomic) _Bool wantsMultilineTitle;

@end
