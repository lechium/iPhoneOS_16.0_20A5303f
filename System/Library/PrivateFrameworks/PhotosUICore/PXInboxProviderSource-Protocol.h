//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXInboxModelDetailViewControllerProvider, PXInboxModelMediaProvider, PXInboxModelTitleProvider;

@protocol PXInboxProviderSource <NSObject>
@property(readonly, nonatomic) id <PXInboxModelTitleProvider> titleProvider;
@property(readonly, nonatomic) id <PXInboxModelMediaProvider> mediaProvider;
@property(readonly, nonatomic) id <PXInboxModelDetailViewControllerProvider> detailViewControllerProvider;
@end

