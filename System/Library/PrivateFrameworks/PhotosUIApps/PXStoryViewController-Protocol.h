//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIApps/NSObject-Protocol.h>

@protocol PXStoryExportActivityHelper, PXStoryViewControllerDismissalDelegate, PXStoryViewControllerNavigationItemHelper, PXStoryViewControllerShareActionDelegate, PXStoryViewEnvironmentActionPerformer;

@protocol PXStoryViewController <NSObject>
@property(nonatomic, retain) id <PXStoryViewControllerNavigationItemHelper> navigationItemHelper;
- (_Bool)prepareForPopTransition;
@property(nonatomic, readonly) id <PXStoryExportActivityHelper> exportActivityHelper;
@property(nonatomic) __weak id <PXStoryViewEnvironmentActionPerformer> viewEnvironmentActionPerformer;
@property(nonatomic) __weak id <PXStoryViewControllerDismissalDelegate> dismissalDelegate;
@property(nonatomic) __weak id <PXStoryViewControllerShareActionDelegate> shareActionDelegate;
@property(nonatomic) Class gridDecorationViewClass;
@property(nonatomic) _Bool remainsActiveWhileApplicationIsHidden;
@end
