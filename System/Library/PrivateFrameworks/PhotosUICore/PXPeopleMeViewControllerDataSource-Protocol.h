//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXPeopleMeViewController;
@protocol PXPerson;

@protocol PXPeopleMeViewControllerDataSource <NSObject>
- (void)userDidAnswerMeViewController:(PXPeopleMeViewController *)arg1 withResponse:(_Bool)arg2 suggestedPerson:(id <PXPerson>)arg3;
- (id <PXPerson>)suggestedPersonForMeViewController:(PXPeopleMeViewController *)arg1;
@end
