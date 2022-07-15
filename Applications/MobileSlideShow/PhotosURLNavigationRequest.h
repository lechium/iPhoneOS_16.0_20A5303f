//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol PXRootLibraryNavigationController;

@interface PhotosURLNavigationRequest : NSObject
{
    CDUnknownBlockType _navigationCompletionHandler;	// 8 = 0x8
    NSURL *_destinationURL;	// 16 = 0x10
    id <PXRootLibraryNavigationController> _rootController;	// 24 = 0x18
    unsigned long long _state;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000003e4a6
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) id <PXRootLibraryNavigationController> rootController; // @synthesize rootController=_rootController;
@property(readonly, copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
- (void)_rootUpdatedAvailableDestinations:(id)arg1;	// IMP=0x001000000003e476
- (void)_contextDidFinishMerge:(id)arg1;	// IMP=0x001000000003e464
- (void)_finishNavigationSuccessfully:(_Bool)arg1;	// IMP=0x001000000003e3f3
- (void)_processPendingNavigation;	// IMP=0x001000000003e385
- (void)_schedulePendingNavigation;	// IMP=0x001000000003e258
- (void)cancelPendingNavigation;	// IMP=0x001000000003e1fb
- (void)navigateAllowingRetry:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003e1ad
- (id)_uuidFromURLParams:(id)arg1 prefix:(id)arg2;	// IMP=0x001000000003dfd7
- (void)_navigateAllowingRetry:(_Bool)arg1;	// IMP=0x001000000003c9d9
- (id)_albumForKnownName:(id)arg1 orUUID:(id)arg2 requestIsValid:(_Bool *)arg3;	// IMP=0x001000000003c6dc
- (void)dealloc;	// IMP=0x001000000003c528
- (id)initWithDestinationURL:(id)arg1 rootController:(id)arg2;	// IMP=0x001000000003c390

@end
