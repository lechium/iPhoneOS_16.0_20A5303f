//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarFullBackgroundActivityItem
{
    _UIStatusBarStringView *_detailStringView;	// 40 = 0x28
}

+ (id)detailDisplayIdentifier;	// IMP=0x0040000000f0befb
- (void).cxx_destruct;	// IMP=0x0000000000f0c6c5
@property(retain, nonatomic) _UIStatusBarStringView *detailStringView; // @synthesize detailStringView=_detailStringView;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000f0c53c
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000f0c38e
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000f0c2e0
- (void)_create_backgroundView;	// IMP=0x0000000000f0c273
- (void)_create_detailStringView;	// IMP=0x0000000000f0c219
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000f0bf14

@end
