//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString;

@interface UIView (PXUIViewBasicTile)
- (void)prepareForReuse;	// IMP=0x002000000000c000
- (void)becomeReusable;	// IMP=0x002000000000bffa
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;	// IMP=0x002000000000bff4
@property(readonly, nonatomic) UIView *view;
- (void)setAssociatedAssetUUID:(id)arg1;	// IMP=0x002000000001316f
- (id)associatedAssetUUID;	// IMP=0x002000000001315e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
