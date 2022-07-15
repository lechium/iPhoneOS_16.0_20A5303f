//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRAVOutputDevice;

@interface MRDOutputDeviceRoute
{
    MRAVOutputDevice *_outputDevice;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000f0c89
@property(readonly, nonatomic) MRAVOutputDevice *outputDevice; // @synthesize outputDevice=_outputDevice;
- (_Bool)matchesUniqueIdentifier:(id)arg1;	// IMP=0x00100000000f0c5b
- (id)extendedInfo;	// IMP=0x00100000000f0bf2
- (id)dictionary;	// IMP=0x00100000000f08cf
- (_Bool)canBeDefaultSystemRoute;	// IMP=0x00100000000f08c7
- (_Bool)canBeDefaultRoute;	// IMP=0x00100000000f08bf
- (_Bool)isSpeakerRoute;	// IMP=0x00100000000f0825
- (_Bool)isPicked;	// IMP=0x00100000000f0624
- (_Bool)isOutputRoute;	// IMP=0x00100000000f061c
- (_Bool)isInputRoute;	// IMP=0x00100000000f0614
- (id)modelName;	// IMP=0x00100000000f05f7
- (id)type;	// IMP=0x00100000000f0551
- (id)name;	// IMP=0x00100000000f0534
- (id)MACAddress;	// IMP=0x00100000000f0517
- (id)uniqueIdentifier;	// IMP=0x00100000000f04c3
- (id)description;	// IMP=0x00100000000f0447
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000f03ba
- (unsigned long long)hash;	// IMP=0x00100000000f039d
- (id)initWithOutputDevice:(id)arg1;	// IMP=0x00100000000f032f

@end
