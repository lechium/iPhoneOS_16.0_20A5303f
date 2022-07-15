//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUPhotosAlbumViewController.h"

@class NSDictionary, NSMutableSet, NSString, PUTopPeopleWallpaperSuggesterFilteringContext, PUTopPeopleWallpaperSuggestionsDistancingContext, PUTopPeopleWallpaperSuggestionsScoringContext;

__attribute__((visibility("hidden")))
@interface PUTopPeopleWallpaperSuggestionsDebugViewController : PUPhotosAlbumViewController
{
    NSMutableSet *_usedAssetLocalIdentifiers;	// 8 = 0x8
    NSDictionary *_scoreByAssetLocalIdentifier;	// 16 = 0x10
    PUTopPeopleWallpaperSuggesterFilteringContext *_filteringContext;	// 24 = 0x18
    PUTopPeopleWallpaperSuggestionsScoringContext *_scoringContext;	// 32 = 0x20
    PUTopPeopleWallpaperSuggestionsDistancingContext *_distancingContext;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000748b7
@property(readonly) PUTopPeopleWallpaperSuggestionsDistancingContext *distancingContext; // @synthesize distancingContext=_distancingContext;
@property(readonly) PUTopPeopleWallpaperSuggestionsScoringContext *scoringContext; // @synthesize scoringContext=_scoringContext;
@property(readonly) PUTopPeopleWallpaperSuggesterFilteringContext *filteringContext; // @synthesize filteringContext=_filteringContext;
- (id)_cloneAsset:(id)arg1 toDirectory:(id)arg2;	// IMP=0x000000000007438b
- (_Bool)_writeDiagnosticsToURL:(id)arg1 goodSuggestions:(id)arg2 badSuggestions:(id)arg3;	// IMP=0x0000000000072e72
- (void)_fileRadarWithGoodSuggestions:(id)arg1 badSuggestions:(id)arg2;	// IMP=0x0000000000072d5e
- (void)_presentTapToRadar;	// IMP=0x0000000000072a70
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000728ec
- (void)_rewind:(id)arg1;	// IMP=0x00000000000728b3
- (void)_next:(id)arg1;	// IMP=0x00000000000728a1
- (void)_editSettings:(id)arg1;	// IMP=0x0000000000072831
- (void)_update;	// IMP=0x0000000000072344
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;	// IMP=0x00000000000721fc
- (id)newToolbarItems;	// IMP=0x00000000000720a7
- (_Bool)shouldShowToolbar;	// IMP=0x000000000007209f
- (void)settingsDidDismiss;	// IMP=0x000000000007208a
- (void)viewDidLoad;	// IMP=0x0000000000071f37

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
