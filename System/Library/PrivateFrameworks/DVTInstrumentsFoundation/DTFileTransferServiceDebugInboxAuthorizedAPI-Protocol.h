//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSData, NSDictionary, NSError, NSString, NSURL;

@protocol DTFileTransferServiceDebugInboxAuthorizedAPI <DTXAllowedRPC>
- (NSURL *)transferData:(NSData *)arg1 intoAppContainerForBundleIdentifier:(NSString *)arg2 filename:(NSString *)arg3;
- (NSError *)openFileInDocumentDebugInbox:(NSString *)arg1 forApplicationWithBundleIdentifier:(NSString *)arg2 withAnnotation:(NSDictionary *)arg3;
- (NSError *)transferFile:(NSData *)arg1 toDebugInboxOfApplicationWithBundleIdentifier:(NSString *)arg2 destinationFilename:(NSString *)arg3;
@end

