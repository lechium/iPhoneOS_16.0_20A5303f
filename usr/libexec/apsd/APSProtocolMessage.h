//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface APSProtocolMessage : NSObject
{
    int _command;	// 8 = 0x8
    NSMutableData *_data;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004fa12
- (id)copyMessageData;	// IMP=0x001000000004f986
- (void)appendEightByteItem:(unsigned char)arg1 bytes:(unsigned long long)arg2;	// IMP=0x001000000004f937
- (void)appendFourByteItem:(unsigned char)arg1 bytes:(unsigned int)arg2;	// IMP=0x001000000004f8e8
- (void)appendTwoByteItem:(unsigned char)arg1 bytes:(unsigned short)arg2;	// IMP=0x001000000004f89b
- (void)appendOneByteItem:(unsigned char)arg1 byte:(unsigned char)arg2;	// IMP=0x001000000004f84e
- (void)appendItem:(unsigned char)arg1 string:(id)arg2;	// IMP=0x001000000004f7f5
- (void)appendItem:(unsigned char)arg1 data:(id)arg2;	// IMP=0x001000000004f776
- (void)_appendEightBytes:(unsigned long long)arg1;	// IMP=0x001000000004f745
- (void)_appendFourBytes:(unsigned int)arg1;	// IMP=0x001000000004f716
- (void)_appendTwoBytes:(unsigned short)arg1;	// IMP=0x001000000004f6e4
- (void)_appendOneByte:(unsigned char)arg1;	// IMP=0x001000000004f6b7
- (id)initWithCommand:(int)arg1;	// IMP=0x001000000004f656

@end
