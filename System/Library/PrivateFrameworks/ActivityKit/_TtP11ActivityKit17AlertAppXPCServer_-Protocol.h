//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, _TtC11ActivityKit21OpaqueActivityPayload;

@protocol _TtP11ActivityKit17AlertAppXPCServer_
- (void)presentAlertWithActivityIdentifier:(NSString *)arg1 payload:(_TtC11ActivityKit21OpaqueActivityPayload *)arg2 options:(NSData *)arg3 completion:(void (^)(NSError *))arg4;
- (void)dismissAlertWith:(NSString *)arg1;
@end

