//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKTableViewCell.h>

@class NSString;

@interface MapsThemeTableViewCell : MKTableViewCell
{
    CDUnknownBlockType _selectedBackgroundColorProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000519ee8
@property(copy, nonatomic) CDUnknownBlockType selectedBackgroundColorProvider; // @synthesize selectedBackgroundColorProvider=_selectedBackgroundColorProvider;
- (void)_updateSelectedBackgroundColor;	// IMP=0x0010000000519de9
- (void)updateTheme;	// IMP=0x0010000000519cee
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000519c31
- (void)didMoveToWindow;	// IMP=0x0010000000519bc3
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000519aa1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

