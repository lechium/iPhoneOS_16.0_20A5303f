//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ContaineeViewController, ContainerViewController, NSArray, NSString;
@protocol MacPopoverPresentationControllerDelegate;

@interface MacPopoverPresentationController : NSObject
{
    _Bool _isPresented;	// 8 = 0x8
    _Bool _isDismissing;	// 9 = 0x9
    ContaineeViewController *_containeeViewController;	// 16 = 0x10
    ContainerViewController *_containerViewController;	// 24 = 0x18
    id <MacPopoverPresentationControllerDelegate> _delegate;	// 32 = 0x20
    struct CLLocationCoordinate2D _coordinate;	// 40 = 0x28
    struct CGSize _preferredContentSize;	// 56 = 0x38
    struct CGRect _anchorRect;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000040f758
@property(readonly, nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(readonly, nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
@property(nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(nonatomic) struct CGRect anchorRect; // @synthesize anchorRect=_anchorRect;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) __weak id <MacPopoverPresentationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak ContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(readonly, nonatomic) __weak ContaineeViewController *containeeViewController; // @synthesize containeeViewController=_containeeViewController;
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x001000000040f683
- (void)presentationControllerWillDismiss:(id)arg1;	// IMP=0x001000000040f671
- (void)configurePopoverSize;	// IMP=0x001000000040f530
- (void)configurePopoverPosition;	// IMP=0x001000000040efc0
- (_Bool)_isCoordinateVisibleInContainerViewController:(id)arg1;	// IMP=0x001000000040ef09
- (void)_didDismiss;	// IMP=0x001000000040ee75
- (void)_willDismiss;	// IMP=0x001000000040edf7
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000040ec1c
- (void)presentFromContainerViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000040ea29
@property(copy, nonatomic) NSArray *passthroughViews;
- (id)initWithContaineeViewController:(id)arg1;	// IMP=0x001000000040e790

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

