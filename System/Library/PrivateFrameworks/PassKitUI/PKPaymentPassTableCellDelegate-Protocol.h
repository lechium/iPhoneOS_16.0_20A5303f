//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKPaymentPass, UIViewController;

@protocol PKPaymentPassTableCellDelegate <NSObject>
- (void)requestPresentationOfViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (void)addButtonPressedForPaymentPass:(PKPaymentPass *)arg1;
@end
