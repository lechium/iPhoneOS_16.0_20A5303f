//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol RAPDirectionsStepsTableViewControllerDelegate;

@interface RAPTransitDirectionsListViewController
{
    id <RAPDirectionsStepsTableViewControllerDelegate> _instructionDelegate;	// 8 = 0x8
}

+ (Class)dataSourceClass;	// IMP=0x002000000030b6b7
- (void).cxx_destruct;	// IMP=0x002000000030bbe6
@property(nonatomic) __weak id <RAPDirectionsStepsTableViewControllerDelegate> instructionDelegate; // @synthesize instructionDelegate=_instructionDelegate;
- (_Bool)RAPTransitDirectionsStepsList:(id)arg1 shouldShowFlagForStep:(id)arg2 listItem:(id)arg3;	// IMP=0x001000000030bb2b
- (_Bool)_shouldReloadForReferenceDateUpdates;	// IMP=0x001000000030bb23
- (void)_prepareForUpdatedRoute;	// IMP=0x001000000030b753
- (id)init;	// IMP=0x001000000030b6c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
