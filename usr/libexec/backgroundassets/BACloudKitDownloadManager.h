//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BACloudKitDownload, CKOperationConfiguration, CKQueryOperation, NSLock, NSMutableDictionary, NSURL;
@protocol BACloudKitDownloadManagerDelegate, OS_dispatch_queue;

@interface BACloudKitDownloadManager : NSObject
{
    _Bool _recordFound;	// 8 = 0x8
    _Bool _assetFound;	// 9 = 0x9
    id <BACloudKitDownloadManagerDelegate> _delegate;	// 16 = 0x10
    BACloudKitDownload *_download;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_responseQueue;	// 32 = 0x20
    NSLock *_stateLock;	// 40 = 0x28
    CKOperationConfiguration *_operationConfiguration;	// 48 = 0x30
    CKQueryOperation *_currentOperation;	// 56 = 0x38
    NSMutableDictionary *_recordErrors;	// 64 = 0x40
    unsigned long long _assetSize;	// 72 = 0x48
    NSURL *_assetURL;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000001d18d
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(nonatomic) unsigned long long assetSize; // @synthesize assetSize=_assetSize;
@property(nonatomic) _Bool assetFound; // @synthesize assetFound=_assetFound;
@property(nonatomic) _Bool recordFound; // @synthesize recordFound=_recordFound;
@property(retain, nonatomic) NSMutableDictionary *recordErrors; // @synthesize recordErrors=_recordErrors;
@property(retain, nonatomic) CKQueryOperation *currentOperation; // @synthesize currentOperation=_currentOperation;
@property(retain, nonatomic) CKOperationConfiguration *operationConfiguration; // @synthesize operationConfiguration=_operationConfiguration;
@property(retain, nonatomic) NSLock *stateLock; // @synthesize stateLock=_stateLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(nonatomic) __weak BACloudKitDownload *download; // @synthesize download=_download;
@property(nonatomic) __weak id <BACloudKitDownloadManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_newOperationQuery;	// IMP=0x001000000001cd4b
- (void)_downloadActualAsset;	// IMP=0x001000000001c3cd
- (_Bool)_consumeAvailableDownloadSize;	// IMP=0x001000000001c1e1
- (void)_downloadSucceededWithURL:(id)arg1;	// IMP=0x001000000001c056
- (void)_downloadFailedWithError:(id)arg1;	// IMP=0x001000000001becc
- (void)cancelDownload;	// IMP=0x001000000001be8f
- (void)pauseDownload;	// IMP=0x001000000001bd67
- (_Bool)startDownloadWithError:(id *)arg1;	// IMP=0x001000000001b210
- (id)initWithDownload:(id)arg1 withDelegate:(id)arg2;	// IMP=0x001000000001b0e5

@end
