//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/TVPPlayer.h>

__attribute__((visibility("hidden")))
@interface VUIPlayer : TVPPlayer
{
}

+ (void)setSavedPreferredAudioLanguageCode:(id)arg1;	// IMP=0x0080000000027663
+ (id)savedPreferredAudioLanguageCode;	// IMP=0x008000000002760c
+ (void)initialize;	// IMP=0x008000000002736f
- (void)_configurePlayerForCurrentNetworkSettingsAndMediaItem;	// IMP=0x00000000000277de
- (void)_videoPlaybackSettingsDidChange:(id)arg1;	// IMP=0x00000000000276eb
- (void)_currentMediaItemDidChange:(id)arg1;	// IMP=0x00000000000276d9
- (void)dealloc;	// IMP=0x0000000000027597
- (id)initWithName:(id)arg1;	// IMP=0x00000000000273bf

@end
