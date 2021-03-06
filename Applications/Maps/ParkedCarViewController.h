//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class GEOAutomobileOptions, GEOCyclingOptions, GEOTransitOptions, GEOWalkingOptions, MISSING_TYPE, MUScrollableStackView, NSArray, NSString, ParkedCar, ParkedCarDetailsSectionController, ParkedCarHeaderSectionController, UIScrollView;
@protocol ParkedCarViewControllerDelegate, UIScrollViewDelegate;

@interface ParkedCarViewController : UIViewController
{
    MUScrollableStackView *_contentStackView;	// 8 = 0x8
    ParkedCarHeaderSectionController *_headerSectionController;	// 16 = 0x10
    ParkedCarDetailsSectionController *_detailsSectionController;	// 24 = 0x18
    NSArray *_sectionControllers;	// 32 = 0x20
    _Bool _active;	// 40 = 0x28
    GEOAutomobileOptions *_automobileOptions;	// 48 = 0x30
    double _contentAlpha;	// 56 = 0x38
    GEOCyclingOptions *_cyclingOptions;	// 64 = 0x40
    GEOTransitOptions *_transitOptions;	// 72 = 0x48
    GEOWalkingOptions *_walkingOptions;	// 80 = 0x50
    id <ParkedCarViewControllerDelegate> _parkedCarDelegate;	// 88 = 0x58
    ParkedCar *_parkedCar;	// 96 = 0x60
}

+ (double)headerHeightInMinimalMode;	// IMP=0x00200000006a13e1
- (void).cxx_destruct;	// IMP=0x00200000006a333f
@property(retain, nonatomic) ParkedCar *parkedCar; // @synthesize parkedCar=_parkedCar;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <ParkedCarViewControllerDelegate> parkedCarDelegate; // @synthesize parkedCarDelegate=_parkedCarDelegate;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions; // @synthesize walkingOptions=_walkingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;
@property(retain, nonatomic) GEOCyclingOptions *cyclingOptions; // @synthesize cyclingOptions=_cyclingOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
- (id)draggableHeaderView;	// IMP=0x00100000006a3245
- (id)draggableContent;	// IMP=0x00100000006a323d
- (void)instrumentDismissAction;	// IMP=0x00100000006a31ec
- (void)parkedCarFooterActionsSectionControllerDidRemoveParkedCar:(id)arg1;	// IMP=0x00100000006a30f0
- (void)parkedCarFooterActionsSectionControllerDidShareLocation:(id)arg1;	// IMP=0x00100000006a30a4
- (void)parkedCarDetailsSectionControllerDidRemovePhoto:(id)arg1;	// IMP=0x00100000006a302e
- (void)parkedCarDetailsSectionControllerDidTapViewPhoto:(id)arg1;	// IMP=0x00100000006a301c
- (void)parkedCarDetailsSectionControllerDidTapAddPhotos:(id)arg1;	// IMP=0x00100000006a300a
- (void)parkedCarHeaderButtonsSectionControllerRequestsEditLocation:(id)arg1;	// IMP=0x00100000006a2ff8
- (void)parkedCarHeaderButtonsSectionControllerRequestsDirections:(id)arg1;	// IMP=0x00100000006a2fe6
- (void)locationRefinementViewController:(id)arg1 didSelectCoordinate:(struct CLLocationCoordinate2D)arg2;	// IMP=0x00100000006a2f58
- (MISSING_TYPE *)imagePickerControllerDidCancel: /* Error: Ran out of types for this method. */;	// IMP=0x00100000006a2e82
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x00100000006a2d24
- (void)textFieldRowViewDidChange:(id)arg1;	// IMP=0x00100000006a2ccd
- (void)textFieldRowViewDidEndEditing:(id)arg1;	// IMP=0x00100000006a2c26
- (void)textFieldRowViewDidBeginEditing:(id)arg1;	// IMP=0x00100000006a2ac7
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00100000006a2a1a
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00100000006a296d
- (void)_editLocationTapped;	// IMP=0x00100000006a28c9
- (void)_getDirections;	// IMP=0x00100000006a26ff
- (void)_imagePickerDidRetake:(id)arg1;	// IMP=0x00100000006a26ae
- (void)_showCamera;	// IMP=0x00100000006a25ea
- (void)_showLocationRefinement;	// IMP=0x00100000006a24e7
- (void)_handlePhotoTap;	// IMP=0x00100000006a22cf
- (void)performAction:(long long)arg1;	// IMP=0x00100000006a228c
- (void)parkedCarManager:(id)arg1 didUpdateParkedCar:(id)arg2;	// IMP=0x00100000006a20ec
- (void)dismissTextField;	// IMP=0x00100000006a20cf
- (void)_locationApprovalDidChange:(id)arg1;	// IMP=0x00100000006a1e56
- (void)_updateSectionControllerState:(_Bool)arg1;	// IMP=0x00100000006a1d1d
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000006a1cda
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000006a1c94
- (void)viewDidLayoutSubviews;	// IMP=0x00100000006a1bed
- (void)_loadStackViewIfNeeded;	// IMP=0x00100000006a1b24
- (void)viewDidLoad;	// IMP=0x00100000006a16a8
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000006a16a0
- (void)_updateContentAlpha:(double)arg1;	// IMP=0x00100000006a14f6
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)scrollToTopAnimated:(_Bool)arg1;	// IMP=0x00100000006a1438
- (double)currentHeight;	// IMP=0x00100000006a1417
- (void)hideTitle:(_Bool)arg1;	// IMP=0x00100000006a13fa
- (void)contentAboveTitleScrollPositionChanged:(double)arg1;	// IMP=0x00100000006a13db
@property(readonly, nonatomic) double heightForContentAboveTitle;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

