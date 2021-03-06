//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHCachedRecognizerManager, CHInputContextLexiconManager, CHRecognizerInferenceCache, CHRecognizerResultCache, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface CHRemoteRecognitionServer : NSObject
{
    CHCachedRecognizerManager *_recognizerManager;	// 8 = 0x8
    CHInputContextLexiconManager *_lexiconManager;	// 16 = 0x10
    NSXPCListener *_listener;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serverQueue;	// 32 = 0x20
    _Bool _isListening;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_highPriorityRecognitionProcessingQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_lowPriorityRecognitionProcessingQueue;	// 56 = 0x38
    NSObject<OS_dispatch_workloop> *_recognitionProcessingWorkloop;	// 64 = 0x40
    CHRecognizerInferenceCache *_recognizerInferenceCache;	// 72 = 0x48
    CHRecognizerResultCache *_recognizerResultsCache;	// 80 = 0x50
    long long _openRequestCount;	// 88 = 0x58
}

+ (id)_unableToProcessRequestErrorWithBundleIdentifier:(id)arg1;	// IMP=0x002000000000b840
+ (id)_maxStrokeLimitErrorWithInputDrawingStrokeCount:(long long)arg1;	// IMP=0x001000000000b560
+ (id)_invalidInputErrorWithDescription:(id)arg1 failureReason:(id)arg2 recoverySuggestion:(id)arg3 errorCode:(long long)arg4;	// IMP=0x001000000000b400
+ (_Bool)_hasEntitlement:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000008250
+ (id)sharedRemoteRecognitionServer;	// IMP=0x0010000000007600
- (void).cxx_destruct;	// IMP=0x002000000000bb00
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000b340
- (void)resumeConnectionIfIdle;	// IMP=0x001000000000b300
- (void)transcriptionPathsForTokenizedResult:(id)arg1 recognitionRequest:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000ab70
- (id)generateRecognitionOptionsFromRequest:(id)arg1 isTopLocale:(_Bool)arg2 cachedPrefixResult:(id)arg3 cachedPrefixColumnRangeToKeep:(struct _NSRange)arg4;	// IMP=0x001000000000a7f0
- (id)_computeTextRecognitionResultsForRequest:(id)arg1 recognizer:(id)arg2 recognizerCachingKey:(id)arg3 isTopLocale:(_Bool)arg4 writingStatistics:(id)arg5;	// IMP=0x001000000000a200
- (id)retrievePartialResultsForDrawing:(id)arg1 recognitionEngineCachingKey:(id)arg2 matchingColumnRangeToKeep:(struct _NSRange *)arg3 strokesToRecognize:(id *)arg4;	// IMP=0x0010000000009e60
- (void)_handleValidRecognitionRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009510
- (void)handleRecognitionRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000091e0
- (id)_buildMultiLingualResultForRequest:(id)arg1 recognitionLocales:(id)arg2 recognizersByLocale:(id)arg3 statisticsByLocale:(id)arg4;	// IMP=0x00100000000085d0
- (_Bool)_shouldFulfillRecognitionRequestForConnection:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000008380
- (id)_queueForRequest:(id)arg1;	// IMP=0x00100000000081a0
- (_Bool)_isValidRemoteRecognitionRequest:(id)arg1 connection:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000007b40
- (id)_bundleIdentifierForConnection:(id)arg1;	// IMP=0x0010000000007a20
- (void)dealloc;	// IMP=0x0010000000007910
- (id)init;	// IMP=0x00100000000076b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

