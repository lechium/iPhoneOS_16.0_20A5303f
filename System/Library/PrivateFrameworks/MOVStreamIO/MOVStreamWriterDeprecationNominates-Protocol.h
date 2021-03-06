//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MOVStreamIO/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol MOVStreamWriterDeprecationNominates <NSObject>
@property unsigned long long fifoBufferCapacity;
@property _Bool legacyKeysMode;
- (unsigned long long)fifoBufferSizeForStream:(NSString *)arg1;
- (_Bool)relateStream:(NSString *)arg1 toStream:(NSString *)arg2 relationSpecifier:(NSString *)arg3;
- (_Bool)setTrackMetadata:(NSDictionary *)arg1 forMetadataStream:(NSString *)arg2;
- (_Bool)setTrackMetadata:(NSDictionary *)arg1 forStream:(NSString *)arg2;
@end

