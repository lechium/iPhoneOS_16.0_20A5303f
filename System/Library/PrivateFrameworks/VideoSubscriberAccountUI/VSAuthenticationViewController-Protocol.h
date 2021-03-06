//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccountUI/NSObject-Protocol.h>

@class VSViewModel;
@protocol VSAuthenticationViewControllerDelegate;

@protocol VSAuthenticationViewController <NSObject>
@property(readonly, nonatomic) VSViewModel *viewModel;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed;
@property(nonatomic) __weak id <VSAuthenticationViewControllerDelegate> delegate;

@optional
@property(readonly, nonatomic) struct CGSize preferredLogoSize;
@end

