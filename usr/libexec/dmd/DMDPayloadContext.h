//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface DMDPayloadContext : NSObject
{
    NSString *_organizationIdentifier;	// 8 = 0x8
    NSDictionary *_assetProvidersByPayloadIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000006b640
@property(copy, nonatomic) NSDictionary *assetProvidersByPayloadIdentifier; // @synthesize assetProvidersByPayloadIdentifier=_assetProvidersByPayloadIdentifier;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;

@end
