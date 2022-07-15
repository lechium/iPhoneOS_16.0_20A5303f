//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCDatagramChannelIDS, VCEmulatedNetwork;

__attribute__((visibility("hidden")))
@interface VCDatagramChannelIDSEmulated
{
    long long _mode;	// 64 = 0x40
    VCDatagramChannelIDS *_idsChannel;	// 72 = 0x48
    VCEmulatedNetwork *_network;	// 80 = 0x50
    struct tagVCMemoryPool *_datagramMetaDataPool;	// 88 = 0x58
    int _packetCount;	// 96 = 0x60
    _Bool _isStarted;	// 100 = 0x64
}

- (id)destination;	// IMP=0x0000000000120187
- (unsigned int)token;	// IMP=0x000000000012016a
- (id)defaultLink;	// IMP=0x000000000012014d
- (id)connectedLinks;	// IMP=0x0000000000120130
- (void)osChannelInfoLog;	// IMP=0x0000000000120113
- (void)readyToRead;	// IMP=0x00000000001200f6
- (void)setReadHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001200d9
- (void)invalidate;	// IMP=0x000000000012005e
- (int)start;	// IMP=0x000000000011ffb8
- (void)setupEmulatedNetwork;	// IMP=0x000000000011fcb4
- (void)optOutStreamIDs:(id)arg1;	// IMP=0x000000000011fc97
- (void)optInStreamIDs:(id)arg1;	// IMP=0x000000000011fc7a
- (void)requestSessionInfoWithOptions:(id)arg1;	// IMP=0x000000000011fc5d
- (void)setWiFiAssist:(_Bool)arg1;	// IMP=0x000000000011fc40
- (void)setChannelPreferences:(id)arg1;	// IMP=0x000000000011fc23
- (void)setEventHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000011fc06
- (void)writeDatagrams:(const void **)arg1 datagramsSize:(unsigned int *)arg2 datagramsInfo:(CDStruct_4aae7d13 *)arg3 datagramsCount:(int)arg4 options:(struct **)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000011faca
- (_Bool)writeToEmulatedNetworkWithDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_4aae7d13)arg3 options:(CDStruct_9bf45fcd *)arg4;	// IMP=0x000000000011f887
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_4aae7d13)arg3 options:(CDStruct_9bf45fcd *)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000011f7ab
- (void)dealloc;	// IMP=0x000000000011f643
- (id)initWithIDSDatagramChannel:(id)arg1 mode:(long long)arg2;	// IMP=0x000000000011f50f

@end
