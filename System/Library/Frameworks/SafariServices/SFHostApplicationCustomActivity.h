//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_SFActivity.h"

@class SFCustomActivityProxy;

__attribute__((visibility("hidden")))
@interface SFHostApplicationCustomActivity : _SFActivity
{
    SFCustomActivityProxy *_activityProxy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005f818
@property(readonly, nonatomic) SFCustomActivityProxy *activityProxy; // @synthesize activityProxy=_activityProxy;
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x000000000005f7ff
- (id)activityImage;	// IMP=0x000000000005f7e2
- (id)activityTitle;	// IMP=0x000000000005f7c5
- (id)activityType;	// IMP=0x000000000005f7a8
- (id)initWithActivityProxy:(id)arg1;	// IMP=0x000000000005f727

@end

