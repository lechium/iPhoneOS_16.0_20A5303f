//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUPhotosAlbumViewController.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PUAudioClassificationAssetBrowserDebugViewController : PUPhotosAlbumViewController
{
    NSString *_audioClassificationName;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000138311
@property(copy, nonatomic) NSString *audioClassificationName; // @synthesize audioClassificationName=_audioClassificationName;
- (id)_cloneAsset:(id)arg1 toDirectory:(id)arg2;	// IMP=0x0000000000137e9f
- (_Bool)_writeDiagnosticsToURL:(id)arg1 incorrectAssets:(id)arg2;	// IMP=0x0000000000137824
- (void)_fileRadarWithIncorrectAssets:(id)arg1;	// IMP=0x000000000013773c
- (void)_presentTapToRadar;	// IMP=0x0000000000137569
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;	// IMP=0x0000000000137421
- (void)viewDidLoad;	// IMP=0x00000000001373b2

@end
