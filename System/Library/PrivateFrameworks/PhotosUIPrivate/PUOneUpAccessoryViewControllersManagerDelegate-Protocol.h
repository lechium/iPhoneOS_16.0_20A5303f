//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class PUAssetReference, PUOneUpAccessoryViewControllersManager;

@protocol PUOneUpAccessoryViewControllersManagerDelegate <NSObject>

@optional
- (void)oneUpAccessoryViewControllersManagerInvalidateAccessoryLayout:(PUOneUpAccessoryViewControllersManager *)arg1;
- (_Bool)oneUpAccessoryViewControllersManagerRequestAccessoryDismissal:(PUOneUpAccessoryViewControllersManager *)arg1;
- (_Bool)oneUpAccessoryViewControllersManager:(PUOneUpAccessoryViewControllersManager *)arg1 preventInternalFileRadarActionForAssetReference:(PUAssetReference *)arg2;
- (_Bool)oneUpAccessoryViewControllersManager:(PUOneUpAccessoryViewControllersManager *)arg1 preventRevealInMomentActionForAssetReference:(PUAssetReference *)arg2;
@end
