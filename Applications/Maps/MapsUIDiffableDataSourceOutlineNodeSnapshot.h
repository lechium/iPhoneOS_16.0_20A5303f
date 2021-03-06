//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IdentifierPath, NSArray, NSDictionary, NSString;
@protocol MapsUIDiffableDataSourceViewModel;

@interface MapsUIDiffableDataSourceOutlineNodeSnapshot : NSObject
{
    NSDictionary *_childMap;	// 8 = 0x8
    _Bool _expanded;	// 16 = 0x10
    IdentifierPath *_identifierPath;	// 24 = 0x18
    id <MapsUIDiffableDataSourceViewModel> _viewModel;	// 32 = 0x20
    NSArray *_childSnapshots;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000034a580
@property(readonly, nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic) NSArray *childSnapshots; // @synthesize childSnapshots=_childSnapshots;
@property(readonly, nonatomic) id <MapsUIDiffableDataSourceViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) IdentifierPath *identifierPath; // @synthesize identifierPath=_identifierPath;
- (id)childSnapshotWithIdentifier:(id)arg1;	// IMP=0x001000000034a4db
- (id)nodeSnapshotAtIdentifierPath:(id)arg1;	// IMP=0x001000000034a3f0
- (_Bool)needsReloadFromPreviousItemSnapshot:(id)arg1;	// IMP=0x001000000034a34a
@property(readonly, nonatomic) NSString *recursiveDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000349ee2
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000349ec1
- (id)initWithIdentifierPath:(id)arg1 viewModel:(id)arg2 childSnapshots:(id)arg3 expanded:(_Bool)arg4;	// IMP=0x0010000000349abb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

