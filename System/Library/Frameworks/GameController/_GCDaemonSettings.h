//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

__attribute__((visibility("hidden")))
@interface _GCDaemonSettings : NSObject
{
    NSUserDefaults *_defaults;	// 8 = 0x8
}

+ (id)instance;	// IMP=0x006000000001b779
- (void).cxx_destruct;	// IMP=0x000000000001be07
- (id)anonymizedIdentifierForControllerIdentifier:(id)arg1;	// IMP=0x000000000001b8f1
- (id)newAnonymizedIdentifiersDictionary:(id)arg1;	// IMP=0x000000000001b864
- (id)init;	// IMP=0x000000000001b7fe

@end
