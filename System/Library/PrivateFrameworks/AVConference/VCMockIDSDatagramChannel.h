//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/IDSDatagramChannel.h>

@class NSDictionary, NSLock, NSObject, VCMockIDSDataChannelLinkContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCMockIDSDatagramChannel : IDSDatagramChannel
{
    NSDictionary *_subscribedStreamsByParticipantID;	// 24 = 0x18
    int _socket;	// 32 = 0x20
    _Bool _isValid;	// 36 = 0x24
    VCMockIDSDataChannelLinkContext *_linkContext;	// 40 = 0x28
    CDUnknownBlockType _eventHandler;	// 48 = 0x30
    CDUnknownBlockType _readHandler;	// 56 = 0x38
    CDUnknownBlockType _readHandlerWithOptions;	// 64 = 0x40
    CDUnknownBlockType _writeDatagramsBlock;	// 72 = 0x48
    CDUnknownBlockType _writeDatagramBlock;	// 80 = 0x50
    CDUnknownBlockType _readyToReadBlock;	// 88 = 0x58
    NSLock *_blockSettingLock;	// 96 = 0x60
    struct _VCSingleLinkedList _datagramPackets;	// 104 = 0x68
    struct __CFAllocator *_datagramPacketAllocator;	// 136 = 0x88
    unsigned long long _datagramPacketNextSequenceNumber;	// 144 = 0x90
    _Bool _usingOptions;	// 152 = 0x98
    double _emulatedRxPLR;	// 160 = 0xa0
    struct _opaque_pthread_mutex_t _streamSubscriptionLock;	// 168 = 0xa8
    long long _participantGenerationCounter;	// 232 = 0xe8
    _Bool _isTestingOneToOneMode;	// 240 = 0xf0
    unsigned short numPacketSent;	// 242 = 0xf2
    unsigned short numPacketReceived;	// 244 = 0xf4
    int _dataPath;	// 248 = 0xf8
    _Bool _idsUPlusOneMode;	// 252 = 0xfc
    _Bool _isNackEnabled;	// 253 = 0xfd
    unsigned char _packetBuffer[2048][1500];	// 254 = 0xfe
    unsigned short _packetBufferDataSize[2048];	// 3072254 = 0x2ee0fe
    CDStruct_9bf45fcd _packetDatagramOptions[2048];	// 3076352 = 0x2ef100
    NSObject<OS_dispatch_queue> *_directPathReadQueue;	// 3322112 = 0x32b100
}

+ (void)extractRTPData:(char *)arg1 ssrc:(unsigned int *)arg2 sequenceNumber:(unsigned short *)arg3;	// IMP=0x00600000002f6081
@property(readonly) _Bool idsUPlusOneMode; // @synthesize idsUPlusOneMode=_idsUPlusOneMode;
- (void)setUPlusOneMode:(_Bool)arg1 isInitiator:(_Bool)arg2;	// IMP=0x00000000002f9724
- (void)flushLinkProbingStatusWithOptions:(id)arg1;	// IMP=0x00000000002f971e
- (void)queryStatusWithOptions:(id)arg1;	// IMP=0x00000000002f9718
- (void)stopActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000002f9712
- (void)queryProbingResultsWithOptions:(id)arg1;	// IMP=0x00000000002f970c
- (void)startActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000002f9706
- (void)setWiFiAssist:(_Bool)arg1;	// IMP=0x00000000002f9700
- (void)osChannelInfoLog;	// IMP=0x00000000002f96fa
- (void)handlePacket:(struct _VCMockIDSDatagramChannelPacket *)arg1 packetHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002f9689
- (void)retrieveAndProcessMediaPacketsFromBuffer:(struct tagRTCPPACKET *)arg1 packetHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002f95e8
- (void)retrieveAndProcesOnePacket:(unsigned int)arg1 seq:(unsigned short)arg2 count:(int)arg3 index:(int)arg4;	// IMP=0x00000000002f8cef
- (void)addMediaPacketToBuffer:(char *)arg1 length:(unsigned long long)arg2 datagramOptions:(CDStruct_9bf45fcd)arg3;	// IMP=0x00000000002f8a8c
- (void)processPacket:(struct _VCMockIDSDatagramChannelPacket *)arg1 packetHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002f885d
- (void)printDroppedPacketInfo:(struct _VCMockIDSDatagramChannelPacket *)arg1;	// IMP=0x00000000002f8483
- (struct _VCMockIDSDatagramChannelPacket *)constructPacket:(struct _VCMockIDSDatagramChannelPacket *)arg1 datagram:(const void *)arg2 datagramSize:(unsigned int)arg3 datagramOptions:(CDStruct_9bf45fcd *)arg4;	// IMP=0x00000000002f83af
- (int)readyToRead;	// IMP=0x00000000002f82e4
- (int)drainUnderlyingFileDescriptor;	// IMP=0x00000000002f8238
- (int)underlyingFileDescriptor;	// IMP=0x00000000002f8153
- (_Bool)createSocket;	// IMP=0x00000000002f80b4
- (void)reportFirstPacketTimeForMKI:(id)arg1;	// IMP=0x00000000002f7ff9
- (void)requestSessionInfoWithOptions:(id)arg1;	// IMP=0x00000000002f7b0a
- (void)setChannelPreferences:(id)arg1;	// IMP=0x00000000002f7808
- (void)setReadHandlerWithOptions:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f77bc
- (void)setReadHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f7770
- (void)setEventHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f745e
- (void)start;	// IMP=0x00000000002f73a3
- (void)invalidate;	// IMP=0x00000000002f7108
- (_Bool)processDatagramForDirectIDSDataPath:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramOptions:(CDStruct_9bf45fcd *)arg3 error:(id *)arg4;	// IMP=0x00000000002f6e67
- (void)writeDatagrams:(const void **)arg1 datagramsSize:(unsigned int *)arg2 datagramsInfo:(CDStruct_4aae7d13 *)arg3 datagramsCount:(int)arg4 options:(struct **)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000002f6d4a
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_4aae7d13)arg3 options:(CDStruct_9bf45fcd *)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002f6c8c
- (void)readDatagramsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f6bd1
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 flags:(CDStruct_4aae7d13)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002f6b15
- (void)readDatagramWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f6a5a
- (_Bool)isNACKPacket:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000002f68c0
- (_Bool)isRTCPPacket:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000002f68a5
- (_Bool)isMediaPacket:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000002f688a
- (void)dequeueDatagramPacket:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f67d0
- (_Bool)shouldReadPacket:(struct _VCMockIDSDatagramChannelPacket *)arg1;	// IMP=0x00000000002f6455
- (id)newArrayOfStreamIdsForPacket:(struct _VCMockIDSDatagramChannelPacket *)arg1;	// IMP=0x00000000002f6398
- (_Bool)isControlChannelDatagram:(struct _VCMockIDSDatagramChannelPacket *)arg1;	// IMP=0x00000000002f6388
- (_Bool)enqueueDatagramPacket:(const void *)arg1 datagramSize:(unsigned int)arg2 options:(CDStruct_9bf45fcd *)arg3 error:(id *)arg4;	// IMP=0x00000000002f60ae
- (void)signalUnderlyingFileDescriptor;	// IMP=0x00000000002f5fd7
- (void)setReadyToReadBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f5f58
- (void)setWriteDatagramBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f5ed9
- (void)setWriteDatagramsBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f5e5a
- (void)readDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramOptions:(CDStruct_9bf45fcd *)arg3;	// IMP=0x00000000002f5dd5
- (void)dealloc;	// IMP=0x00000000002f5d23
- (void)cleanup;	// IMP=0x00000000002f5be2
- (void)flushDatagramPacketsList;	// IMP=0x00000000002f5b43
- (id)initCreateSocketRequiresOptions:(_Bool)arg1 dataPath:(int)arg2;	// IMP=0x00000000002f59d8
- (id)initRequiresOptions:(_Bool)arg1;	// IMP=0x00000000002f592a
- (_Bool)setupMockIDSDatagramChannelRequiresOptions:(_Bool)arg1;	// IMP=0x00000000002f5602

@end

