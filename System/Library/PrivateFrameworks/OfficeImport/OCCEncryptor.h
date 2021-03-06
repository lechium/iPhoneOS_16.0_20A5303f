//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCCEncryptor : NSObject
{
    NSString *mOutputFilename;	// 8 = 0x8
    struct OCCStreamer *mStreamer;	// 16 = 0x10
}

+ (id)allocTempFileWithBase:(id)arg1 filename:(id *)arg2;	// IMP=0x006000000037e45f
- (void).cxx_destruct;	// IMP=0x000000000037e70a
@property(readonly, nonatomic) NSString *outputFilename; // @synthesize outputFilename=mOutputFilename;
- (_Bool)encryptIntoOutputFile;	// IMP=0x000000000037e409
- (_Bool)encrypt;	// IMP=0x000000000037e3d6
- (id)initWithStreamer:(struct OCCStreamer *)arg1;	// IMP=0x000000000037e345
- (void)dealloc;	// IMP=0x000000000037e305

@end

