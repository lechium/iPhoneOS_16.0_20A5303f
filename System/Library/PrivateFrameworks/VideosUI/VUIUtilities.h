//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIUtilities : NSObject
{
}

+ (_Bool)isSUIEnabled;	// IMP=0x008000000017a449
+ (struct CGRect)vuiRectCenteredXInRect:(struct CGRect)arg1 boundsToCenterIn:(struct CGRect)arg2 offset:(double)arg3;	// IMP=0x008000000017a403
+ (_Bool)isInRetailDemoMode;	// IMP=0x008000000017a354
+ (id)getCurrentQueueLabel;	// IMP=0x008000000017a32c
+ (id)getOSVersion;	// IMP=0x008000000017a286
+ (double)imageCornerRadiusWithStyle:(long long)arg1;	// IMP=0x008000000017a26b
+ (id)gradientLayerLocationsFromSpacings:(id)arg1 height:(double)arg2;	// IMP=0x008000000017a026
+ (long long)interfaceStyleFromTheme:(id)arg1 defaultInterfaceStyle:(long long)arg2;	// IMP=0x0080000000179eaf
+ (id)colorFromHexStr:(id)arg1;	// IMP=0x0080000000179d49
+ (id)colorFromRGBStr:(id)arg1;	// IMP=0x0080000000179a9c
+ (double)libraryCategoryListWidthForWindowWidth:(double)arg1;	// IMP=0x0080000000179a33
+ (double)libraryCategoryListWidth;	// IMP=0x0080000000179a17
+ (double)libraryListMarginToGrid;	// IMP=0x0080000000179a0e
+ (id)placeholderImageResourceName:(long long)arg1;	// IMP=0x0080000000179971
+ (struct TVCornerRadii)imageCornerRadiiWithStyle:(long long)arg1;	// IMP=0x008000000017991f
+ (void)gradientConfigForCollection:(id)arg1 gradientMask:(long long)arg2 properties:(id)arg3 configuration:(CDStruct_fe9bf7bc *)arg4;	// IMP=0x00800000001796c8
+ (_Bool)isPortraitIgnoringFlatOrientation:(long long)arg1 viewSize:(struct CGSize)arg2;	// IMP=0x00800000001796a2
+ (_Bool)isInFullscreenOrPipPlayback;	// IMP=0x0080000000179657
+ (id)VideosUIBundle;	// IMP=0x00800000001795eb
+ (_Bool)isTVApp;	// IMP=0x0080000000179556
+ (long long)textAlignmentWithSemanticContentAttribute:(long long)arg1;	// IMP=0x00800000001794ed
+ (unsigned long long)minimumNumberOfItemsToEnableSeeAllButton;	// IMP=0x00800000001794e2
+ (_Bool)isIpadPortrait;	// IMP=0x00800000001794a2
+ (_Bool)isIpadInterface;	// IMP=0x0080000000179453
+ (double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2 maximumContentSizeCategory:(id)arg3;	// IMP=0x00800000001790c3
+ (double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2;	// IMP=0x008000000017905e
+ (struct CGSize)imageSizeWithAspectRatio:(double)arg1 scaleToSize:(struct CGSize)arg2;	// IMP=0x0080000000178ff0
+ (_Bool)shouldInvalidateLayoutWithPreviousTraitCollection:(id)arg1 newTraitCollection:(id)arg2;	// IMP=0x0080000000178ef0
+ (id)randomColor;	// IMP=0x0080000000178e65

@end
