//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SARAnalytics : NSObject
{
}

+ (void)captureResumePreviousNavigation;	// IMP=0x00400000005acf79
+ (void)captureListStartDetourToMapItem:(id)arg1 index:(long long)arg2;	// IMP=0x00100000005ace1e
+ (void)captureMapTapToHideTray;	// IMP=0x00100000005acdcd
+ (void)captureMapSelectMapItem:(id)arg1;	// IMP=0x00100000005acd1d
+ (void)captureListTapToHideTray;	// IMP=0x00100000005acccc
+ (void)captureListTapToShowTray;	// IMP=0x00100000005acc7b
+ (void)captureListScrollDown;	// IMP=0x00100000005acc2a
+ (void)captureListScrollUp;	// IMP=0x00100000005acbd9
+ (void)captureCancelSearchResults;	// IMP=0x00100000005acb88
+ (void)captureShowSearchResults:(id)arg1;	// IMP=0x00100000005ac8f6
+ (void)captureSelectCategory:(id)arg1 fromDisplayedCategories:(id)arg2 isAddStopTray:(_Bool)arg3;	// IMP=0x00100000005ac829
+ (void)captureAddStopAnalyticsForTransportType:(int)arg1;	// IMP=0x00100000005ac78d

@end
