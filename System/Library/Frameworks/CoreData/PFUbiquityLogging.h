//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PFUbiquityLogging : NSObject
{
    int _desiredLogLevel;	// 8 = 0x8
}

+ (_Bool)canLogMessageAtLevel:(int)arg1;	// IMP=0x006000000027a0fa
+ (void)setLoggingLevel:(int)arg1;	// IMP=0x006000000027a0e1
+ (void)initialize;	// IMP=0x0060000000279de4
@property(nonatomic) int desiredLogLevel; // @synthesize desiredLogLevel=_desiredLogLevel;
- (void)userDefaultsChanged:(id)arg1;	// IMP=0x000000000027a01e
- (void)dealloc;	// IMP=0x0000000000279fef
- (id)init;	// IMP=0x0000000000279e24

@end

