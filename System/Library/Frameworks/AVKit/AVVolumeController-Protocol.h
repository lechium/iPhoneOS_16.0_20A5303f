//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class NSString;

@protocol AVVolumeController <NSObject>
+ (id)volumeController;
@property(readonly, nonatomic) _Bool currentRouteHasVolumeControl;
@property(nonatomic) _Bool prefersSystemVolumeHUDHidden;
@property(readonly, nonatomic) float volume;
@property(readonly, nonatomic, getter=isChangingVolume) _Bool changingVolume;
- (void)setTargetVolume:(float)arg1;
- (void)endChangingVolume;
- (void)beginChangingVolume;
- (void)setClientWithIdentifier:(NSString *)arg1 forWindowSceneSessionWithIdentifier:(NSString *)arg2;
@end
