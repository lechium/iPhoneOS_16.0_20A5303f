//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/NSObject-Protocol.h>

@class CNComposeHeaderView;

@protocol CNComposeHeaderViewDelegate <NSObject>

@optional
- (void)composeHeaderView:(CNComposeHeaderView *)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeHeaderViewClicked:(CNComposeHeaderView *)arg1;
- (void)composeHeaderViewDidConfirmValue:(CNComposeHeaderView *)arg1;
- (void)composeHeaderViewDidChangeValue:(CNComposeHeaderView *)arg1;
@end
