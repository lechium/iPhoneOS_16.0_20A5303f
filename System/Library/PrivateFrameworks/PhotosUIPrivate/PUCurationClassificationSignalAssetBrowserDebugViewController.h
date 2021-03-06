//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUPhotosAlbumViewController.h"

@class NSDictionary, NSString, UIPickerView;

__attribute__((visibility("hidden")))
@interface PUCurationClassificationSignalAssetBrowserDebugViewController : PUPhotosAlbumViewController
{
    NSString *_signalName;	// 8 = 0x8
    double _operatingPoint;	// 16 = 0x10
    double _highPrecisionOperatingPoint;	// 24 = 0x18
    double _highRecallOperatingPoint;	// 32 = 0x20
    NSDictionary *_signalConfidenceByAssetUUID;	// 40 = 0x28
    double _minimumValue;	// 48 = 0x30
    double _maximumValue;	// 56 = 0x38
    _Bool _sortsAscending;	// 64 = 0x40
    _Bool _showsVideos;	// 65 = 0x41
    UIPickerView *_sortPickerView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000006f21b
- (id)_cloneAsset:(id)arg1 toDirectory:(id)arg2;	// IMP=0x000000000006ed31
- (_Bool)_writeDiagnosticsToURL:(id)arg1 incorrectAssets:(id)arg2;	// IMP=0x000000000006e3d9
- (void)_fileRadarWithIncorrectAssets:(id)arg1;	// IMP=0x000000000006e2f1
- (void)_presentTapToRadar;	// IMP=0x000000000006e11e
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x000000000006e0f1
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;	// IMP=0x000000000006e0e3
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x000000000006e0aa
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x000000000006e091
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000000006e086
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000006de78
- (void)setSignalConfidenceByAssetUUID:(id)arg1 withSignalName:(id)arg2 operatingPoint:(double)arg3 highPrecisionOperatingPoint:(double)arg4 highRecallOperatingPoint:(double)arg5;	// IMP=0x000000000006dd99
- (void)_doneEditingSettings:(id)arg1;	// IMP=0x000000000006dd80
- (void)_setShowsVideos:(id)arg1;	// IMP=0x000000000006dd45
- (void)_setMaximum:(id)arg1;	// IMP=0x000000000006dcdd
- (void)_setMinimum:(id)arg1;	// IMP=0x000000000006dc75
- (void)_editSettings:(id)arg1;	// IMP=0x000000000006d14a
- (void)_update;	// IMP=0x000000000006cd59
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;	// IMP=0x000000000006cc11
- (id)newToolbarItems;	// IMP=0x000000000006cb2e
- (_Bool)shouldShowToolbar;	// IMP=0x000000000006cb26
- (void)viewDidLoad;	// IMP=0x000000000006ca27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

