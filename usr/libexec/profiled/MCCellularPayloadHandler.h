//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface MCCellularPayloadHandler
{
    NSDictionary *_setAsideDictionary;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000007f337
@property(retain, nonatomic) NSDictionary *setAsideDictionary; // @synthesize setAsideDictionary=_setAsideDictionary;
- (void)remove;	// IMP=0x001000000007f1d9
- (void)unsetAside;	// IMP=0x001000000007f164
- (void)setAside;	// IMP=0x001000000007f02c
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000007eb9c

@end

