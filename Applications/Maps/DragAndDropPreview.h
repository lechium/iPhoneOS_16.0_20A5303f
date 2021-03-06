//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DragAndDropAnchorView, DragAndDropMapItem, DragAndDropPreviewImage, MKMapItem, UIImage, UITraitCollection;
@protocol DragAndDropPreviewContentUpdateDelegate;

@interface DragAndDropPreview : NSObject
{
    UIImage *_snapshotImage;	// 8 = 0x8
    DragAndDropMapItem *_dragItem;	// 16 = 0x10
    DragAndDropAnchorView *_anchorView;	// 24 = 0x18
    MKMapItem *_resolvedMapItem;	// 32 = 0x20
    _Bool _snapshotStarted;	// 40 = 0x28
    UITraitCollection *_traitCollection;	// 48 = 0x30
    id <DragAndDropPreviewContentUpdateDelegate> _contentUpdateDelegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000b6ec33
@property(nonatomic) __weak id <DragAndDropPreviewContentUpdateDelegate> contentUpdateDelegate; // @synthesize contentUpdateDelegate=_contentUpdateDelegate;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) DragAndDropMapItem *item; // @synthesize item=_dragItem;
- (void)dragAndDropAnchorViewCellDidUpdateContent:(id)arg1;	// IMP=0x0010000000b6ebac
- (void)dragAndDropItem:(id)arg1 didResolveMapItem:(id)arg2;	// IMP=0x0010000000b6eb4c
@property(readonly, nonatomic) DragAndDropPreviewImage *renderPreviewImage;
- (CDStruct_02837cd9)presentationMapRectForMapItem:(id)arg1;	// IMP=0x0010000000b6e991
- (id)imageRepresentation;	// IMP=0x0010000000b6e4db
- (void)updateWithSnapshot:(id)arg1;	// IMP=0x0010000000b6e466
- (void)createSnapshot;	// IMP=0x0010000000b6dff3
- (id)mapItem;	// IMP=0x0010000000b6dfb9
- (id)dragFeatures;	// IMP=0x0010000000b6defd
- (id)initWithDragAndDropMapItem:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0010000000b6de01
- (id)init;	// IMP=0x0010000000b6ddd6

@end

