//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CFPDCFDataBuffer
{
    struct __CFData *data;	// 8 = 0x8
}

- (id)copyXPCData;	// IMP=0x0000000000041d8f
- (struct __CFData *)copyCFData;	// IMP=0x0000000000041d72
- (void)dealloc;	// IMP=0x0000000000041d0e
- (unsigned long long)length;	// IMP=0x0000000000041cfe
- (void *)bytes;	// IMP=0x0000000000041cee
- (id)initWithCFData:(struct __CFData *)arg1;	// IMP=0x0000000000041c75

@end
