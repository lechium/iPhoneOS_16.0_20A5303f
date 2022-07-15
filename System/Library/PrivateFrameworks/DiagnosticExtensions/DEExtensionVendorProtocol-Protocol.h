//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DiagnosticExtensions/NSObject-Protocol.h>

@class NSDictionary;

@protocol DEExtensionVendorProtocol <NSObject>
- (void)isExtensionEnhancedLoggingStateOnWithHandler:(void (^)(_Bool))arg1;
- (void)teardownWithParameters:(NSDictionary *)arg1 withHandler:(void (^)(void))arg2;
- (void)setupWithParameters:(NSDictionary *)arg1 withHandler:(void (^)(void))arg2;
- (void)attachmentsForParameters:(NSDictionary *)arg1 withHandler:(void (^)(NSArray *))arg2;
- (void)attachmentListWithHandler:(void (^)(NSArray *))arg1;
@end
