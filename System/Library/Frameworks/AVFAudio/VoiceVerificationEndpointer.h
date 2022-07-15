//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VoiceVerificationEndpointer : NSObject
{
}

@property double endWaitTime;
@property double interspeechWaitTime;
@property double startWaitTime;
@property int endpointMode;
- (void)reset;	// IMP=0x0000000000031da7
- (int)getStatus:(struct AudioQueueBuffer *)arg1;	// IMP=0x0000000000031d9f
- (_Bool)configureWithASBD:(struct AudioStreamBasicDescription *)arg1 andFrameRate:(unsigned int)arg2;	// IMP=0x0000000000031d97
- (_Bool)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned int)arg2;	// IMP=0x0000000000031d8f
- (void)dealloc;	// IMP=0x0000000000031d60
- (id)init;	// IMP=0x0000000000031d31

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
