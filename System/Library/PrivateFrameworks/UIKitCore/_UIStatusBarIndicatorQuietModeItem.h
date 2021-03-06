//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarIndicatorQuietModeItem
{
    NSString *_focusName;	// 8 = 0x8
    _UIStatusBarImageView *_emphasizedImageView;	// 16 = 0x10
}

+ (id)emphasizedQuietModeIdentifier;	// IMP=0x0000000000f15980
- (void).cxx_destruct;	// IMP=0x0000000000f15f2e
@property(retain, nonatomic) _UIStatusBarImageView *emphasizedImageView; // @synthesize emphasizedImageView=_emphasizedImageView;
@property(retain, nonatomic) NSString *focusName; // @synthesize focusName=_focusName;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000f15ce8
- (id)systemImageNameForUpdate:(id)arg1;	// IMP=0x0000000000f15c4d
- (id)indicatorEntryKey;	// IMP=0x0000000000f15c39
- (_Bool)shouldUpdateIndicatorForIdentifier:(id)arg1;	// IMP=0x0000000000f15ba7
- (id)imageViewForIdentifier:(id)arg1;	// IMP=0x0000000000f15af9
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000f15a4b
- (void)_create_emphasizedImageView;	// IMP=0x0000000000f159d0

@end

