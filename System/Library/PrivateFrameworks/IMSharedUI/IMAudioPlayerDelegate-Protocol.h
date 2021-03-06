//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUI/NSObject-Protocol.h>

@class IMAudioPlayer;

@protocol IMAudioPlayerDelegate <NSObject>
- (void)audioPlayerCurrentTimeDidChange:(IMAudioPlayer *)arg1;

@optional
- (void)audioPlayerDidPrepareAudioToPlay:(IMAudioPlayer *)arg1 successfully:(_Bool)arg2;
@end

