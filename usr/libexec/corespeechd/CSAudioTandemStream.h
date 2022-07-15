//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSAudioStream, MISSING_TYPE, NSString;

@interface CSAudioTandemStream
{
    CSAudioStream *_primaryStream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000005cd51
@property(nonatomic) __weak CSAudioStream *primaryStream; // @synthesize primaryStream=_primaryStream;
- (MISSING_TYPE *)isStreaming;	// IMP=0x001000000005cce0
- (void)stopAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005cca4
- (void)startAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005cc68
- (void)prepareAudioStreamWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005cc2c
- (_Bool)prepareAudioStreamSyncWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005cc00
- (void)attachToPrimaryStreamWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005caaf
- (id)initWithMasterAudioStream:(id)arg1 name:(id)arg2;	// IMP=0x001000000005c98a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
