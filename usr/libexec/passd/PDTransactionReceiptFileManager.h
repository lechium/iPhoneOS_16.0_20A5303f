//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager, NSSet, NSURL;
@protocol PDTransactionReceiptFileManagerDelegate;

@interface PDTransactionReceiptFileManager : NSObject
{
    NSURL *_directoryURL;	// 8 = 0x8
    struct os_unfair_lock_s _fileAccessLock;	// 16 = 0x10
    id <PDTransactionReceiptFileManagerDelegate> _delegate;	// 24 = 0x18
    NSFileManager *_fileManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000407f6e
- (id)_transactionReceiptUniqueIDFromFileURL:(id)arg1;	// IMP=0x0010000000407f11
- (_Bool)_isTransactionReceiptFileURL:(id)arg1;	// IMP=0x0010000000407e4d
- (id)_fileURLForTransactionReceiptUniqueID:(id)arg1;	// IMP=0x0010000000407de8
- (void)registerDatabaseTransactionReceipt:(id)arg1;	// IMP=0x0010000000407d21
- (_Bool)deleteTransactionReceiptWithUniqueID:(id)arg1;	// IMP=0x0010000000407c46
- (void)_downloadImageURLsForReceipt:(id)arg1 atURL:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000407548
- (void)writeTransactionReceipt:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000040724a
- (id)transactionReceiptWithUniqueID:(id)arg1;	// IMP=0x001000000040717f
@property(readonly, nonatomic) NSSet *transactionReceipts;
@property(readonly, nonatomic) NSSet *uniqueIDs;
- (id)initWithDirectoryURL:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000406c1f

@end
