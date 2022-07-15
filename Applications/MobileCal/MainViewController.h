//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CalendarModel, EnqueueableManagedNavigationController, NSString, UINavigationController, UITraitCollection, UIWindow;

@interface MainViewController : UIViewController
{
    CalendarModel *_model;	// 8 = 0x8
    EnqueueableManagedNavigationController *_managedNavigationController;	// 16 = 0x10
    _Bool _disableRotationTimings;	// 24 = 0x18
    UIWindow *_window;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000d3534
@property(nonatomic) _Bool disableRotationTimings; // @synthesize disableRotationTimings=_disableRotationTimings;
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) CalendarModel *model; // @synthesize model=_model;
- (_Bool)requiresSelfAsEventEditorDelegate;	// IMP=0x00100000000d34ea
- (id)sceneTitle;	// IMP=0x00100000000d34e2
- (long long)intendedSizeClass;	// IMP=0x001000000016436b
- (void)currentlyVisibleDateRangeFromStartDate:(id *)arg1 toEndDate:(id *)arg2;	// IMP=0x00100000000d34dc
- (_Bool)isDateVisible:(id)arg1;	// IMP=0x00100000000d34d4
- (void)selectDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000164347
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3 context:(id)arg4;	// IMP=0x0010000000164323
- (_Bool)allowsOverriddenToolbarItems;	// IMP=0x00100000001642fc
- (_Bool)allowsOverriddenRightNavigationBarItems;	// IMP=0x00100000001642d5
- (void)setupUIForTraitCollection:(id)arg1;	// IMP=0x00100000000d34ce
- (id)preferredPreSizeClassTransitionSelectedDate;	// IMP=0x00100000000d34c6
- (void)setSceneTitleNeedsUpdate;	// IMP=0x00100000000d340a
- (id)EKUI_window;	// IMP=0x00100000000d339a
- (id)testingRotationDidEndNotificationName;	// IMP=0x00100000000d3392
- (id)testingRotationWillStartNotificationName;	// IMP=0x00100000000d338a
- (void)transitionToSizeDidEnd;	// IMP=0x00100000000d32f7
- (void)transitionToSizeWillStart;	// IMP=0x00100000000d31aa
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000000d3035
- (void)extendedLaunchCompletedByViewType:(int)arg1;	// IMP=0x00100000000d2f69
- (_Bool)handlesNotifyOnExtendedLaunchCompletion;	// IMP=0x00100000000d2f61
- (void)reconfigureViewController:(id)arg1;	// IMP=0x00100000000d2ebf
- (_Bool)eventViewControllerShowsInlinePreview;	// IMP=0x00100000000d2eb7
- (id)augmentEventDetailsContext:(id)arg1;	// IMP=0x00100000000d2da4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000d2cbc
- (void)showViewController:(id)arg1 sender:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000d2ba8
- (id)shownEventEditViewController;	// IMP=0x00100000000d2af9
- (_Bool)performModalDialogsIfNeededWithContinue:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d2aeb
- (id)_shownViewControllerWithClass:(Class)arg1;	// IMP=0x00100000000d2942
- (id)shownEventViewController;	// IMP=0x00100000000d2914
- (id)shownContactViewController;	// IMP=0x00100000000d28e6
- (id)targetViewControllerForAction:(SEL)arg1 sender:(id)arg2;	// IMP=0x00100000000d27f5
- (_Bool)prefersShowingViewControllersOnNavigationStack;	// IMP=0x00100000000d27ed
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000000d26b2
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000000d253a
- (_Bool)shouldInvalidateManagedNavigationControllerOnPresentationDismissal;	// IMP=0x00100000000d2532
- (void)managedNavigationControllerWillBeInvalidated;	// IMP=0x00100000000d252c
- (void)invalidateManagedNavigationController;	// IMP=0x00100000000d23a7
@property(readonly, nonatomic) _Bool shouldAdaptEventViewControllers;
- (void)_setManagedNavigationControllerModalPresentationDelegates;	// IMP=0x00100000000d2361
@property(readonly, nonatomic) UINavigationController *managedNavigationController;
- (Class)managedNavigationControllerType;	// IMP=0x00100000000d2261
- (_Bool)shouldModallyPresentFirstShownViewController;	// IMP=0x00100000000d2218
- (_Bool)canManagePresentationStyle;	// IMP=0x00100000000d2210
- (_Bool)wantsManagement;	// IMP=0x00100000000d2208
- (void)dealloc;	// IMP=0x00100000000d21bd
- (id)initWithWindow:(id)arg1 model:(id)arg2;	// IMP=0x00100000000d20c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UITraitCollection *futureTraitCollection; // @dynamic futureTraitCollection;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTransitioningTraitCollection;
@property(nonatomic) _Bool isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end
