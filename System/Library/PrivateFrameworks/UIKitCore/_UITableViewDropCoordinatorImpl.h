//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath, NSString, UITableViewDropProposal;
@protocol UIDropSession, _UITableViewDropCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface _UITableViewDropCoordinatorImpl : NSObject
{
    id <_UITableViewDropCoordinatorDelegate> _delegate;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
    NSIndexPath *_destinationIndexPath;	// 24 = 0x18
    NSIndexPath *_translatedDestinationIndexPath;	// 32 = 0x20
    UITableViewDropProposal *_proposal;	// 40 = 0x28
    id <UIDropSession> _session;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000001039cba
@property(retain, nonatomic) id <UIDropSession> session; // @synthesize session=_session;
@property(retain, nonatomic) UITableViewDropProposal *proposal; // @synthesize proposal=_proposal;
@property(retain, nonatomic, getter=_translatedDestinationIndexPath, setter=_setTranslatedDestinationIndexPath:) NSIndexPath *translatedDestinationIndexPath; // @synthesize translatedDestinationIndexPath=_translatedDestinationIndexPath;
@property(retain, nonatomic) NSIndexPath *destinationIndexPath; // @synthesize destinationIndexPath=_destinationIndexPath;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <_UITableViewDropCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_dropItem:(id)arg1 toCell:(id)arg2 withPreviewParameters:(id)arg3;	// IMP=0x00000000010399e1
- (void)_dropItem:(id)arg1 toTarget:(id)arg2;	// IMP=0x00000000010399c6
- (id)dropItem:(id)arg1 toTarget:(id)arg2;	// IMP=0x00000000010397ae
- (void)_dropItem:(id)arg1 toRowAtIndexPath:(id)arg2;	// IMP=0x0000000001039793
- (id)dropItem:(id)arg1 toRowAtIndexPath:(id)arg2;	// IMP=0x000000000103957b
- (id)dropItem:(id)arg1 intoRowAtIndexPath:(id)arg2 rect:(struct CGRect)arg3;	// IMP=0x000000000103933d
- (id)_dropItem:(id)arg1 toPlaceholderInsertedAtIndexPath:(id)arg2 withReuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000001039328
- (id)dropItem:(id)arg1 toPlaceholderInsertedAtIndexPath:(id)arg2 withReuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000001038efe
- (id)dropItem:(id)arg1 toPlaceholder:(id)arg2;	// IMP=0x0000000001038bf0
@property(readonly, nonatomic) id <UIDropSession> _dropSession;
@property(readonly, nonatomic) UITableViewDropProposal *_dropProposal;
@property(readonly, nonatomic) NSIndexPath *_destinationIndexPath;
@property(readonly, nonatomic) NSArray *_items;
- (void)_translateSourceIndexPathsOfDropItems:(CDUnknownBlockType)arg1;	// IMP=0x0000000001038a67
- (void)_translateDestinationIndexPath:(CDUnknownBlockType)arg1;	// IMP=0x0000000001038a35
- (id)_sourceIndexPaths;	// IMP=0x0000000001038868
- (id)initWithDelegate:(id)arg1 destinationIndexPath:(id)arg2 dropProposal:(id)arg3 session:(id)arg4;	// IMP=0x0000000001038406

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
