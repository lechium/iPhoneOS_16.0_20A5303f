//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSData, NSURL;

@protocol STFilesystemPrimitives
- (MISSING_TYPE *)enumerateRegularFilesInDirectoryAtURL:withBlock: /* Error: Ran out of types for this method. */;
- (NSData *)readDataFromFileURL:(NSURL *)arg1 error:(id *)arg2;
- (_Bool)removeFileURL:(NSURL *)arg1 error:(id *)arg2;
- (_Bool)writeData:(NSData *)arg1 toFileURL:(NSURL *)arg2 error:(id *)arg3;
- (_Bool)createDirectoryAtURL:(NSURL *)arg1 error:(id *)arg2;
@end
