//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (Nvi)
- (id)strRepForFloatData;	// IMP=0x0000000000102a74
- (id)rawMicChannelsDataWithNumSamplesPerChannel:(unsigned long long)arg1;	// IMP=0x00000000001029d9
- (void)splitAudioDataToReachSampleCount:(unsigned long long)arg1 currSampleCount:(unsigned long long)arg2 numBytesPerSample:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000102806
- (id)_cs_xpcObject;	// IMP=0x000000000011193e
- (id)_cs_initWithXPCObject:(id)arg1;	// IMP=0x0000000000111867
@end

