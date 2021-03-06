//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSRecursiveLock, NSString;
@protocol SHAudioRecordingManager, SHMatcherDelegate;

@interface SHMultipleConcurrentAudioTapMatcher : NSObject
{
    id <SHMatcherDelegate> delegate;	// 8 = 0x8
    NSArray *_audioTapMatchers;	// 16 = 0x10
    id <SHAudioRecordingManager> _audioRecordingManager;	// 24 = 0x18
    NSRecursiveLock *_lock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000c4b7
@property(readonly, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) id <SHAudioRecordingManager> audioRecordingManager; // @synthesize audioRecordingManager=_audioRecordingManager;
@property(readonly, nonatomic) NSArray *audioTapMatchers; // @synthesize audioTapMatchers=_audioTapMatchers;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate;
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;	// IMP=0x001000000000c39a
- (_Bool)session:(id)arg1 shouldAttemptToMatchSignature:(id)arg2;	// IMP=0x001000000000c1dd
- (void)stop;	// IMP=0x001000000000bfc4
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x001000000000be03
- (id)initWithAudioTapMatchers:(id)arg1 audioRecordingManager:(id)arg2;	// IMP=0x001000000000bc00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

