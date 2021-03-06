//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol CAMMutableCaptureRequestPersistence <NSObject>
@property(nonatomic) _Bool shouldDelayRemotePersistence;
@property(nonatomic) _Bool shouldPersistDiagnosticsToSidecar;
@property(nonatomic) _Bool shouldExtractDiagnosticsFromMetadata;
@property(copy, nonatomic) NSString *persistenceUUID;
@property(copy, nonatomic) NSURL *localDestinationURL;
@property(nonatomic) long long temporaryPersistenceOptions;
@property(nonatomic) unsigned long long deferredPersistenceOptions;
@property(nonatomic) long long persistenceOptions;
@end

