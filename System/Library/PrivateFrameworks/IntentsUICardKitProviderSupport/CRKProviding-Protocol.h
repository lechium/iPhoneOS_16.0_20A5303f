//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IntentsUICardKitProviderSupport/CRKCardViewControllerProviding-Protocol.h>

@protocol CRCard, CRKCardSectionViewProviderDelegate;

@protocol CRKProviding <CRKCardViewControllerProviding>

@optional
- (void)requestCardSectionViewProviderForCard:(id <CRCard>)arg1 delegate:(id <CRKCardSectionViewProviderDelegate>)arg2 reply:(void (^)(NSError *, id <CRKCardSectionViewProviding>))arg3;
@end
