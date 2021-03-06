//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IntelligencePlatformCore/BMLibraryBase-Protocol.h>

@protocol BMActivityLibrary, BMActivitySchedulerLibrary, BMAirPlayLibrary, BMAppLibrary, BMAudioLibrary, BMCalendarLibrary, BMContextSyncLibrary, BMContextualUnderstandingLibrary, BMDeviceLibrary, BMDiscoverabilityLibrary, BMDiskLibrary, BMFamilyLibrary, BMFrontBoardLibrary, BMGameCenterLibrary, BMIntelligencePlatformLibrary, BMLocationLibrary, BMMapsLibrary, BMMediaLibrary, BMOSAnalyticsLibrary, BMPeopleSuggesterLibrary, BMPhotosLibrary, BMPortraitLibrary, BMSafariLibrary, BMShareSheetLibrary, BMSiriLibrary, BMWatchLibrary, BMWidgetsLibrary, BMiCloudLibrary;

@protocol BMRootLibrary <BMLibraryBase>
- (id <BMOSAnalyticsLibrary>)OSAnalytics;
- (id <BMDiskLibrary>)Disk;
- (id <BMAudioLibrary>)Audio;
- (id <BMActivitySchedulerLibrary>)ActivityScheduler;
- (id <BMWatchLibrary>)Watch;
- (id <BMFrontBoardLibrary>)FrontBoard;
- (id <BMSafariLibrary>)Safari;
- (id <BMPortraitLibrary>)Portrait;
- (id <BMMapsLibrary>)Maps;
- (id <BMPeopleSuggesterLibrary>)PeopleSuggester;
- (id <BMMediaLibrary>)Media;
- (id <BMWidgetsLibrary>)Widgets;
- (id <BMAirPlayLibrary>)AirPlay;
- (id <BMCalendarLibrary>)Calendar;
- (id <BMAppLibrary>)App;
- (id <BMShareSheetLibrary>)ShareSheet;
- (id <BMDiscoverabilityLibrary>)Discoverability;
- (id <BMContextualUnderstandingLibrary>)ContextualUnderstanding;
- (id <BMFamilyLibrary>)Family;
- (id <BMSiriLibrary>)Siri;
- (id <BMContextSyncLibrary>)ContextSync;
- (id <BMPhotosLibrary>)Photos;
- (id <BMGameCenterLibrary>)GameCenter;
- (id <BMActivityLibrary>)Activity;
- (id <BMLocationLibrary>)Location;
- (id <BMIntelligencePlatformLibrary>)IntelligencePlatform;
- (id <BMiCloudLibrary>)iCloud;
- (id <BMDeviceLibrary>)Device;
@end

