//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSObject-Protocol.h>

@class NSError, TSKAVPlayerController;

@protocol TSKAVPlayerControllerDelegate <NSObject>
- (void)playbackDidStopForPlayerController:(TSKAVPlayerController *)arg1;
- (void)playerController:(TSKAVPlayerController *)arg1 playbackDidFailWithError:(NSError *)arg2;
@end
