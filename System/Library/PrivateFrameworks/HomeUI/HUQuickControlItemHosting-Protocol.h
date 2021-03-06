//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class NSSet;
@protocol HUQuickControlItemUpdating;

@protocol HUQuickControlItemHosting <NSObject>
@property(nonatomic, getter=areControlsVisible) _Bool controlsVisible;
@property(readonly, copy, nonatomic) NSSet *controlItems;
@property(readonly, nonatomic) id <HUQuickControlItemUpdating> itemUpdater;
- (void)quickControlItemUpdater:(id <HUQuickControlItemUpdating>)arg1 didUpdateResultsForControlItems:(NSSet *)arg2;
@end

