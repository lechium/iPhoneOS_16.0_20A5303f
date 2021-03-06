//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, CSAudioRecordContext, CSConnectionListener, NSArray, NSDictionary, NSHashTable, NSMutableDictionary, NSString, SSRSpeakerRecognitionController, SSRVoiceProfile, SSRVoiceProfileManager;
@protocol CSAudioFileWriter, OS_dispatch_queue;

@interface CSAttSiriSSRNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _shouldCleanupVoiceProfile;	// 9 = 0x9
    unsigned long long _type;	// 16 = 0x10
    NSArray *_requiredNodes;	// 24 = 0x18
    CSAttSiriController *_attSiriController;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
    CSConnectionListener *_ssrListener;	// 48 = 0x30
    CSConnectionListener *_localSRBridgeListener;	// 56 = 0x38
    SSRSpeakerRecognitionController *_ssrController;	// 64 = 0x40
    SSRVoiceProfileManager *_voiceProfileManager;	// 72 = 0x48
    SSRVoiceProfile *_ccProfile;	// 80 = 0x50
    NSString *_leadingUtteranceAudioFile;	// 88 = 0x58
    id <CSAudioFileWriter> _leadingUtteranceLogger;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_queue;	// 104 = 0x68
    CSAsset *_asset;	// 112 = 0x70
    NSArray *_ssrAssets;	// 120 = 0x78
    CSAudioRecordContext *_audioRecordContext;	// 128 = 0x80
    NSDictionary *_voiceTriggerEventInfo;	// 136 = 0x88
    NSDictionary *_speakerRecognitionScores;	// 144 = 0x90
    NSMutableDictionary *_cachedScoresForLogging;	// 152 = 0x98
    NSHashTable *_receivers;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x002000000001c91f
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) NSMutableDictionary *cachedScoresForLogging; // @synthesize cachedScoresForLogging=_cachedScoresForLogging;
@property(retain, nonatomic) NSDictionary *speakerRecognitionScores; // @synthesize speakerRecognitionScores=_speakerRecognitionScores;
@property(retain, nonatomic) NSDictionary *voiceTriggerEventInfo; // @synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo;
- (void);	// IMP=0x001000000001c88a
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
@property(retain, nonatomic) NSArray *ssrAssets; // @synthesize ssrAssets=_ssrAssets;
@property(retain, nonatomic) CSAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <CSAudioFileWriter> leadingUtteranceLogger; // @synthesize leadingUtteranceLogger=_leadingUtteranceLogger;
@property(retain, nonatomic) NSString *leadingUtteranceAudioFile; // @synthesize leadingUtteranceAudioFile=_leadingUtteranceAudioFile;
@property(retain, nonatomic) SSRVoiceProfile *ccProfile; // @synthesize ccProfile=_ccProfile;
@property(retain, nonatomic) SSRVoiceProfileManager *voiceProfileManager; // @synthesize voiceProfileManager=_voiceProfileManager;
@property(retain, nonatomic) SSRSpeakerRecognitionController *ssrController; // @synthesize ssrController=_ssrController;
@property(nonatomic) _Bool shouldCleanupVoiceProfile; // @synthesize shouldCleanupVoiceProfile=_shouldCleanupVoiceProfile;
@property(retain, nonatomic) CSConnectionListener *localSRBridgeListener; // @synthesize localSRBridgeListener=_localSRBridgeListener;
@property(retain, nonatomic) CSConnectionListener *ssrListener; // @synthesize ssrListener=_ssrListener;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)getLeadingUtteranceLogger;	// IMP=0x001000000001c60d
- (void)_logSpeakerFalseTriggerMitigationScore:(id)arg1 withSpeakerMatchScore:(float)arg2 withSpeakerScoreThreshold:(float)arg3 withAudioDuration:(double)arg4 withSuccess:(_Bool)arg5;	// IMP=0x001000000001c607
- (void)logSpeakerFalseTriggerMitigationScore:(unsigned long long)arg1;	// IMP=0x001000000001c3bc
- (void)updateCachedScoresForLogging:(unsigned long long)arg1;	// IMP=0x001000000001c148
- (void)attSiriAudioSrcNodeLPCMRecordBufferAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x001000000001bfa8
- (void)attSiriAudioSrcNodeDidStop:(id)arg1;	// IMP=0x001000000001bec6
- (void)attSiriAudioSrcNodeDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000001bec0
- (void)_stopProcessing;	// IMP=0x001000000001ba59
- (id)_mapScoresToSharedSiriId:(id)arg1;	// IMP=0x001000000001b619
- (id)_processSpeakerRecognitionResult:(id)arg1;	// IMP=0x001000000001b385
- (void)speakerRecognitionFinishedProcessing:(id)arg1 withFinalSpeakerInfo:(id)arg2;	// IMP=0x001000000001ada3
- (void)speakerRecognitionController:(id)arg1 hasSpeakerInfo:(id)arg2;	// IMP=0x001000000001a608
- (void)CSSpeakerRecognitionAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(_Bool)arg2 assetProviderType:(unsigned long long)arg3;	// IMP=0x001000000001a513
- (void)startXPCConnection;	// IMP=0x001000000001a494
- (void)_refreshSpeakerRecognitionAssets;	// IMP=0x0010000000019e05
- (void)_setupSpeakerRecognitionForProfiles:(id)arg1 WithVTEventInfo:(id)arg2 WithLocale:(id)arg3;	// IMP=0x0010000000019945
- (void)_setupLeadingUtteranceLogger;	// IMP=0x0010000000019698
- (void)_setupSSRControllerWithAudioContext:(id)arg1 withVoiceTriggerEventInfo:(id)arg2;	// IMP=0x00100000000192c3
- (id)getSharedUserIdWithHighestVoiceIdScore:(id)arg1;	// IMP=0x0010000000018ec3
- (id)filteredVoiceProfileArray:(id)arg1;	// IMP=0x0010000000018d3f
- (void)removeReceiver:(id)arg1;	// IMP=0x0010000000018c63
- (void)addReceiver:(id)arg1;	// IMP=0x0010000000018aeb
- (void)stop;	// IMP=0x00100000000189f3
- (void)pause;	// IMP=0x00100000000189ed
- (void)resetForNewRequestWithRecordContext:(id)arg1 voiceTriggerInfo:(id)arg2;	// IMP=0x00100000000188ab
- (void)start;	// IMP=0x00100000000188a5
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x00100000000186d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) CSAsset *prefetchedAsset;
@property(readonly) Class superclass;

@end

