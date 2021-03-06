//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/NSObject-Protocol.h>

@class NSData, NSString;
@protocol HMBQueryableModelFieldCoder;

@protocol HMBQueryableModelFieldCoder <NSObject>
+ (id <HMBQueryableModelFieldCoder>)hmbDecodeQueryableParameter:(NSData *)arg1;
+ (NSData *)hmbEncodeQueryableParameter:(id <HMBQueryableModelFieldCoder>)arg1;

@optional
+ (NSString *)hmbDescriptionForEncodedQueryableVariable:(NSData *)arg1;
@end

