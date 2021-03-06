//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingObservation : NSObject
{
    _Bool _playing;	// 8 = 0x8
    NSString *_nowPlayingAppBundleIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000022dcd8
@property(copy, nonatomic) NSString *nowPlayingAppBundleIdentifier; // @synthesize nowPlayingAppBundleIdentifier=_nowPlayingAppBundleIdentifier;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
- (id)description;	// IMP=0x000000000022daf4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022d959
- (unsigned long long)hash;	// IMP=0x000000000022d8f6
- (id)initWithBundleIdentifier:(id)arg1 isPlaying:(_Bool)arg2;	// IMP=0x000000000022d878

@end

