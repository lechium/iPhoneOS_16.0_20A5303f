//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUWorkaroundSettings : PXSettings
{
    _Bool _addRemoveVideoLayer;	// 8 = 0x8
    _Bool _shouldWorkAround54502886;	// 9 = 0x9
}

+ (id)settingsControllerModule;	// IMP=0x00600000004f2945
+ (id)sharedInstance;	// IMP=0x00600000004f2915
@property(nonatomic) _Bool shouldWorkAround54502886; // @synthesize shouldWorkAround54502886=_shouldWorkAround54502886;
@property(nonatomic) _Bool addRemoveVideoLayer; // @synthesize addRemoveVideoLayer=_addRemoveVideoLayer;
- (void)setDefaultValues;	// IMP=0x00000000004f2b33
- (id)parentSettings;	// IMP=0x00000000004f2b1a

@end

