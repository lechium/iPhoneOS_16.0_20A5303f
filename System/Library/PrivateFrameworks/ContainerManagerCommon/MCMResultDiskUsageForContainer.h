//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MCMResultDiskUsageForContainer
{
    unsigned long long _diskUsageBytes;	// 8 = 0x8
}

@property(nonatomic) unsigned long long diskUsageBytes; // @synthesize diskUsageBytes=_diskUsageBytes;
- (_Bool)encodeResultOntoReply:(id)arg1;	// IMP=0x00000000000c66be
- (id)initWithDiskUsageBytes:(unsigned long long)arg1;	// IMP=0x00000000000c6657

@end

