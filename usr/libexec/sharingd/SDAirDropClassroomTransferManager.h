//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSMutableDictionary, NSString, SDAirDropTransferManager;

@interface SDAirDropClassroomTransferManager
{
    NSMutableDictionary *_transferIDToProgress;	// 8 = 0x8
    SDAirDropTransferManager *_transferManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000021d510
@property(retain, nonatomic) SDAirDropTransferManager *transferManager; // @synthesize transferManager=_transferManager;
- (void)connectionInvalidated:(id)arg1;	// IMP=0x001000000021d39c
- (void)connectionEstablished:(id)arg1;	// IMP=0x001000000021d293
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x001000000021d28b
- (id)remoteObjectInterface;	// IMP=0x001000000021d26b
- (id)exportedInterface;	// IMP=0x001000000021d11b
- (id)machServiceName;	// IMP=0x001000000021d10e
- (void)alertManager:(id)arg1 cancelingTransferWithRecordID:(id)arg2 withFailureReason:(unsigned long long)arg3;	// IMP=0x001000000021cf31
- (MISSING_TYPE *)alertManager:acceptingTransferWithRecordID:withDestinationURL:shouldExtractMediaFromPhotosBundlesForRecordID: /* Error: Ran out of types for this method. */;	// IMP=0x001000000021cd62
- (void)updateTransferWithIdentifier:(id)arg1 withState:(long long)arg2 information:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000021c396
- (void)replaceIconValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000021c276
- (id)makeDestinationDirectoryWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000021bff1
- (void)_enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000021bfdf
- (void)invalidate;	// IMP=0x001000000021bfb0
- (void)activate;	// IMP=0x001000000021bf81
- (id)init;	// IMP=0x001000000021bf24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
