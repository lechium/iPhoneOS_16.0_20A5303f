//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

@interface CLFallLogger : NSObject
{
    NSObject<OS_dispatch_queue> *fQueue;	// 8 = 0x8
    NSString *fLogDirectory;	// 16 = 0x10
    NSString *fLogFilePrefix;	// 24 = 0x18
    long long fRotation;	// 32 = 0x20
    NSOutputStream *fOutputStream;	// 40 = 0x28
    long long fHour;	// 48 = 0x30
    NSDate *fDate;	// 56 = 0x38
}

- (void)logData:(id)arg1;	// IMP=0x0020000000a1d7d5
- (id)_outputStream;	// IMP=0x0010000000a1d38f
- (void)flushInMemoryDataWithCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a1d28f
- (void)flushToFile;	// IMP=0x0010000000a1d208
- (void)clearLogs;	// IMP=0x0010000000a1d15d
- (void)stopLogging;	// IMP=0x0010000000a1d0fc
- (_Bool)_shouldRotateToHour:(long long *)arg1 date:(id *)arg2;	// IMP=0x0010000000a1d036
- (_Bool)_shouldRotate;	// IMP=0x0010000000a1d020
- (void)_stopLoggingOnQueue;	// IMP=0x0010000000a1cfdc
- (id)currentFilename;	// IMP=0x0010000000a1cebc
- (id)_currentFilename;	// IMP=0x0010000000a1cdf3
- (id)logDirectory;	// IMP=0x0010000000a1cde9
- (void)dealloc;	// IMP=0x0010000000a1cd89
- (id)initToDirectory:(id)arg1 prefix:(id)arg2 rotation:(long long)arg3;	// IMP=0x0010000000a1cd2c
- (id)init;	// IMP=0x0010000000a1ccde

@end
