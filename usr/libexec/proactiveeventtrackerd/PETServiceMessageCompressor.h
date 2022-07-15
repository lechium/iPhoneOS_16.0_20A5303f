//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface PETServiceMessageCompressor : NSObject
{
    NSMutableData *_srcBuf;	// 8 = 0x8
    NSMutableData *_dstBuf;	// 16 = 0x10
    struct {
        char *dst_ptr;
        unsigned long long dst_size;
        char *src_ptr;
        unsigned long long src_size;
        void *state;
    } _stream;	// 24 = 0x18
    _Bool _closed;	// 64 = 0x40
    NSMutableData *_compressedMessages;	// 72 = 0x48
}

+ (id)decompress:(id)arg1;	// IMP=0x004000000000d99a
- (void).cxx_destruct;	// IMP=0x002000000000d967
@property(retain) NSMutableData *compressedMessages; // @synthesize compressedMessages=_compressedMessages;
- (void)close;	// IMP=0x001000000000d80a
- (void)_errorClose;	// IMP=0x001000000000d7dc
- (void)_flushBuffer;	// IMP=0x001000000000d656
- (void)addMessage:(id)arg1;	// IMP=0x001000000000d583
- (id)init;	// IMP=0x001000000000d42c

@end
