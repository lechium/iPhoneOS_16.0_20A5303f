//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData, NSMutableDictionary, NSProgress, NSString, NSURL, SDAirDropFileZipper, SDStatusMonitor;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_os_transaction, SDAirDropConnectionDelegate;

@interface SDAirDropConnection : NSObject
{
    _Bool _discover;	// 8 = 0x8
    _Bool _personAdded;	// 9 = 0x9
    _Bool _stopDeferred;	// 10 = 0xa
    _Bool _userAccepted;	// 11 = 0xb
    _Bool _senderTrusted;	// 12 = 0xc
    _Bool _delayedFinish;	// 13 = 0xd
    _Bool _queueSuspended;	// 14 = 0xe
    _Bool _endEncountered;	// 15 = 0xf
    _Bool _connectionClosed;	// 16 = 0x10
    _Bool _transactionStarted;	// 17 = 0x11
    struct __SFNode *_person;	// 24 = 0x18
    NSURL *_destination;	// 32 = 0x20
    char *_requestBuffer;	// 40 = 0x28
    NSProgress *_progress;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    struct __SecTrust *_clientTrust;	// 64 = 0x40
    double _startTime;	// 72 = 0x48
    SDStatusMonitor *_monitor;	// 80 = 0x50
    long long _lastEvent;	// 88 = 0x58
    NSMutableData *_requestData;	// 96 = 0x60
    struct __CFReadStream *_readStream;	// 104 = 0x68
    SDAirDropFileZipper *_zipper;	// 112 = 0x70
    NSMutableDictionary *_properties;	// 120 = 0x78
    unsigned int _powerAssertionID;	// 128 = 0x80
    NSObject<OS_dispatch_semaphore> *_askSemaphore;	// 136 = 0x88
    struct _CFHTTPServerRequest *_askRequest;	// 144 = 0x90
    struct _CFHTTPServerRequest *_uploadRequest;	// 152 = 0x98
    struct _CFHTTPServerRequest *_discoverRequest;	// 160 = 0xa0
    struct _CFHTTPServerConnection *_connection;	// 168 = 0xa8
    NSData *_mediaCapabilities;	// 176 = 0xb0
    NSObject<OS_os_transaction> *_transaction;	// 184 = 0xb8
    _Bool _contactsOnly;	// 192 = 0xc0
    _Bool _shouldExtractMediaFromPhotosBundles;	// 193 = 0xc1
    NSString *_sessionID;	// 200 = 0xc8
    id <SDAirDropConnectionDelegate> _delegate;	// 208 = 0xd0
}

+ (id)disambiguatedModelName;	// IMP=0x00200000001baaa9
+ (id)validatedItemsArray:(id)arg1;	// IMP=0x00100000001b5033
+ (id)validatedFilesArray:(id)arg1;	// IMP=0x00100000001b4d63
+ (id)validatedFileInfo:(id)arg1;	// IMP=0x00100000001b496d
+ (id)fileInfoExpectedClassForKeyMap;	// IMP=0x00100000001b4810
- (void).cxx_destruct;	// IMP=0x00200000001bb25c
@property __weak id <SDAirDropConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool shouldExtractMediaFromPhotosBundles; // @synthesize shouldExtractMediaFromPhotosBundles=_shouldExtractMediaFromPhotosBundles;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy) NSURL *destination; // @synthesize destination=_destination;
@property _Bool contactsOnly; // @synthesize contactsOnly=_contactsOnly;
- (void)stop;	// IMP=0x00100000001baeff
- (_Bool)accept;	// IMP=0x00100000001bade3
- (void)start;	// IMP=0x00100000001bac31
- (void)startPublishingProgressForPlaceholderFiles:(id)arg1;	// IMP=0x00100000001bac2b
- (void)schedule;	// IMP=0x00100000001babfe
- (void)fileZipper:(id)arg1 event:(long long)arg2 withProperty:(void *)arg3;	// IMP=0x00100000001ba919
- (_Bool)transferIsOverPrebufferLimit;	// IMP=0x00100000001ba8ba
- (void)setCombinedFileURLsAndItems:(id)arg1;	// IMP=0x00100000001ba7e8
- (void)setSpotlightMetadata:(id)arg1;	// IMP=0x00100000001ba7e2
- (id)whereFromInfo;	// IMP=0x00100000001ba743
- (void)handleClosedConnection;	// IMP=0x00100000001ba565
- (void)didFailToSendResponse:(struct _CFHTTPServerResponse *)arg1;	// IMP=0x00100000001ba4ab
- (void)didSendResponse:(struct _CFHTTPServerResponse *)arg1 forRequest:(struct _CFHTTPServerRequest *)arg2;	// IMP=0x00100000001ba11d
- (void)finishOperation;	// IMP=0x00100000001b9d3a
- (void)notifyClientOfBytesCopied:(id)arg1 timeRemaining:(id)arg2;	// IMP=0x00100000001b9bff
- (long long)getStatusCode:(struct _CFHTTPServerResponse *)arg1;	// IMP=0x00100000001b9bba
- (void)didReceiveRequest:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x00100000001b90d1
- (void)enqueueBadResponseForRequest:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x00100000001b8f43
- (void)makeDestinationDirectory;	// IMP=0x00100000001b8d52
- (_Bool)oneHundredContinue:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x00100000001b8d04
- (void)enqueueResponse:(struct _CFHTTPServerRequest *)arg1 code:(long long)arg2 body:(struct __CFData *)arg3;	// IMP=0x00100000001b8c8f
- (void)silentlyCancelRequest;	// IMP=0x00100000001b8bb6
- (_Bool)senderInfoAvailable;	// IMP=0x00100000001b8b33
- (_Bool)thereIsEnoughFreeSpace;	// IMP=0x00100000001b8a07
- (_Bool)startReceivingFile:(struct _CFHTTPServerRequest *)arg1 error:(id *)arg2;	// IMP=0x00100000001b8631
- (id)compressionType;	// IMP=0x00100000001b8569
- (_Bool)startReceivingBody:(struct _CFHTTPServerRequest *)arg1 error:(id *)arg2;	// IMP=0x00100000001b83c5
- (void)handleReadStreamEvent:(struct __CFReadStream *)arg1 event:(unsigned long long)arg2;	// IMP=0x00100000001b823d
- (void)processRequest;	// IMP=0x00100000001b817b
- (void)cancelAndDecline;	// IMP=0x00100000001b80c7
- (void)handleAskRequest;	// IMP=0x00100000001b7c27
- (void)adjustPropertiesForPhotosBundles;	// IMP=0x00100000001b7923
- (void)adjustPropertiesForAutoAcceptSenderIsMe:(_Bool)arg1;	// IMP=0x00100000001b781a
- (_Bool)transferContainsPhotosAssetBundles;	// IMP=0x00100000001b7677
- (_Bool)allowAskRequestFromPerson:(struct __SFNode *)arg1;	// IMP=0x00100000001b75a4
- (void)parseAskRequest;	// IMP=0x00100000001b7389
- (void)handleDiscoverRequest;	// IMP=0x00100000001b71f5
- (void)parseDiscoverRequest;	// IMP=0x00100000001b70bb
- (void)convertURLStringsToURLs;	// IMP=0x00100000001b6f00
- (void)silentlyCancelRequestOnMainThread;	// IMP=0x00100000001b6e9f
- (_Bool)senderIsMe;	// IMP=0x00100000001b6c74
- (_Bool)senderIsTrusted:(id)arg1;	// IMP=0x00100000001b6ab6
- (_Bool)senderIsBlocked;	// IMP=0x00100000001b682b
- (void)logSenderIsBlocked;	// IMP=0x00100000001b67ce
- (struct __SFNode *)createPersonForAskRequest;	// IMP=0x00100000001b6354
- (void)sendUploadResponse:(long long)arg1;	// IMP=0x00100000001b6159
- (void)releaseIdleSleepAssertion;	// IMP=0x00100000001b6050
- (void)sendAskResponse:(long long)arg1;	// IMP=0x00100000001b5cc0
- (void)sendDiscoverResponse:(long long)arg1 forKnownAlias:(id)arg2;	// IMP=0x00100000001b577d
- (void)storeIconValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b56a1
- (void)storeBooleanValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b560a
- (void)storeNumberValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b5573
- (void)storeStringValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b54dc
- (void)storeDataValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b5445
- (void)storeRequestValue:(struct _CFHTTPServerRequest *)arg1 forKey:(struct __CFString *)arg2 convertToNumber:(_Bool)arg3;	// IMP=0x00100000001b52de
- (void)storeArrayValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b5146
- (void)setProperty:(void *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b47f4
- (void)didReceiveError:(struct __CFError *)arg1;	// IMP=0x00100000001b4707
- (void)notifyClientForEvent:(long long)arg1;	// IMP=0x00100000001b3e12
- (void)performBlockForAllProgresses:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b3e00
- (double)getTransferSize;	// IMP=0x00100000001b3d9b
- (double)getTransferRate;	// IMP=0x00100000001b3d09
- (void)notifyClient:(long long)arg1 withResults:(id)arg2;	// IMP=0x00100000001b3c7f
- (void)handleTerminalCallBack;	// IMP=0x00100000001b3c18
- (void)removeObservers;	// IMP=0x00100000001b3bc5
- (void)addObservers;	// IMP=0x00100000001b3b5e
- (void)wirelessPowerChanged:(id)arg1;	// IMP=0x00100000001b3a75
- (void)systemWillSleep:(id)arg1;	// IMP=0x00100000001b39a5
- (void)didCloseConnection;	// IMP=0x00100000001b393c
- (void)dealloc;	// IMP=0x00100000001b380d
- (id)initWithConnection:(struct _CFHTTPServerConnection *)arg1;	// IMP=0x00100000001b3658

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

