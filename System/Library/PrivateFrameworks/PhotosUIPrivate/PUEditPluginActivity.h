//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class PUEditPlugin;

__attribute__((visibility("hidden")))
@interface PUEditPluginActivity : UIActivity
{
    PUEditPlugin *_plugin;	// 8 = 0x8
}

+ (long long)activityCategory;	// IMP=0x0060000000144b5d
- (void).cxx_destruct;	// IMP=0x0000000000144b4a
@property(readonly, nonatomic) PUEditPlugin *plugin; // @synthesize plugin=_plugin;
- (_Bool)_isHiddenByDefault;	// IMP=0x0000000000144b31
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x0000000000144b29
- (id)_activitySettingsImage;	// IMP=0x0000000000144ad9
- (id)_activityImage;	// IMP=0x0000000000144a89
- (id)activityTitle;	// IMP=0x0000000000144a39
- (id)activityType;	// IMP=0x00000000001449bf
- (id)initWithPlugin:(id)arg1;	// IMP=0x0000000000144951

@end

