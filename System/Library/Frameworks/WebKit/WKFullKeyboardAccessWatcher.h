//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKFullKeyboardAccessWatcher : NSObject
{
    _Bool fullKeyboardAccessEnabled;	// 8 = 0x8
}

+ (_Bool)fullKeyboardAccessEnabled;	// IMP=0x0060000000373cc6
- (id)init;	// IMP=0x0000000000373c30
- (void)retrieveKeyboardUIModeFromPreferences:(id)arg1;	// IMP=0x0000000000373bf6
- (void)notifyAllProcessPools;	// IMP=0x0000000000373b8a

@end
