//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUICardKitProviderSupport/CRCommandHandling-Protocol.h>
#import <SearchUICardKitProviderSupport/CRKEventResponding-Protocol.h>
#import <SearchUICardKitProviderSupport/CRKFeedbackDelegate-Protocol.h>

@protocol CRCard, CRKCardSectionViewSourcing, CRKCardViewControllerDelegate;

@protocol CRKCardViewControlling <CRKEventResponding, CRKFeedbackDelegate, CRCommandHandling>
@property(nonatomic) __weak id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
@property(retain, nonatomic) id <CRKCardSectionViewSourcing> cardSectionViewSource;
@property(retain, nonatomic) id <CRCard> card;
- (double)contentHeightForWidth:(double)arg1;
@end

