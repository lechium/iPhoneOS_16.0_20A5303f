//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SSSStatisticsManager : NSObject
{
}

+ (id)sharedStatisticsManager;	// IMP=0x0040000000038630
- (void)_sendEvent:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x004000000003973c
- (void)didDeleteScreenshots;	// IMP=0x00100000000396a6
- (void)didSaveMixedAllToFiles;	// IMP=0x0010000000039610
- (void)didSaveMixedToQuickNoteAndFiles;	// IMP=0x001000000003957a
- (void)didSaveMixedToPhotosAndFiles;	// IMP=0x00100000000394e4
- (void)didSaveFullPagePDFToFiles;	// IMP=0x001000000003944e
- (void)didSaveImageToQuickNote;	// IMP=0x00100000000393b8
- (void)didSaveImageToFiles;	// IMP=0x0010000000039322
- (void)didSaveImageToPhotos;	// IMP=0x001000000003928c
- (void)didChangeOpacityOnFullPage;	// IMP=0x00100000000391f6
- (void)didChangeOpacityOnNormalScreenshot;	// IMP=0x0010000000039160
- (void)didTapFullPageSegment;	// IMP=0x00100000000390ca
- (void)didSubmitFeedbackWithAnnotationCount:(unsigned long long)arg1;	// IMP=0x0010000000038fc8
- (void)didTapBetaFeedbackButton;	// IMP=0x0010000000038f32
- (void)logTotalAnnotations:(unsigned long long)arg1;	// IMP=0x0010000000038e30
- (void)drewStrokes:(unsigned long long)arg1;	// IMP=0x0010000000038d2e
- (void)didAccidentallyDraw;	// IMP=0x0010000000038c98
- (void)didCropInFullPageMode;	// IMP=0x0010000000038c02
- (void)didCropInNormalMode;	// IMP=0x0010000000038b6c
- (void)fullscreenExperienceHadCropEvent;	// IMP=0x0010000000038ad6
- (void)pipExpanded;	// IMP=0x0010000000038a40
- (void)pipDragEndedSuccessfully;	// IMP=0x00100000000389aa
- (void);	// IMP=0x0010000000038914
- (id)_triggerTypeForPresentationMode:(unsigned long long)arg1;	// IMP=0x00100000000388e9
- (void)screenshotGestureTriggeredWhileAnotherScreenshotWasShowing:(unsigned long long)arg1;	// IMP=0x00100000000387bb
- (void)screenshotGestureTriggered:(unsigned long long)arg1;	// IMP=0x001000000003868d
- (_Bool)_statisticsEnabled;	// IMP=0x0010000000038685

@end

