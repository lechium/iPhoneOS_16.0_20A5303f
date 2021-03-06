//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NBRemoteObjectClassC
{
}

- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0040000000011cc5
- (void)sendDeleteBackupResponse:(id)arg1 withRequestIdentifier:(id)arg2 withSentBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011acb
- (void)sendDeleteBackupRequest:(id)arg1 withResponseBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001171d
- (void)sendCreateBackupResponse:(id)arg1 withRequestIdentifier:(id)arg2 error:(id)arg3 withSentBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000114cd
- (void)sendCreateBackupRequestWithResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011167
- (void)sendRestoreResponse:(id)arg1 withRequestIdentifier:(id)arg2 withSentBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010f6d
- (void)sendBackupPayload:(id)arg1 withResponseBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000109fd
- (id)activelyPairingDevice;	// IMP=0x00100000000108c0
- (void)sendRestoreRequest:(id)arg1 withResponseBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010587
- (void)sendBackupListResponse:(id)arg1 error:(id)arg2 withRequestIdentifier:(id)arg3 withSentBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000010254
- (void)sendBackupListRequestWithResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fd21
- (id)protobufFromBackup:(id)arg1;	// IMP=0x001000000000f788
- (id)backupFromProtobuf:(id)arg1;	// IMP=0x001000000000f194
- (id)class:(Class)arg1 fromBytes:(id)arg2;	// IMP=0x001000000000eef3
- (id)bytesFromClass:(id)arg1;	// IMP=0x001000000000eccc
- (id)readWatchFaceFromFile:(id)arg1;	// IMP=0x001000000000ecb3
- (id)writeWatchFaceToFile:(id)arg1;	// IMP=0x001000000000ea1a
- (id)sha256FromData:(id)arg1;	// IMP=0x001000000000e95a
- (id)dataFromUUID:(id)arg1;	// IMP=0x001000000000e8da
- (id)uuidFromData:(id)arg1;	// IMP=0x001000000000e85a
- (void)idsHandleDeleteBackupRequest:(id)arg1;	// IMP=0x001000000000e630
- (void)idsHandlePayloadRestoreRequest:(id)arg1 context:(id)arg2;	// IMP=0x001000000000e4c7
- (void)idsHandleRestoreRequest:(id)arg1;	// IMP=0x001000000000e269
- (void)idsHandleBackupListRequest:(id)arg1;	// IMP=0x001000000000e11f
- (void)registerProtobufHandlers;	// IMP=0x001000000000e073
- (id)initWithDelegate:(id)arg1 andQueue:(id)arg2;	// IMP=0x001000000000e037

@end

