//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriAFTMNode, CSAttSiriAsrNode, CSAttSiriAudioSrcNode, CSAttSiriEndpointerNode, CSAttSiriFlexKwdNode, CSAttSiriNLDAClassifierNode, CSAttSiriOSDNode, CSAttSiriSSRNode, CSAttSiriSpeechDetectionNode, CSAttSiriUresNode, CSAudioRecordContext, CSAudioStartStreamOption, CSAudioStream, CSConnectionListener, CSOSTransaction, CSSiriClientBehaviorMonitor, CSSiriEnabledMonitor, CSSpeechManager, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface CSAttSiriController : NSObject
{
    CSConnectionListener *_attSiriSvcListener;	// 8 = 0x8
    NSMapTable *_nodesCache;	// 16 = 0x10
    CSAttSiriEndpointerNode *_endpointerNode;	// 24 = 0x18
    CSAttSiriOSDNode *_osdNode;	// 32 = 0x20
    CSAttSiriAsrNode *_asrNode;	// 40 = 0x28
    CSAttSiriUresNode *_uresNode;	// 48 = 0x30
    CSAttSiriAudioSrcNode *_audioSrcNode;	// 56 = 0x38
    CSAttSiriSSRNode *_ssrNode;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    CSAudioRecordContext *_audioRecordContext;	// 80 = 0x50
    CSAudioStartStreamOption *_siriClientAudioStartStreamOption;	// 88 = 0x58
    CSOSTransaction *_attSiriTransaction;	// 96 = 0x60
    NSString *_requestMHUUID;	// 104 = 0x68
    CSSiriClientBehaviorMonitor *_siriClientBehaviorMonitor;	// 112 = 0x70
    CSAudioStream *_siriClientStream;	// 120 = 0x78
    CSAsset *_mitigationAsset;	// 128 = 0x80
    CSSpeechManager *_speechManager;	// 136 = 0x88
    CSSiriEnabledMonitor *_siriEnabledMonitor;	// 144 = 0x90
    CSAttSiriFlexKwdNode *_flexKwdNode;	// 152 = 0x98
    CSAttSiriAFTMNode *_aFTMNode;	// 160 = 0xa0
    CSAttSiriNLDAClassifierNode *_nldaClassifierNode;	// 168 = 0xa8
    CSAttSiriSpeechDetectionNode *_speechDetectionNode;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00200000000b8b65
@property(retain, nonatomic) CSAttSiriSpeechDetectionNode *speechDetectionNode; // @synthesize speechDetectionNode=_speechDetectionNode;
@property(retain, nonatomic) CSAttSiriNLDAClassifierNode *nldaClassifierNode; // @synthesize nldaClassifierNode=_nldaClassifierNode;
@property(retain, nonatomic) CSAttSiriAFTMNode *aFTMNode; // @synthesize aFTMNode=_aFTMNode;
@property(retain, nonatomic) CSAttSiriFlexKwdNode *flexKwdNode; // @synthesize flexKwdNode=_flexKwdNode;
@property(retain, nonatomic) CSSiriEnabledMonitor *siriEnabledMonitor; // @synthesize siriEnabledMonitor=_siriEnabledMonitor;
@property(retain, nonatomic) CSSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) CSAsset *mitigationAsset; // @synthesize mitigationAsset=_mitigationAsset;
@property(retain, nonatomic) CSAudioStream *siriClientStream; // @synthesize siriClientStream=_siriClientStream;
@property(retain, nonatomic) CSSiriClientBehaviorMonitor *siriClientBehaviorMonitor; // @synthesize siriClientBehaviorMonitor=_siriClientBehaviorMonitor;
@property(retain, nonatomic) NSString *requestMHUUID; // @synthesize requestMHUUID=_requestMHUUID;
@property(retain, nonatomic) CSOSTransaction *attSiriTransaction; // @synthesize attSiriTransaction=_attSiriTransaction;
@property(retain, nonatomic) CSAudioStartStreamOption *siriClientAudioStartStreamOption; // @synthesize siriClientAudioStartStreamOption=_siriClientAudioStartStreamOption;
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSAttSiriSSRNode *ssrNode; // @synthesize ssrNode=_ssrNode;
@property(retain, nonatomic) CSAttSiriAudioSrcNode *audioSrcNode; // @synthesize audioSrcNode=_audioSrcNode;
@property(retain, nonatomic) CSAttSiriUresNode *uresNode; // @synthesize uresNode=_uresNode;
@property(retain, nonatomic) CSAttSiriAsrNode *asrNode; // @synthesize asrNode=_asrNode;
@property(retain, nonatomic) CSAttSiriOSDNode *osdNode; // @synthesize osdNode=_osdNode;
@property(retain, nonatomic) CSAttSiriEndpointerNode *endpointerNode; // @synthesize endpointerNode=_endpointerNode;
@property(retain, nonatomic) NSMapTable *nodesCache; // @synthesize nodesCache=_nodesCache;
@property(retain, nonatomic) CSConnectionListener *attSiriSvcListener; // @synthesize attSiriSvcListener=_attSiriSvcListener;
- (void)siriRequestProcessingCompleted;	// IMP=0x00100000000b88e6
- (void)stopAttendingWithContext:(id)arg1;	// IMP=0x00100000000b88e0
- (void)startAttendingWithContext:(id)arg1;	// IMP=0x00100000000b88da
- (void)handleAudioStopUnexpectly;	// IMP=0x00100000000b87f8
- (void)handleAttendingAudioStopUnexpectly;	// IMP=0x00100000000b8764
- (void)_releaseAttSiriTransactionIfNeeded;	// IMP=0x00100000000b86af
- (void)_holdAttSiriTransactionIfNeeded;	// IMP=0x00100000000b8661
- (void)_handleStopProcessing;	// IMP=0x00100000000b8563
- (void)_handleStartProcessingWithRecordContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b805a
- (void)_setupAudioSrcNodeWithSiriClientStream:(id)arg1;	// IMP=0x00100000000b7e01
- (void)_fetchMitigationAssets;	// IMP=0x00100000000b7b44
- (void)_forceBuildGraph:(_Bool)arg1;	// IMP=0x00100000000b777b
- (void)_reconfigureRequiredNodes:(id)arg1 enforceAttendingAudioNode:(_Bool)arg2;	// IMP=0x00100000000b722c
- (void)_tearDownBuildGraph:(id)arg1;	// IMP=0x00100000000b706c
- (void)attSiriNodeDidNotDetectSpeechWithTimeout;	// IMP=0x00100000000b6fc4
- (void)attSiriNode:(id)arg1 didDetectSpeechWithTriggerInfo:(id)arg2;	// IMP=0x00100000000b6e7f
- (void)attSiriNode:(id)arg1 triggerReportedFromFlxKwdSpotter:(id)arg2;	// IMP=0x00100000000b6da8
- (void)attSiriNode:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x00100000000b6da2
- (void)attSiriNode:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3;	// IMP=0x00100000000b6d9c
- (void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;	// IMP=0x00100000000b6ca4
- (void)siriClientBehaviorMonitor:(id)arg1 preparedSiriClientAudioStream:(id)arg2 successfully:(_Bool)arg3;	// IMP=0x00100000000b6b0b
- (void)siriClientBehaviorMonitor:(id)arg1 fetchedSiriClientAudioStream:(id)arg2 successfully:(_Bool)arg3;	// IMP=0x00100000000b6972
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x00100000000b6890
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x00100000000b6823
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x00100000000b652e
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x00100000000b6379
- (void)stop;	// IMP=0x00100000000b6373
- (void)pause;	// IMP=0x00100000000b636d
- (void)start;	// IMP=0x00100000000b62bd
- (id)getNodeOfType:(unsigned long long)arg1;	// IMP=0x00100000000b615d
- (id)initWithEndpointerNode:(id)arg1 osdNode:(id)arg2 ssrNode:(id)arg3 asrNode:(id)arg4 uresNode:(id)arg5 flexKwdNode:(id)arg6 needsSSRNode:(_Bool)arg7 aFtmNode:(id)arg8 speechDetectionNode:(id)arg9 speechManager:(id)arg10 siriEnabledMonitor:(id)arg11 siriClientBehaviorMonitor:(id)arg12 supportsAcousticProgressiveChecker:(_Bool)arg13 supportsUnderstandingOnDevice:(_Bool)arg14 requireASROnDevice:(_Bool)arg15;	// IMP=0x00100000000b5ab9
- (id)init;	// IMP=0x00100000000b5a00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

