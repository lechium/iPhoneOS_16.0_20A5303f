//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/NSObject-Protocol.h>

@protocol MPServiceRadioController <NSObject>
- (void)serviceRadioControllerGetRecentStationGroupsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)serviceRadioControllerGetRadioAvailabilityWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
@end

